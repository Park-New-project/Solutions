#include <iostream>
using namespace std;

int main() {
	int a, b, v;
	cin >> a >> b >> v;

	int day = 1;
	day = (v - b - 1) / (a - b) + 1;

	cout << day;
	return 0;
}