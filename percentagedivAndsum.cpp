//percentage division and sum
#include<iostream>
using namespace std;

int main() {
	
	int originalNumber;
	cout << "Enter a number : ";
	cin >> originalNumber;
	
	cout << "a = " << (originalNumber /  10) <<endl;
	cout << "b = " << (originalNumber % 10) <<endl;
	int a(originalNumber / 10);
	int b(originalNumber % 10);
	int sum;
	cout << "sum is : " <<(sum = a + b) << endl;
	
	return 0;
}
