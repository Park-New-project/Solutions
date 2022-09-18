#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
vector<string> table;
 
void solve(int n, int start, int end,int top) {
    if (n/3 == 1) {
        table[top][start + (end - start) / 2 - 1] = '*';
        table[top + 1][start + 1] = '*';
        table[top + 1][start + 3] = '*';
        for (int i = 0; i < 5; i++) {
            table[top + 2][start + i] = '*';
        }
        return;
    }
    solve(n / 2, start + (end - start) / 4, start + (end - start) / 4 * 3, top);
    solve(n / 2, start, start + (end - start) / 2, top + n / 2 );
    solve(n / 2, start + (end - start) / 2, end, top + n / 2 );
}
 
int main() {
    int n;
    cin >> n;
    table.assign(n, string(n * 2 - 1, ' '));
    solve(n,0,2*n,0);
    for (int i = 0; i < table.size(); i++) {
        cout << table[i];
        printf("\n");
    }
    return 0;
}