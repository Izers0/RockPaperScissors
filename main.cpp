#include <iostream>
#include <ctime>
using namespace std;

// Declare functions
string computerDecision();
string playerChoice();
string winLogic(string player, string computer);

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

    // Decide the winner and display it
    string winner = winLogic(player, computer);
    cout << winner << endl;
}

/* Players Choice */
string playerChoice() {

    // Take the player choice as a string and display it
    string choice;

    // Loop until the user uses the correct input
    while (choice != "rock" && choice != "paper" && choice != "scissors") {

        // get user input
        cin >> choice;

        cout << "Player: ";

        // Check that the user chooses a valid option
        if (choice != "rock" && choice != "paper" && choice != "scissors") {

            cout << "Please choose rock, paper or scissors!\n";
        } else {
            return choice;
        }
    }
}

/* Computers Choice */
string computerDecision() {

    // Generate the random number between 0 and 100
    int number = (rand() % 3) + 1;

    cout << "Computer: ";

    // Switch case for computer choice
    switch (number) {

        case 1:
            return "rock";
        case 2:
            return "paper";
        case 3:
            return "scissors";
        default:
            return "rock";
    }
}

/* Win Logic */
string winLogic (string player, string computer) {

    // Initialise choice value for win condition
    int playerValue = 0;
    int computerValue = 0;

    // Player Choice
    if (player == "rock") {
        playerValue = 1;
    } else if (player == "paper") {
        playerValue = 2;
    } else{
        playerValue = 3;
    }

    // Computer Choice
    if (computer == "rock") {
        computerValue = 1;
    } else if (computer == "paper") {
        computerValue = 2;
    } else{
        computerValue = 3;
    }

    // Compare the value of the users choice and the computers choice
    if (playerValue == computerValue) {
        cout << "Draw! \n";
    } else if ((playerValue == 1 && computerValue == 3) ||
              (playerValue == 2 && computerValue == 1) ||
              (playerValue == 3 && computerValue == 2)) {
        cout << "You win! \n";
    } else {
        return "You lose! \n";
    }
}