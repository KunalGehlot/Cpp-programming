#include<iostream>

using namespace std;

int toysPerKids(int, int);

int main() {
	int toys = 0;
	cout << "Enter in the number of toys: " << endl;
	cin >> toys;

	int kids = 0;
	cout << "Enter the number of kids: " << endl;
	cin >> kids;

	if (kids > 0) {

		if (toys >= kids) {
			cout << "Each kid can have " << toysPerKids(toys, kids)
					<< " toy(s)." << endl;
		} else {
			cout << "Not enough toys for each kid" << endl;
		}
	} else {
		cout << "No kids showed up for the toys." << endl;
	}
}

int toysPerKids(int toys, int kids) {
	return (toys / kids);
}
