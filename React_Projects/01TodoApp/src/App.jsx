import { useState } from 'react'
import Navbar from './components/Navbar'

function App() {
  const [Todo, setTodo] = useState('')
  const [Todos, setTodos] = useState([])

  const addTodo = () => {
    setTodos([...Todos, Todo])
    setTodo('')
  }

  const handleEdit = () => {

  }
  const handleDelete = () => {

  }

  return (
    <div className='h-full w-screen bg-gray-300'>
      <Navbar />
      <div className=' bg-gray-500 w-[70%] mt-3 m-auto rounded-2xl min-h-[87vh] '>
        <div className='flex gap-4 items-center p-5'>
          <h2 className='font-bold text-xl'>Add a Todo</h2>
          <input value={Todo} onChange={(e) => setTodo(e.target.value)} type="text" className='rounded-lg p-2 w-[40%]' />
          <button type='submit' onClick={addTodo} className=' bg-purple-800 p-2 rounded-lg font-bold'>Add</button>
        </div>

        <div className='flex-col gap-2 items-center p-5 '>
          <h2 className='font-bold text-xl'>Your todos</h2>
          <div className='flex-col gap-2 items-center overflow-hidden'>
            {
              Todos.map((todo) => (
                <div className=' bg-gray-300 flex m-2 justify-between rounded-xl items-center p-2'>
                  <p>{todo}</p>
                  <div>
                    <button onClick={handleEdit} className=' bg-purple-800 p-2 rounded-lg font-bold ml-1'>Edit</button>
                    <button onClick={handleDelete} className=' bg-purple-800 p-2 rounded-lg font-bold ml-1'>Delete</button>
                  </div>

                </div>
              ))
            }

          </div>
        </div>
      </div>
    </div>
  )
}

export default App
