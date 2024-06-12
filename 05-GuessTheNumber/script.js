let randomNum = parseInt(Math.random()*100 + 1)
const userInput = document.querySelector('#guessNum')
const submit = document.querySelector('#Submit')
const prevGuesses = document.querySelector('#prevGuess')
const showAttempts = document.querySelector('#remAttempts')
const Result = document.querySelector('.displayResult')
const startNewGame = document.querySelector('#newGame')
let attempts = 10
let playGame = true


    submit.addEventListener('click', function (e) {
        if (playGame){
            e.preventDefault();
            const guess = parseInt(userInput.value);
            console.log(guess);
            validateGuess(guess);
        }
    });

function validateGuess(guess) {
    if (isNaN(guess)) {
        alert('Please enter a valid number')
        userInput.value = '';

    } else if(guess <= 0) {
        alert('Please enter a number greater than 1')
        userInput.value = '';
        
    } else if(guess > 100) {
        alert('Please enter a number less than 100')
        userInput.value = '';
        
    } else {
        
        if (attempts === 1) {
            updateMessage( --attempts , guess)
            if (guess === randomNum) {
                displayResult(`YOU GUESSED IT RIGHT . Random number was ${randomNum}`)
                endGame()
        
            } else {
                displayResult(`Game Over. Random number was ${randomNum}`);
                endGame();
            }
            
        } else {
            updateMessage( --attempts , guess)
            checkGuess(guess);
        }
    }
}

function checkGuess(guess){
    if (guess === randomNum) {
        displayResult(`YOU GUESSED IT RIGHT . Random number was ${randomNum}`)
        endGame()

    } else if(guess < randomNum) {
        displayResult('GUESS A HIGHER NUMBER')
        console.log(randomNum);
        
        
    } else if(guess > randomNum) {
        displayResult('GUESS A LOWER NUMBER')
        
    }
}

function updateMessage( attempts , guess){
    userInput.value = '';
    showAttempts.innerHTML = `${attempts}`;
    prevGuesses.innerHTML = prevGuesses.innerHTML + guess + ` | ` ;
}

function displayResult(message) {
    Result.innerHTML = `<h2>${message}</h2>`;
}
function endGame(){
    submit.style.display = 'none'
    startNewGame.style.display = 'block'
    playGame = false
    userInput.setAttribute('disabled', '')
    // newGame()
}
function newGame(){
    startNewGame.addEventListener('click', ()=>{
        userInput.removeAttribute('disabled')
        submit.style.display = 'block'
        startNewGame.style.display = 'none'
        randomNum = parseInt(Math.random()*100 + 1)
        attempts = 10
        playGame = ture
    });
}


