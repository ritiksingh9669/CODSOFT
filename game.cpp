#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    // Initialize random seed
    std::srand(std::time(0));

    // Generate a random number between 1 and 100
    int randomNumber = std::rand() % 100 + 1;

    int userGuess;
    bool guessedCorrectly = false;

    // Introduce the game
    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have selected a random number between 1 and 100." << std::endl;
    std::cout << "Try to guess it!" << std::endl;

    // Keep asking until the user guesses correctly
    while (!guessedCorrectly)
    {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;

        if (userGuess > randomNumber)
        {
            std::cout << "Too high! Try again." << std::endl;
        }
        else if (userGuess < randomNumber)
        {
            std::cout << "Too low! Try again." << std::endl;
        }
        else
        {
            std::cout << "Congratulations! You guessed the correct number: " << randomNumber << std::endl;
            guessedCorrectly = true; // End the game
        }
    }

    return 0;
}
