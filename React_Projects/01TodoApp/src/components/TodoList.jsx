import { useState, useEffect } from 'react'
import { v4 as uuidv4 } from 'uuid'
import edit from '../img/pencil.svg'
import remove from '../img/trash.svg'




function TodoList() {
    const [Todo, setTodo] = useState('')
    const [Todos, setTodos] = useState([])

    useEffect(() => {
        let todoString = localStorage.getItem("todos")
        if (todoString) {
            let todos = JSON.parse(localStorage.getItem("todos"))
            setTodos(todos)
        }
    }, [])

    const saveToLocalStorage = (params) => {
        localStorage.setItem("todos", JSON.stringify(Todos))
    }


    const addTodo = () => {
        if (Todo.length <= 3) {
            alert("Todo must contain atleast 4 letters")
        }
        else {

            setTodos([...Todos, { Todo, id: uuidv4() }])
            setTodo('')
        }
        saveToLocalStorage()
    }

    const [UpdateIndex, setUpdateIndex] = useState(null)
    const [EnableEdit, setEnableEdit] = useState(false)
    const handleEdit = (index, id) => {
        setEnableEdit(true)
        setUpdateIndex(index)
        const t = Todos.filter(i => i.id === id)
        setTodo(t[0].Todo)
        saveToLocalStorage()
    }
    const saveChange = () => {
        setEnableEdit(false)
        console.log(UpdateIndex)
        Todos[UpdateIndex].Todo = Todo
        setTodo('')
        console.log(Todo)
        saveToLocalStorage()
    }


    const handleDelete = (id) => {
        const newTodos = Todos.filter(i => i.id !== id)
        setTodos(newTodos)
        saveToLocalStorage()
    }

    return (
        <div className=' bg-gray-500 sm:w-[70%] mt-3 m-auto rounded-2xl min-h-[87vh] w-[100%]'>
            <div className='sm:flex-row sm:justify-center flex-col items-center p-5'>
                <h2 className='font-bold text-xl mb-3'>Add a Todo</h2>
                <div className='flex w-full gap-1'>
                    <input value={Todo} onChange={(e) => setTodo(e.target.value)} type="text" className='rounded-lg p-2 w-[782px] focus-visible:decoration-none' />
                    <button type='submit' onClick={addTodo} className={EnableEdit ? 'hidden' : ' bg-purple-800 p-2 rounded-lg font-bold border-2 border-purple-900 hover:bg-purple-900 hover:text-white hover:border-2 active:border-white ml-1 '}>Add</button>

                    <button type='submit' onClick={saveChange} className={EnableEdit ? ' bg-purple-800 p-2 rounded-lg font-bold border-2 border-purple-900 hover:bg-purple-900 hover:text-white hover:border-2 active:border-white ml-1 ' : 'hidden'}>Save</button>
               </div>
            </div>

            <div className='flex-col gap-2 items-center p-5 '>
                <h2 className='font-bold text-xl'>Your todos</h2>
                <div className='flex-col gap-2 items-center overflow-hidden'>
                    {
                        Todos.length === 0 ? <div className=' mt-12 text-center font-bold text-6xl text-gray-600 '>Todo List is empty</div> :
                            Todos.map((item, index) => (
                                <div key={item.id} className=' bg-gray-300 flex justify-between m-2 rounded-xl items-center p-2'>
                                    <p className=' max-w-[680px] shrink break-all '>{item.Todo}</p>
                                    <div className=' min-w-[105px] flex flex-none'>
                                        <button onClick={e => handleEdit(index, item.id)} className='bg-purple-800 p-2 rounded-lg font-bold border-2 border-purple-900 hover:bg-purple-900 hover:text-white hover:border-2 active:border-white m-1' >
                                            <img className=' hover:invert ' src={edit} alt="EDIT" />
                                        </button>
                                        <button onClick={e => handleDelete(item.id)} className='bg-purple-800 p-2 rounded-lg font-bold border-2 border-purple-900 hover:bg-purple-900 hover:text-white hover:border-2 active:border-white m-1'>
                                            <img className=' hover:invert' src={remove} alt="DELETE" />
                                        </button>
                                    </div>
                                </div>
                            ))
                    }
                </div>
            </div>
        </div>
    )
}

export default TodoList
