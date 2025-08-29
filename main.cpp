#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void computerDecision();

int main() {

    cout << "Welcome to Rock Paper Scissors!\n\n";

    cout << "Choose Rock, Paper or Scissors:\n";

    // Take the users choice as a string
    string choice;
    cin >> choice;


}

void computerDecision() {

    // random seed generate for a random number
    srand(time(0));

    // generate the random number
    const int randomNumber = rand();

    // Generate the random number between 0 and 100
    const int number = (randomNumber % 3) + 1;

    if (number == 1) {

        cout << "Computer: Rock";
    } else if (number == 2) {

        cout << "Computer: Paper";
    }
    else {

        cout << "Computer: Scissors";
    }

}