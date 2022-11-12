// Write a program to find sum of vector elements

#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int> v1)
{
    int sum1 = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        sum1 += v1[i];
    }
    return sum1;
}

int main()
{
    vector<int> v1;
    int num;
    cout << "Enter 10 numbers" << endl;
    for (int i = 0; i <= 9; i++)
    {
        cin >> num;
        v1.push_back(num);
    }

    cout << "Sum of elements is " << sum(v1);
    return 0;
}