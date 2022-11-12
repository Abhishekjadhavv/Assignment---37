// Find largest and smallest elements in a vector.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1{76, 12, 90, 32, 67, 20, 541, 28,2};
    int largest = v1.front(), smallest = v1.front();
    for (int i = 1; i < v1.size(); i++)
    {
        if (v1[i] > largest)
        {
            largest = v1[i];
        }
        if (v1[i] < smallest)
        {
            smallest = v1[i];
        }
    }

    cout<<"Largest element is "<<largest<<endl;
    cout<<"Smallest element is "<<smallest<<endl;
    return 0;
}
