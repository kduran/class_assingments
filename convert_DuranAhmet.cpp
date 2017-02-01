#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

void main() {
	double C, F;
	cout << "Please enter Fahrenheit temperature : ";	
	cin >> F;
	C = (5.0/9)*(F-32);
	cout << F << " degree Fahrenheit is equal to " << fixed << setprecision(2) << C << " degree Celsius." << endl;
	cout << "\tround to 2-decimal places" << endl;
	system("pause");
}
