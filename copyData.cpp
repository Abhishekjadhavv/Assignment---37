// Write a program to Copy one vector’s elements to another vector.
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> v1 = {10, 20, 30, 40, 50}, v2;
    v2.assign(v1.begin(), v1.end());
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;
    return 0;
}
