#include <iostream>

using namespace std;

int H, M, A;

int main() {
	cin >> H;
	cin >> M;

	A = H * 60 + M - 45;

	H = A / 60;
	M = A % 60;

	if (A < 0) {
		H = 23;
	}
	if (M < 0) {
		M = 60 + M;
	}

	cout << H << " ";
	cout << M << "\n";
}