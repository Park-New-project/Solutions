#include <iostream>
using namespace std;

int main(){
    int n;
    int a;
    int b;
    int* ans;
    
    cin >> n;
    ans = new int[n];
    
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        
        ans[i] = a+b;
    }
    for(int i = 0; i < n; i++){
		cout << ans[i] << endl;
	}
    
    return 0;
}