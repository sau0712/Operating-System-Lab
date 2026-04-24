// Open and close file
#include <iostream>
#include <fcntl.h>
#include <unistd.h>

using namespace std;

int main()
{
    int fd;
    fd = open("student.txt", O_CREAT | O_WRONLY, 0644);

    if (fd == -1){
        cout << "File creation failed" << endl;
        return 1;
    }
    cout << "File created successfully" << endl;
    fd = open("student.txt", O_RDONLY);

    if (fd == -1)
    {
        cout << "File cannot open" << endl;
        return 1;
    }

    cout << "File opened successfully" << endl;

    // Close file
    close(fd);

    cout << "File closed successfully" << endl;

    return 0;
}
