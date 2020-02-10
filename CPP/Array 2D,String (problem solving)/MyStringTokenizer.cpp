#include <iostream>
#include <cstring>
using namespace std;

/*
In this program we will discuss about strtok() function's own implementation
*/
char *mystrtok(char str[], char delim)
{
    static char *input = NULL;
    if (str != NULL)
    {
        input = str;
    }
    if (input == NULL)
    {
        return NULL;
    }

    char *output = new char[strlen(input) + 1];
    int i;
    for (i = 0; input[i] != '\0'; i++)
    {
        if (input[i] != delim)
        {
            output[i] = input[i];
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
    return output;
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