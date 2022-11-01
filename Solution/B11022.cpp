#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
	string s;
    int* a;
    int* b;
    int* ans;
    
    cin >> n;
    a = new int[n];
    b = new int[n];
    ans = new int[n];
    
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
        
        ans[i] = a[i] + b[i];
    }
    for(int i = 0; i < n; i++){
		cout << "Case #" << i+1 << ": " << a[i]<< " + " << b[i] <<" = " << ans[i] << endl;
	}
    
    return 0;
}