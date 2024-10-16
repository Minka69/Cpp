#include <iostream>
#include <cstdlib>    // For rand() and srand()
#include <ctime>      // For time()
#include <limits>     // For std::numeric_limits
#include <string>     // For std::string
#include <vector>     // For std::vector to store guesses

int main() {
    std::srand(static_cast<unsigned int>(std::time(0)));

    bool playAgain = true;
    std::string input;
    int totalRounds = 0;  // Counter for the number of rounds played

    while (playAgain) {
        totalRounds++;  // Increment rounds counter
        int target = std::rand() % 100 + 1;  // Random number between 1 and 100
        int guess;
        int attempts = 0;           // Track guesses within the current game
        std::vector<int> guesses;   // Vector to store each guess in the current game
        
        std::cout << "Welcome to the Number Guessing Game!\n";
        std::cout << "I've chosen a number between 1 and 100. Try to guess it!\n";
        std::cout << "Type 'exit' anytime to quit the game.\n";

        bool guessedCorrectly = false;
        
        // Game loop
        while (!guessedCorrectly) {
            std::cout << "Enter your guess: ";
            std::cin >> input;

            // Check if the player wants to exit
            if (input == "exit") {
                std::cout << "Thanks for playing! Goodbye!\n";
                std::cout << "Total rounds played: " << totalRounds - 1 << "\n";  // Subtract 1 to not count the unfinished game
                return 0;  // Exit the program immediately
            }

            // Convert input to an integer if it's a valid guess
            try {
                guess = std::stoi(input);
            } catch (...) {
                std::cout << "Invalid input. Please enter a number.\n";
                continue;
            }

            // Check if the guess is out of range
            if (guess < 1 || guess > 100) {
                std::cout << "Out of range! Please guess a number between 1 and 100.\n";
                continue;
            }

            attempts++;  // Count valid guesses in the current game
            guesses.push_back(guess);  // Store the guess in the vector

            // Check if the guess is correct
            if (guess > target) {
                std::cout << "Too high! Try again.\n";
            } else if (guess < target) {
                std::cout << "Too low! Try again.\n";
            } else {
                std::cout << "Congratulations! You guessed it in " << attempts << " attempts.\n";
                guessedCorrectly = true;
            }
        }

        // Display all guesses made during the game
        std::cout << "Your guesses in this game were: ";
        for (int g : guesses) {
            std::cout << g << " ";
        }
        std::cout << "\n";
        std::cout << "Total guesses in this game: " << attempts << "\n";

        // Ask if the player wants to play again
        char choice;
        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> choice;

        if (choice == 'n' || choice == 'N') {
            playAgain = false;
            std::cout << "Thanks for playing! Goodbye!\n";
            std::cout << "Total rounds played: " << totalRounds << "\n";
        }
    }

    return 0;
}
