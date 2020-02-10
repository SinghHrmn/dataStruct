#include <iostream>
#include <cstring>
using namespace std;

/*
In this program we will discuss about strtok() function
*/
int main()
{

    char s[] = "Hello this is a string seperated by space";

    //string tokenizer function will create and return a pointer to token.

    char *ptr;
    ptr = strtok(s, " ");

    cout << ptr << endl;

    while (ptr != NULL)
    {
        ptr = strtok(NULL, " ");
        cout << ptr << endl;
    }

    return 0;
}