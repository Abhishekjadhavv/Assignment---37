// Declare a vector with Initialization and print the elements.
#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int>::iterator it;
    for (auto it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}