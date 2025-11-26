#include<iostream>
using namespace std;
int main() {
	do {
		int n;
		cout << "Enter a number: " << endl;
		cout << "Guess a number between 1 and 20: ";
		cin >> n;
		if (n <= 0) {
			cout << "Too low!" << endl;
		}
		else if (n >= 20) {
			cout << "Too high!" << endl;
		}
		else if (n == 5) {
			cout << "Congratulations! You guessed it right." << endl;
		}
	} while (true);
		return 0;
	}