#include <iostream>
using namespace std;
int main()
{
    int array[] = {3, 7, 18, 5, 9};
    int max = array[0];
    for (int i = 1; i < 5; i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    return 0;
}