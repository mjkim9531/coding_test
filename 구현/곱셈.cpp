#include <iostream>

using namespace std;

int num1, num2, num3, num4, num5, num6;
int main() {
	cin >> num1;
	cin >> num2;

	num3 = num2 % 10 * num1;
	num4 = num2 / 10 % 10 * num1;
	num5 = num2 / 100 * num1;
	num6 = num1 * num2;

	cout << num3 << "\n";
	cout << num4 << "\n";
	cout << num5 << "\n";
	cout << num6 << "\n";
}