import { useState } from 'react'
import Navbar from './components/Navbar'
import { v4 as uuidv4 } from 'uuid'
import About from './components/About'
import TodoList from './components/TodoList'
import {createBrowserRouter, RouterProvider} from 'react-router-dom'

function App() {
  const router = createBrowserRouter(
    [
      {
        path:"/",
        element:<><Navbar /><TodoList/></> 
      },
      {
        path:"/About",
        element:<><Navbar /><About/></> 
      }
    ]
  )
  return (
    <div >
      <RouterProvider router ={router} />
    </div>
  )
}

export default App
