#include <iostream>
#include <cstring>
using namespace std;

/*
In this program we will discuss about strtok() function's own implementation
*/
char *mystrtok(char str[], char delim)
{
    static char *input = str;
    if (str != NULL)
    {
        input = str;
    }
    if (str == NULL)
    {
        input = NULL;
    }

    char *output = new char[strlen(str) + 1];
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != delim)
        {
            output[i] = str[i];
        }
        else
        {
            output[i] = '\0';
            input = input + i + 1;
            return output;
        }
    }
    output[i] = '\0';
    input = NULL;
}

int main()
{

    char s[] = "Hello this is a string seperated by space";

    //string tokenizer function will create and return a pointer to token.

    char *ptr;
    ptr = mystrtok(s, ' ');

    cout << ptr << endl;

    while (ptr != NULL)
    {
        ptr = mystrtok(NULL, ' ');
        cout << ptr << endl;
    }

    return 0;
}