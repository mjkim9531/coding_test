#include <iostream>
#include <algorithm>
using namespace std;

int dwf[9];	//난쟁이 배열
int h_all = 0;	//총 키합
int a, b;

int main() {
	for (int i = 0; i < 9; i++) {
		cin >> dwf[i];
		h_all = dwf[i] + h_all;
	}
	sort(dwf, dwf + 9);

	int flag = 0;

	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (dwf[i] + dwf[j] == h_all - 100) {
				a = i;
				b = j;
				flag = 1;
				break;
			}
		}
		if (flag == 1) break;
	}

	for (int i = 0; i < 9; i++) {
		if ((i != a) && (i != b)) {
			cout << dwf[i] << '\n';
		}
	}
	return 0;
}