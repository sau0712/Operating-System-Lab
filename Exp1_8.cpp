// Create and Delete File using system calls
#include <iostream>
#include <fcntl.h>
#include <unistd.h>
using namespace std;

int main()
{
    int fd;

    fd = open("data.txt", O_CREAT | O_WRONLY, 0644);

    if (fd == -1)
    {
        cout << "File creation failed" << endl;
        return 1;
    }

    cout << "File created successfully" << endl;

    close(fd);

    int status = unlink("data.txt");

    if (status == 0)
        cout << "File deleted successfully" << endl;
    else
        cout << "File deletion failed" << endl;

    return 0;
}
