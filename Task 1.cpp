#include<iostream>
using namespace std;
int main() {
	int a, b;
	cout << "Enter two Integers:";
	cin >> a >> b;
	do {
		int i = 0;
		cout << "1.Addition:" << endl;
		cout << "2.Sutraction:" << endl;
		cout << "3.Multiplication:" << endl;
		cout << "4.Division:" << endl;
		cout << "5.Exit" << endl;
		cout << "Enter your choice:";
		int choice;
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "Addition is:" << a + b << endl;
			break;
		case 2:
			cout << "Subtraction is:" << a - b << endl;
		case 3:
			cout << "Multiplication is:" << a * b << endl;
			break;
		case 4:
			cout << "Division is:" << a / b << endl;
			break;
		case 5:
			exit(0);
		}
	} while (true);
			return 0;
	}