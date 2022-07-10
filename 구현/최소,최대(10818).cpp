#include <iostream>
#include <vector>
#include <climits>

using namespace std;

vector<int> v;
int N;
int num;
int MIN = INT_MAX;
int MAX = INT_MIN;

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
		if (num < MIN) MIN = num;
		if (num > MAX) MAX = num;
	}
	cout << MIN << " " << MAX << "\n";
}