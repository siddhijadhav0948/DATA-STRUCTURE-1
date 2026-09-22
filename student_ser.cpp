#include <iostream>
using namespace std;

int main() {
    int rollNumbers[5];
    int searchRoll;
    bool found = false;
    
    cout << "Enter roll numbers of 5 students:\n";
    for(int i = 0; i < 5; i++) {
        cin >> rollNumbers[i];
    }
    
    cout << "Enter the roll number to search: ";
    cin >> searchRoll;
    
    for(int i = 0; i < 5; i++) {
        if(rollNumbers[i] == searchRoll) {
            found = true;
            break;
        }
    }
    
    if(found) {
        cout << "student found" << endl;
    } else {
        cout << "student not found" << endl;
    }
    
    return 0;
}
