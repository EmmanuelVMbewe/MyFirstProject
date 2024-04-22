#include <iostream>

using namespace std;

int main() {
    int user_input;

    while (true) {
        cout << "Please enter an integer value between 5 and 10: \n";
        if (!(cin >> user_input)) {
            cout << "Invalid input. Please enter an integer value" <<endl;
            cin.clear();
            cin.ignore(10000, '\n');
        } else if (user_input >= 5 && user_input <= 10) {
            cout << "Your input value(" << user_input << ") has been accepted." << endl;
            break;
        } else {
            cout << "You entered: " << user_input << " Please enter an integer value between 5 and 10." << endl;
        }
    }
    
    return 0;
}

