let num1 = "0";
let num2 = "0";
let operator = null;

// Functions to handle button clicks and perform calculations
function appendNumber(number) {
  if (num1 != "0" && num2 != "0" && operator != null) {
    calculate()
  }
  if (number == "+" || number == "-" || number == "*" || number == "/") {
    operator = number;
    document.querySelector("#calculatorDisplay").innerHTML = document.querySelector("#calculatorDisplay").innerHTML + number;
    // console.log(`operator ${operator}`);
  } 
  
  else if (operator != null) {
    if (num2 == "0") {
      num2 = number;
    } else {
      num2 = num2 + number;
    }
    document.querySelector("#calculatorDisplay").innerHTML = document.querySelector("#calculatorDisplay").innerHTML + number;
    // console.log(`num2 ${num2}`);
  }

  if (!operator) {
    if (num1 == "0") {
      num1 = number;
    } else {
      num1 = num1 + number;
    }
    document.querySelector("#calculatorDisplay").innerHTML = document.querySelector("#calculatorDisplay").innerHTML + number;
    // console.log(`numm1 ${num1}`);
  }
}
let result;
function add() {
  result = parseInt(num1) + parseInt(num2);
  return result;
}

function subtract() {
  result = parseInt(num1) - parseInt(num2);
  return result;
}

function multiply() {
  result = parseInt(num1) * parseInt(num2);
  return result;
}

function divide() {
  result = parseInt(num1) / parseInt(num2);
  return result;
}

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
  num1 = result.toString();
  num2 = "0";
  operator = null;
  document.querySelector("#calculatorDisplay").innerHTML = `${result}`;
}

function clearDisplay() {
  num1 = "0";
  num2 = "0";
  operator = null;
  document.querySelector("#calculatorDisplay").innerHTML = ``;
  console.log("clear");
}