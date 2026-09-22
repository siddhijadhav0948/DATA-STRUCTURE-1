#include <iostream>
using namespace std;

int main() {
    int rollNumbers[5];
    
    cout << "Enter roll numbers of 5 students:\n";
    for(int i = 0; i < 5; i++) {
        cin >> rollNumbers[i];
    }
    
    cout << "\nRoll numbers of the students are:\n";
    for(int i = 0; i < 5; i++) {
        cout << rollNumbers[i] << " ";
    }
    cout << endl;
    
    return 0;
}
