import React from 'react'

function Navbar() {
  return (
    <nav className=' sticky top-0 p-4 flex justify-between items-center bg-gray-700 text-white h-14 '>
      <span className='font-bold text-2xl'>My Tasks</span>
      <ul className='flex  w-32 justify-between'>
        <li className=' cursor-pointer hover:scale-105 hover:font-bold'>Home</li>
        <li className=' cursor-pointer hover:scale-105 hover:font-bold'>About</li>
      </ul>
    </nav>
  )
}

export default Navbar
