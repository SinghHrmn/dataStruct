#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

// this program is basic implementation of stack using STL cpp Library
// below mentioned stack functions are discussed

// .push()
// .pop()
// .empty()
// .top()

int main()
{

    // stack declaration
    stack<string> mystack;

    //pusing items in stack
    mystack.push("First");
    mystack.push("Second");
    mystack.push("Third");
    mystack.push("Fourth");

    //printing the top element, poping top till empty
    while (!mystack.empty())
    {
        cout << mystack.top() << endl;
        mystack.pop();
    }

    return 0;

    //Output (Depecting LIFO data structure):

    // Fourth
    // Third
    // Second
    // First
}