#include <iostream>
using namespace std;

int main()
{
    int m;
    cout << "Enter number of rows : ";
    cin >> m;
    for (int i = m; i >=1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}