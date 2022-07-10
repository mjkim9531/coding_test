#include <iostream>

using namespace std;

int N;
int ONE = 0;
int DEC = 0;
int A;
int B;
int i = 1;

int main() {
	cin >> N;
	
	DEC = N / 10;
	ONE = N % 10;
	A = (DEC + ONE) % 10;
	B = ONE * 10 + A;
	while (B != N) {
		DEC = B / 10;
		ONE = B % 10;
		A = (DEC + ONE) % 10;
		B = ONE * 10 + A;
		i++;
	}
	cout << i << "\n";
}