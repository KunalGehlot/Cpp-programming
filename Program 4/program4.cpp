/*
 * program4.cpp
 *
 *  Created on: 17-Jul-2017
 *      Author: Kunal
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
	string seedColor = "";
	cout << "Enter the seed color (red or blue): \n";
	cin >> seedColor;

	if (seedColor != "red" && seedColor != "blue") {
		cout << "Invalid color input, program will terminate.\n";
		return 0;
	}

	int temp = 0;
	cout << "Enter the temperature (F): \n";
	cin >> temp;

	if (seedColor == "red") {
		if (temp >= 75) {
			string soilMoisture = "";
			cout << "Enter the soil moisture (wet or dry); \n";
			cin >> soilMoisture;
			if (soilMoisture != "wet" && soilMoisture != "dry") {
				cout << "Invalid soil moisture input. Program will terminate.\n";
				return 0;
			}
			if (soilMoisture == "wet") {
				cout << "A sunflower will grow.\n";
			} else if (soilMoisture == "dry") {
				cout << "A dandelion will grow.\n";
			}
		} else {
			cout << "A mushroom will grow.\n";
		}
	}

	else if (seedColor == "blue") {
		if (temp >= 60 && temp <= 70) {
			string soilMoisture = "";
			cout << "Enter the soil moisture (wet or dry); \n";
			cin >> soilMoisture;
			if (soilMoisture != "wet" && soilMoisture != "dry") {
				cout << "Invalid soil moisture input. Program will terminate.\n";
				return 0;
			}
			if (soilMoisture == "wet") {
				cout << "A dandelion will grow.\n";
			} else if (soilMoisture == "dry") {
				cout << "A sunflower will grow.\n";
			}
		} else {
			cout << "A mushroom will grow.\n";
		}
	}
	return 0;
}
