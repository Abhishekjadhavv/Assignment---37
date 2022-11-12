// Declare a vector without initialization, insert some elements and print
#include <iostream>
#include <vector>
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
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1.at(i)<<" ";
    }
    cout<<endl;

    return 0;
}