#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
	string s;
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
		cout << "Case #" << i+1 << ": " << ans[i] << endl;
	}
    
    return 0;
}