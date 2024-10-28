#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
using namespace std;

enum class Choice { ROCK = 1, PAPER, SCISSORS, EXIT = 0 };

Choice getComputerChoice() {
    return static_cast<Choice>(rand() % 3 + 1);
}

Choice getPlayerChoice() {
    int choice;
    while (true) {
        cout << "Enter your choice (1 = Rock, 2 = Paper, 3 = Scissors, 0 = Exit): ";
        cin >> choice;

        if (!cin.fail() && choice >= 0 && choice <= 3) {
            return static_cast<Choice>(choice);
        }
        
        cin.clear();  // Clear error flag
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discard invalid input
        cout << "Invalid choice. Please enter 1, 2, 3, or 0 to exit.\n";
    }
}

string choiceToString(Choice choice) {
    switch (choice) {
        case Choice::ROCK: return "Rock";
        case Choice::PAPER: return "Paper";
        case Choice::SCISSORS: return "Scissors";
        default: return "";
    }
}

void determineWinner(Choice player, Choice computer, int &playerWins, int &computerWins) {
    if (player == computer) {
        cout << "It's a tie!\n";
    } else if ((player == Choice::ROCK && computer == Choice::SCISSORS) ||
               (player == Choice::PAPER && computer == Choice::ROCK) ||
               (player == Choice::SCISSORS && computer == Choice::PAPER)) {
        cout << "You win this round!\n";
        ++playerWins;
    } else {
        cout << "Computer wins this round!\n";
        ++computerWins;
    }
}

void displayScore(int playerWins, int computerWins) {
    cout << "Current Score: You = " << playerWins << " | Computer = " << computerWins << '\n';
}

int main() {
    srand(static_cast<unsigned int>(time(0)));  
    int playerWins = 0, computerWins = 0;

    while (true) {
        Choice playerChoice = getPlayerChoice();
        if (playerChoice == Choice::EXIT) break;

        Choice computerChoice = getComputerChoice();

        cout << "You chose " << choiceToString(playerChoice) << ".\n";
        cout << "Computer chose " << choiceToString(computerChoice) << ".\n";

        determineWinner(playerChoice, computerChoice, playerWins, computerWins);
        displayScore(playerWins, computerWins);
    }

    cout << "Final Score: You = " << playerWins << " | Computer = " << computerWins << '\n';
    cout << "Thanks for playing!\n";

    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "Press Enter to exit...";
    cin.get();

    return 0;
}
