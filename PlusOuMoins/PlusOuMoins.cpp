#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand((unsigned)time(0));
    int secretValue;
    int userAnswer;
    cout << "Shall We Play A Game v0.3\nAdded Functionnality :\n\t- Now with random value ! (Previously, it was 25)" << endl;
    cout << "Previous version :\n\t v0.2 : Added a loop to submit multiple answer !\n\t v0.1 : First version\n" << endl;

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
