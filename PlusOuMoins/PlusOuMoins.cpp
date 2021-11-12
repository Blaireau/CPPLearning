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
    cout << "Shall We Play A Game v0.4\nAdded Functionnality :\n\t- Rules display !" << endl;
    cout << "Previous version :\n\t v0.3 : Now with random number selection !\n\t v0.2 : Added a loop to submit multiple answer !\n\t v0.1 : First version\n" << endl;

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

    }while(userAnswer != secretValue);

    cout << "You rock ! You found the correct value !" << endl;

    return 0;
}
