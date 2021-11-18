#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// Simple function to print rules !
void rules() {
    cout << "Rules are simple : The game is going to choose a number and you have to find it !\nNumber are choosen between 1 and 100 !\nGood Luck !\n" << endl;
}

int main()
{
    srand((unsigned)time(0));
    int secretValue;
    int userAnswer;
    int maxGuess(10);

    cout << "Shall We Play A Game v0.5\nAdded Functionnality :\n\t- Limited number of guess !" << endl;
    cout << "Previous version :\n\tv0.4 : - Rules display !\n\t v0.3 : Now with random number selection !\n\t v0.2 : Added a loop to submit multiple answer !\n\t v0.1 : First version\n" << endl;

    rules();

    secretValue = (rand() % 100) + 1;

    do {
        cout << "What's your choice ? :" << endl;
        cin >> userAnswer;
        if (userAnswer > secretValue) {
            cout << "Too big !\n" << endl;
        }

        if (userAnswer < secretValue) {
            cout << "Too small !\n" << endl;
        }

        maxGuess -= 1;

    }while((maxGuess > 0) && (userAnswer != secretValue));

    if (maxGuess != 0){
        cout << "You rock ! You found the correct value !" << endl;
    }
    else {
        cout << "You loose :( Try again ;)" << endl;
    }

    return 0;
}
