#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

string computerDecision();
string playerChoice();

int main() {

    // random seed generate for a random number
    srand(time(0));

    cout << "Welcome to Rock Paper Scissors!\n\n";

    cout << "Choose Rock, Paper or Scissors:\n";

    // Display player choice
    string player = playerChoice();
    cout << "Player: " << player << endl;

    // Display computers choice
    string computer = computerDecision();
    cout << "Computer: " << computer << endl;

}

string playerChoice() {

    // Take the player choice as a string and display it
    string choice;

    cin >> choice;

    // Check that the user chooses a valid option
    if (choice != "rock" || choice != "paper" || choice != "scissors") {

        cout << "Please choose Rock, Paper or Scissors!\n";
    }
    else {

        cout << "Player: " << choice << endl;
    }
}

string computerDecision() {

    // Generate the random number between 0 and 100
    int number = (rand() % 3) + 1;

    // Switch case for computer choice
    switch (number) {

        case 1:
            cout << "Computer: Rock";
            break;
        case 2:
            cout << "Computer: Paper";
            break;
        case 3:
            cout << "Computer: Scissors";
            break;
        default:
            cout << "Computer: Rock";
            break;
    }
}