import React from 'react'

function About() {
  return (
    <div className='w-full flex-col bg-gray-500 p-5 sm:p-8 sm:w-[70%] sm:mt-3 m-auto rounded-2xl min-h-[87vh]' >
      <h1 className='text-center font-bold text-3xl'>About Our ToDo App</h1>
      <p className='text-xl m-3'>Welcome to our ToDo App, your ultimate productivity companion designed to help you organize your life efficiently and effortlessly. Whether you are managing personal tasks, professional projects, or daily chores, our app provides a seamless and intuitive experience to ensure you stay on top of everything.</p>
      <h2 className=' text-center font-bold text-2xl'>Key Features :</h2>
      <ul className=' list-disc list-outside text-xl m-5 '>
        <li>Simple and User-Friendly Interface: Our clean and intuitive design makes it easy for anyone to start managing their tasks right away.</li>
        <li>Edit and Delete: you can Edit you previously saved todos and also you can delete the them by using the Edit/Delete buttons </li>
      </ul>
    </div>
  )
}

export default About
