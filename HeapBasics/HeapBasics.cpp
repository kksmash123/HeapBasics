// HeapBasics.cpp 

#include <iostream>

using namespace std;




void InsertHeap(int a[],int n)
{
    int temp = a[n];
    int i=n;

    while (i > 1 && temp > a[i / 2])
    {
        a[i] = a[i / 2];
        i = i / 2;
    }
    a[i] = temp;

}


void DeleteHeap(int a[], int n)
{
    int x = a[1];
    a[1] = a[n];
    a[n] = x;

    int i = 1,child=2*i;
    while (child < n - 1)
    {

        if (a[child + 1] > a[child])
            child = child + 1;
        if (a[i] < a[child])
        {
            swap(a[i], a[child]);
            i = child;
            child = 2 * i;
        }
        else
            break;

    }
}


int main()
{
    int h[] = { 0,10,20,30,25,5,40,35 };

    int n = sizeof(h) / sizeof(h[0]);

    cout << "Array :" << endl;
    for (auto x : h)
        cout << x << " ";
    cout << endl;

    for (int i = 2;i < n;i++)
        InsertHeap(h, i);

    cout << "Heap : " << endl;
    for (auto x : h)
        cout << x << " ";
    cout << endl;


    for (int i = 7;i > 1;i--)
       DeleteHeap(h, i);

    cout << "After Delete heap : Heap sort Done ." << endl;

    cout << "Heap sort: " << endl;
    for (auto x : h)
        cout << x << " ";
    cout << endl;
    
}
