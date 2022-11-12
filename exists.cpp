// Write a program to check whether an element exists in a vector or not.

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    int element;
    vector<int> v1{22, 33, 44, 12, 6, 7, 88};

    cout << "Enter a number" << endl;
    cin >> element;

    vector<int>::iterator it = find(v1.begin(), v1.end(), element);
    
    if (it != v1.end())
    {
        cout << element << " is exist in vector" << endl;
    }
    else
    {
        cout << element << " is not exist in vector" << endl;
    }
    return 0;
}