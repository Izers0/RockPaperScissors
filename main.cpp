#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// Declare functions
string computerDecision();
string playerChoice();

int main() {

    // random seed generate for a random number
    srand(time(0));

    cout << "Welcome to Rock Paper Scissors!\n\n";

    cout << "Choose Rock, Paper or Scissors:\n";

    // Display player choice
    string player = playerChoice();
    cout << player << endl;

    // Display computers choice
    string computer = computerDecision();
    cout << computer << endl;
}

string playerChoice() {

    // Take the player choice as a string and display it
    string choice;

    cin >> choice;

    // Check that the user chooses a valid option
    if (choice != "rock" && choice != "paper" && choice != "scissors") {

        cout << "Please choose Rock, Paper or Scissors!\n";
    }
    return "Player: " + choice;
}

string computerDecision() {

    // Generate the random number between 0 and 100
    int number = (rand() % 3) + 1;

    // Switch case for computer choice
    switch (number) {

        case 1:
            return "Computer: Rock";
        case 2:
            return "Computer: Paper";
        case 3:
            return "Computer: Scissors";
        default:
            return "Computer: Rock";
    }
}