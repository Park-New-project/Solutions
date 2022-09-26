#include <iostream>
using namespace std;

int main() {


	int n;	// n키로그램의 설탕
	int m5;	// 5키로그램 봉지의 개수
	int m3=0;	// 3키로그램 봉지의 개수
	int cnt;

	cin >> n;
	while (1) {
		if (n<0) {
			cnt = -1;
			break;
		}

		m5 = n / 5;

		if (n % 5) {
			n -= 3;
			m3++;
		}
		else {
			cnt = m5 + m3;
			break;
		}
	}
	cout << cnt << endl;
	return 0;
}