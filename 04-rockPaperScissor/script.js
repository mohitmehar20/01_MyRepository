function CompChoise() {
    random = Math.random() * 900;
    if (random <= 300) {
      document.querySelector(".CompChoice").innerHTML = `<h2>Computer have choosen...</h2><img src="img/rock.jpeg" alt="" />`;
      return "rock";
    } else if (random <= 600) {
      document.querySelector(".CompChoice").innerHTML = `<h2>Computer have choosen...</h2><img src="img/paper.jpeg" alt="" />`;
      return "paper";
    } else {
      document.querySelector(".CompChoice").innerHTML = `<h2>Computer have choosen...</h2><img src="img/scissor.jpeg" alt="" />`;
      return "scissor";
    }
  }
  
  
  function startGame(yourChoice) {
      
    let ComputersChoise = CompChoise();
  
    document.querySelector('.score').innerHTML =`<div><h3>Your choice = ${yourChoice} </h3></div> <div><h3> Computer's choice = ${ComputersChoise}</h3></div> `
  
    if (yourChoice == ComputersChoise) {
      console.log(`computer --> ${ComputersChoise}`);
      console.log(`You --> ${yourChoice}`);
      console.log("draw");
      document.querySelector('.result').innerHTML= `<h1>Match Draw</h1>`
    } else if (
      (yourChoice == "rock" && ComputersChoise == "paper") ||
      (yourChoice == "paper" && ComputersChoise == "scissor") ||
      (yourChoice == "scissor" && ComputersChoise == "rock")
      ) {
        console.log(`computer --> ${ComputersChoise}`);
        console.log(`You --> ${yourChoice}`);
        console.log("Computer win!");
        document.querySelector('.result').innerHTML= `<h1>Computer is the winnner!</h1>`
      } else {
        console.log(`computer --> ${ComputersChoise}`);
        console.log(`You --> ${yourChoice}`);
        console.log("You wins");
        document.querySelector('.result').innerHTML= `<h1>You are the Winner</h1>`
      }
      
  }
  