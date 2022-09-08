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

    
}
