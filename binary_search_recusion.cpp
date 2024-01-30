#include <iostream>
using namespace std;
void binary(int arr[], int key, int size)
{
    int q = 0;
    int mid = (q + size) / 2;
    while(size>mid||mid==0)
    {
        if (key == arr[mid])
        {
            cout << "value of mid s " << mid << "\n";
            cout << "true";
            return;
        }
        else if (key > arr[mid])
        {
            q = mid + 1;
            mid = (q + size) / 2;
        }
        else if (key < arr[mid])
        {
            size = mid - 1;
            mid = (size + q) / 2;
        }
        
    }
    cout << "false";
}
int main()
{
    int aray[] = {10, 20, 30, 40};
    int key = 30;

    binary(aray, key, 4);
}
