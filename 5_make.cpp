// Include necessary libraries for input/output, random numbers, and time.
#include <iostream> // This is for input and output, like printing to the screen (cout) and reading user input (cin).
#include <cstdlib>  // This is for generating random numbers (rand, srand).
#include <ctime>    // This is used to get the current time, which helps in generating a truly random number.

int main() { // This is the main function where the program execution begins.

    // Seed the random number generator.
    // This line makes sure you get a different random number each time you run the program.
    srand(time(0)); 

    // Generate a random number between 1 and 100.
    // rand() % 100 gives a number from 0 to 99. We add 1 to make it 1 to 100.
    int randomNumber = rand() % 100 + 1; 

    int userGuess;      // This variable will store the number the user guesses.
    int guessCount = 0; // This variable will count how many guesses the user makes.

    std::cout << "I have a random number between 1 and 100." << std::endl; // A welcome message.
    std::cout << "Can you guess what it is?" << std::endl; // Asks the user to start guessing.

    // This do-while loop will continue to run as long as the user's guess does not equal the random number.
    // The code inside the loop will always run at least once.
    do {
        std::cout << "Enter your guess: "; // Prompts the user to enter a guess.
        std::cin >> userGuess;             // Reads the user's input and stores it in the userGuess variable.

        guessCount++; // Increments the guess counter by one for each attempt. This satisfies the requirement to keep track of guesses.

        if (userGuess > randomNumber) { // Checks if the guess is too high.
            std::cout << "Too high, try again." << std::endl; // Informs the user their guess was too high.
        } 
        else if (userGuess < randomNumber) { // Checks if the guess is too low.
            std::cout << "Too low, try again." << std::endl; // Informs the user their guess was too low.
        }

    } while (userGuess != randomNumber); // The condition to continue the loop. It repeats until the guess is correct.

    // This code runs only after the loop has finished (meaning the user guessed correctly).
    std::cout << "\nCongratulations! You guessed the number." << std::endl; // Congratulates the user.
    std::cout << "It took you " << guessCount << " guesses." << std::endl;  // Displays the total number of guesses made.

    return 0; // Indicates that the program has finished successfully.
}
