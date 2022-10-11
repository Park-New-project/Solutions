#include<iostream>
#include<set>
#include<string>
 
using namespace std;
 
int main(void) {
    set<string> s;
    int t;
    cin >> t;
 
    while (t--) {
        string name, cmd;
        std::cin >> name >> cmd;
        if (cmd == "enter")
            s.insert(name);
        else
            s.erase(name);
    }
    for (auto it = s.rbegin(); it != s.rend(); it++)
        cout << *it << '\n';
    return 0;
}