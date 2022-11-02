#include <iostream>
using namespace std;

int main(){
	
	int dp[1010], n;
	dp[1] = 1;
	dp[2] = 3;
	
	cin >>n;
	for(int i=2; i<n; i++){
		dp[i+1] = (2 * dp[i-1]+dp[i] ) % 10007;
	}
	cout << dp[n] <<endl;
	return 0;
}