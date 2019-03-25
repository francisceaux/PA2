/*
Adam Yarneau
any160130
3/4/2019
Nhut Nguyen
CS 3377.0W1
*/
#include <sys/stat.h>
#include <ftw.h>
#include <stdio.h>
int counter (const char * absPath, const struct stat * statptr, int flag);
int numDir = 0;
int numFiles = 0;
int numBytes = 0;
int main(int numArguments, char * argumentArray[])
{
    if (numArguments != 2)
    {
        printf("Pass only a single directory\n");
        return -1;
    }
    char * absPath =  argumentArray[1];
    printf("abs path is : %s\n", absPath);
    int ftw_flag = ftw(absPath, counter, 1024);
    if (ftw_flag !=0)
    {
        printf("Failure.\n");
    }
    printf("The total number of directories in directory %s is: %i\n", absPath , numDir);
    printf("The total number of files in directory %s is: %i\n", absPath , numFiles);
    printf("The total number of bytes occupied by all files in directory %s is: %i\n", absPath , numBytes);
}
int counter (const char * absPath, const struct stat * statptr, int flag)
{
    switch(flag)
    {
        case FTW_F:
            numFiles++;
            numBytes += statptr->st_size;
            break;
        case FTW_D:
            numDir++;
            break;
        default:
            break;
    }
    return 0;
}

