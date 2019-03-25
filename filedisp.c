/*
Adam Yarneau
any160130
3/4/2019
Nhut Nguyen
CS 3377.0W1
*/
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

int main(int numArguments, char * argumentArray[])
{
    size_t bufsize = 0;
    char*  tLine = NULL;
    getline(&tLine,&bufsize,stdin);
    bufsize = 0;

    char*  dLine = NULL;
    getline(&dLine,&bufsize,stdin);
    bufsize = 0;

    char*  fLine = NULL;
    getline(&fLine,&bufsize,stdin);
    bufsize = 0;

    char* bLine = NULL;
    getline(&bLine,&bufsize,stdin);

    char * optionChosen =  argumentArray[1];
    if ((strcmp("-d",optionChosen)) == 0)
    {
        printf("%s\n", dLine);
    }
    else if ((strcmp("-f",optionChosen)) == 0)
    {
        printf("%s\n", fLine);
    }
    else if ((strcmp("-b",optionChosen)) == 0)
    {
        printf("%s\n", bLine);
    }
}
