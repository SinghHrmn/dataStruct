#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

// this program is basic implementation of queue using STL cpp Library
// below mentioned queue functions are discussed

// .push()
// .pop()
// .empty()
// .front()

int main()
{

    // stack declaration
    queue<string> myqueue;

    //pusing items in stack
    myqueue.push("First");
    myqueue.push("Second");
    myqueue.push("Third");
    myqueue.push("Fourth");

    //printing the top element, poping top till empty
    while (!myqueue.empty())
    {
        cout << myqueue.front() << endl;
        myqueue.pop();
    }

    return 0;

    //Output (Depecting FIFO data structure):

    // First
    // Second
    // Third
    // Fourth
}