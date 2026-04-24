// Get and Set File Attributes
#include <iostream>
#include <sys/stat.h>
#include <ctime>

using namespace std;

int main()
{
    struct stat fileInfo;

    // Getting file attributes
    if (stat("info.txt", &fileInfo) == 0)
    {
        cout << "File Size: " << fileInfo.st_size << " bytes" << endl;
        cout << "Last Modified: " << ctime(&fileInfo.st_mtime);
        cout << "Permissions: " << fileInfo.st_mode << endl;
    }
    else
    {
        cout << "Cannot get file info" << endl;
        return 1;
    }

    // Setting file attributes
    chmod("info.txt", 0644);
    cout << "File permission changed" << endl;

    return 0;
}
