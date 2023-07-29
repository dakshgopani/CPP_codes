//percentage of marks of a student
#include<iostream>
using namespace std;

int main() {
	
	double marks1, marks2;
	double marks;
	double percentage;
	cout << "enter marks : ";
	cin >> marks1;
	cout << "Enter final marks : ";
	cin >> marks2;
	
	percentage = marks1 * 100 / marks2;
	cout << "percentage = " << (marks1 * 100 / marks2) << endl;
	
	return 0 ;
}
