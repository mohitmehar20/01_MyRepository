import React from 'react'
import { Link, NavLink } from 'react-router-dom'

function Navbar() {
  return (
    <nav className=' sticky top-0 p-4 flex justify-between items-center w-[100wh] bg-gray-700 text-white h-14 '>
      <span className='font-bold text-2xl'>My Tasks</span>
      <ul className='flex  w-32 justify-between'>
        <li className=' cursor-pointer hover:scale-105 hover:font-bold mr-3'> <NavLink className={(e)=>(e.isActive ? " font-bold underline": "")} to='/' >Home</NavLink> </li>
        <li className=' cursor-pointer hover:scale-105 hover:font-bold mr-3'> <NavLink className={(e)=>(e.isActive ? " font-bold underline" : "")} to='/About' >About</NavLink></li>
      </ul>
    </nav>
  )
}

export default Navbar
