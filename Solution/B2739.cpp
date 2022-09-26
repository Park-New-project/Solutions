#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1; i < 10; i++) {
		if (i == 9)
			cout << n << " * " << i << " = " << n * i;
		else
			cout << n << " * " << i << " = " << n * i << endl;

	}

	return 0;
}