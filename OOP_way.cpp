#include<iostream>
using namespace std;

class demo{
private:
    int *arr ;
    int size;
public:
    demo(int size){
        this->size = size;
        arr = new int[size];
        cout<<"memory is allocated."<<endl;
    }

    void setValue(){
        cout<<"Enter "<<size<<" Element."<<endl;
        for (int i = 0; i < size; i++)
        {
            cout<<"Enter element ["<<i<<"] : ";
            cin>>arr[i];
        }
        cout<<endl;
    }
    void getValue(){
        for (int i = 0; i < size; i++)
        {
            cout<<"array ["<<i<<"] : "<<arr[i]<<endl;
        }
        cout<<endl;
    }
    ~demo(){
        delete[] arr;
        cout<<"Memory Deallocated."<<endl;
    }
};

int main()
{
    int n;

    cout<<"Enter size of array : ";
    cin>>n;

    demo obj(n);
    obj.setValue();
    obj.getValue();

    return 0;
}