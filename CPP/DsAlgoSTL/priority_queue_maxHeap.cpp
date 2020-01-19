#include <iostream>
#include <queue>
using namespace std;

/*

Priority Queue is implemented using heap. Time taken to create a heap using heapify is O(Log N). 
Default is Max heap. When the larger number has highest  priority it is Max_Heap. We will discuss 
max heap in this example code.

Headers to include:
    <queue>

Methods discussed:
    .push()
    .pop()
    .top()
    .empty()

*/

int main()
{

    //declaration
    priority_queue<int> pq;

    //inserting values into pq
    int a[10] = {5, 6, 17, 18, 9, 11};

    for (int i = 0; i < 6; i++)
    {
        pq.push(a[i]);
    }

    //Printing Heap
    while (!pq.empty())
    {
        cout << pq.top() << ",";
        pq.pop();
    }

    //Output:
    // 18,17,11,9,6,5
}