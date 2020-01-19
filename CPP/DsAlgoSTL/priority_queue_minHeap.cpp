#include <iostream>
#include <queue>
using namespace std;

/*

Priority Queue is implemented using heap. Time taken to create a heap using heapify is O(Log N). 
When the samller number has highest  priority it is Min Heap. We will discuss min heap in this example code.

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

    //declaration | Min heap
    priority_queue<int, vector<int>, greater<int>> pq; //grater<int> is an inbuilt comparator function

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
    // 5,6,9,11,17,18,
}