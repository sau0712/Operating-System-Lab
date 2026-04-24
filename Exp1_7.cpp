// End And Abort Program
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int choice;

    cout << "Enter 1 to End program normally\n";
    cout << "Enter 2 to Abort program\n";
    cin >> choice;

    if (choice == 1) {
        cout << "Program ended normally." << endl;
        exit(0);   // Normal termination
    }
    else if (choice == 2) {
        cout << "Program aborted." << endl;
        abort();   // Abnormal termination
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
