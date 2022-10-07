#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <stack>
#include <math.h>
#include <memory.h>
using namespace std;
 
#define MAX_SIZE 100
#define INF 0x7fffffff
#define CENDL "\n"
#define ll long long
 
#define c_reverse(s) reverse(s.begin(), s.end())
#define c_sort(s) sort(s.begin(), s.end())
#define print_vector(v) for(int i=0; i<v.size(); i++) cout << v[i];
 
int main() {
 
    cin.tie(0);
    std::ios::sync_with_stdio(false);
 
    int n; cin >> n;
 
    while (n--) {
 
        int cm, d; cin >> cm >> d;
 
        int minValue = 0;
        int maxValue = 0;
        for (int i = 0; i < d; i++) {
            int ant; cin >> ant;
            int antMin = min(ant, cm - ant);
            int antMax = max(ant, cm - ant);
 
            minValue = max(minValue, antMin);
            maxValue = max(maxValue, antMax);
        }
        cout << minValue << " " << maxValue << CENDL;
    }
 
    return 0;
}