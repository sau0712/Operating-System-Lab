// Get And Set Process Priority
#include <iostream>
#include <sys/resource.h>
#include <unistd.h>

using namespace std;

int main() {
    int priority;

    // Get current priority
    priority = getpriority(PRIO_PROCESS, 0);
    cout << "Current Priority: " << priority << endl;

    // Set new priority
    if (setpriority(PRIO_PROCESS, 0, 10) == -1) {
        perror("setpriority failed");
        return 1;
    }

    // Get new priority
    priority = getpriority(PRIO_PROCESS, 0);
    cout << "New Priority: " << priority << endl;

    return 0;
}
