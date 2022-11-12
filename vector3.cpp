// Write a function to print the element of a vector and take input from the user.
#include <iostream>
#include <vector>
using namespace std;

void printData(vector<int> v1)
{
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v1;
    int num;

    cout << "Enter 10 Numbers" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> num;
        v1.push_back(num);
    }

    printData(v1);
    return 0;
}