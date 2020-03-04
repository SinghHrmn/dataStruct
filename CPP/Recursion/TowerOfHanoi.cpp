#include <iostream>
using namespace std;

// The program implements the tower of hanoi Puzzle

void TowerofHanoi(int n, char frompeg, char topeg, char auxpeg)
{
    // if only one disk move it
    if (n == 1)
    {
        cout << "Move disk from peg " << frompeg << " to peg " << topeg << "\n";
        return;
    }

    // move the n-1 disks from A to B using C as auxilary
    TowerofHanoi(n - 1, frompeg, auxpeg, topeg);

    // move nth disk from frompeg to topeg
    cout << "Move disk from peg " << frompeg << " to peg" << topeg << "\n";

    // move n-1 disks from B to C using A as auxilary
    TowerofHanoi(n - 1, auxpeg, topeg, frompeg);
}

int main()
{
    // We want to move disks from Peg A to Peg C using Auxilary peg B
    char frompeg = 'A';
    char auxpeg = 'B';
    char topeg = 'C';

    // input the number of disks
    int disks;
    cout << "Enter the number of disks: ";
    cin >> disks;

    TowerofHanoi(disks, frompeg, topeg, auxpeg);
}