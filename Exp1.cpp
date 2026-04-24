// Program: Wait For Time
#include <iostream>
#include <unistd.h>   // for sleep()

using namespace std;

int main() {
    cout << "Process is waiting for 5 seconds..." << endl;

    sleep(5);   // Wait for 5 seconds

    cout << "Process resumed after waiting." << endl;

    return 0;
}
