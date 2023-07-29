#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 3, 4, 5};
    int sum;
    int size = sizeof(arr) / sizeof(arr[2]);
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "Sum is : " << sum;
    return 0;
}