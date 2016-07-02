//Boaz Raz

//Hi and low

// importing C++ laybrery
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main () {
    // initialize variable
    int downlimit = 0;
    int uplimit = 100;
    bool keepgoing = true;
    int turn = 0;
    int guess = 0;
    int answer = 0;

    // game info
    cout << "       ---- Welcome to number mind reader --- "<< endl << endl;
    cout << " ** Please think of a number between 0 to 100 ** " << endl << endl;

    // inialize while loop
    while (keepgoing) {
        turn++;
        answer = (uplimit + downlimit) /2;

        // optios menu
        cout << "Is the number? " << answer << endl;
        cout << " => if the number is too low press 1" << endl;
        cout << " => if the number is too high press 2" << endl;
        cout << " => press 0 if number is correct" << endl;
        cin >> guess;

        // adding switch
        // the way it works it that. wehn the number is too low the "ansswer" will be equle to the downlimit (min)
        // and the same think when it's the opposite
        switch (guess){
            case 0:
                keepgoing = false;
                break;
            case 1:
                downlimit = answer;
                break;
            case 2:
                uplimit = answer;
                break;

        } // end weitch

    } // end while loop

    // print the message
    cout << "It took me " << turn << " turns to guess your number!" << endl;
    cout << "The number you thought was " << answer << endl;
    return 0;
}// end main
