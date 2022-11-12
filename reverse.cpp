// Write a program to reverse vector elements
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v1;
    int num;
    cout << "Enter 5 numbers" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> num;
        v1.push_back(num);
    }
    reverse(v1.begin(),v1.end());
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    return 0;
}