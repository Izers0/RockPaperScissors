#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

string computerDecision();

int main() {

    // random seed generate for a random number
    srand(time(0));

    cout << "Welcome to Rock Paper Scissors!\n\n";

    cout << "Choose Rock, Paper or Scissors:\n";

    // Take the users choice as a string and display it
    string choice;
    cin >> choice;
    cout << "Player: " << choice << endl;

    // Display computers choice
    string computer = computerDecision();
    cout << "Computer: " << computer << endl;

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
        default:
            cout << "Computer: Rock";
            break;
    }
}