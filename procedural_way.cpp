#include <iostream>
using namespace std;

class demo
{
public:
    int *arr, size;

    void proceduralWay()
    {
        cout << "Enter size of arr : ";
        cin >> size;

        arr = new int[size];

        if (arr == NULL)
        {
            cout << "Memory not allocated.";
        }
        else
        {
            cout << "Memory allocated";
        }

        delete[] arr;
    }
};

int main()
{
    demo obj;

    obj.proceduralWay();
    return 0;
}