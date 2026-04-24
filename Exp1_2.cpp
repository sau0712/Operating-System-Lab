// read, write Reposition
#include <iostream>
#include <fcntl.h>
#include <unistd.h>
#include <cstring>

using namespace std;

int main()
{
    int fd;
    char buffer[100];

    fd = open("info.txt", O_CREAT | O_RDWR, 0644);

    if (fd == -1)
    {
        cout << "File open failed" << endl;
        return 1;
    }

    char msg[] = "Linux file system calls";

    // Write data to file
    write(fd, msg, strlen(msg));
    cout << "Data written" << endl;

    // Move file pointer to beginning
    lseek(fd, 0, SEEK_SET);

    // Read data from file
    read(fd, buffer, sizeof(buffer));
    cout << "Data read: " << buffer << endl;

    close(fd);
    return 0;
}
