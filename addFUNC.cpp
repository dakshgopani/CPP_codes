#include <iostream>
using namespace std;

int add(int num1, int num2)
{
    int add = num1 + num2;
    cout << "Addition of num1 and num2 is : " << add << endl;
    return 0;
}
int main()
{
    int a = 2;
    int b = 1;
    add(a,b);
    //cout << add(a, b);
    //return 0;
}