#include <iostream>
#include <ctime>
using namespace std;

// Declare functions
string computerDecision();
string playerChoice();
string winLogic();

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
    else {
        return choice;
    }
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

string winLogic () {

    // Initialise choice value for win condition
    int playerChoiceValue = 0;
    int computerChoiceValue = 0;

    // Player Choice
    if (playerChoice() == "rock") {
        playerChoiceValue += 1;
        cout << "Player: " + playerChoice();
    } else if (playerChoice() == "paper") {
        playerChoiceValue += 2;
        cout << "Player: " + playerChoice();
    } else{
        playerChoiceValue += 3;
        cout << "Player: " + playerChoice();
    }

    // Computer Choice
    if (computerDecision() == "rock") {
        computerChoiceValue += 1;
        cout << "Player: " + computerDecision();
    } else if (computerDecision() == "paper") {
        computerChoiceValue += 2;
        cout << "Player: " + computerDecision();
    } else{
        computerChoiceValue += 3;
        cout << "Player: " + computerDecision();
    }
}