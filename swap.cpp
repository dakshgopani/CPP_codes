#include<iostream>
using namespace std;

int main() {
    int a , b;
    cout <<"Enter A:" <<endl;
    cin >> a;
    cout <<"Enter B:";
    cin >> b;

    int c;
    c=b;
    b=a;
    a=c;

    cout <<"A:" <<a <<endl;
    cout <<"B:" <<b <<endl;
}