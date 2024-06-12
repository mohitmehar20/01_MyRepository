// Your JavaScript code goes here

let num1 = "0";
let num2 = "0";
let operator = null;

// Functions to handle button clicks and perform calculations

function appendNumber(number) {
  if (num1 != "0" && num2 != "0" && operator != null) {
    if (number == "+" || number == "-" || number == "*" || number == "/") {
      calculate()
    }
    
  }

  // /if user enter any of the oprator(+ , - , *, /) then store the if in variable 'operator' and display it 

  if (number == "+" || number == "-" || number == "*" || number == "/") {
    operator = number;
    document.querySelector("#calculatorDisplay").innerHTML = num1 + operator
  } 

  // if the operator is already given by the user then store the up coming value in the variable 'num2' and display it on the screen

  else if (operator) {
    if (num2 == "0") {
      num2 = number;
    } else {
      num2 = num2 + number;
    }

    document.querySelector("#calculatorDisplay").innerHTML = num1 + operator + num2
  }

  //  if the operator is not given by the user then store the given input as first operant in variable 'num1' and display it on the screeen 
  if (!operator) {
    if (num1 == "0") {
      num1 = number;
    } else {
      num1 = num1 + number;
    }
    document.querySelector("#calculatorDisplay").innerHTML = num1
  }
}

//  Remember that both the values store in the variable are in the form of string , therefore they must be converted into integer value with help of 'parseInt ' function

//  the functions responsible for the operations perform on num1 and num2 are defined here which returns the reuslt as integer

// function for addition
function add() {
  return  parseInt(num1) + parseInt(num2);
   
}

// function for subtraction
function subtract() {
  return parseInt(num1) - parseInt(num2);
}

// function for mutliplication
function multiply() {
  return parseInt(num1) * parseInt(num2);
}

// function for division
function divide() {
  return parseInt(num1) / parseInt(num2);
}

// 'clearDisplay' is responsible for clearing the screen and resetting the calculator to perform the new calculations again
function clearDisplay() {
  num1 = "0";
  num2 = "0";
  operator = null;
  document.querySelector("#calculatorDisplay").innerHTML = ``;
  console.log("clear");
}

// Now this 'calculate' function is responsible for calling the above operational function corresponding to the operator given as input by the user result is store in the variable 'result'
let result;

function calculate() {
  // Evaluate the expression and update the display
  switch (operator) {
    case "+":
      result = add();
      break;
    case "-":
      result = subtract();
      break;
    case "*":
      result = multiply();
      break;
    case "/":
      result = divide();
      break;

    default:
      break;
  }

  // After calculation is done the result is displayed to the screen and stored to 'num1' and 'operator' and 'num2' ar reset to their initial state are ready to perform the further calculations
  num1 = result.toString();
  num2 = "0";
  operator = null;
  document.querySelector("#calculatorDisplay").innerHTML = result;
}
