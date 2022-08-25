#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	
	vector< pair<int, string>> word(n);

	for (int i = 0; i < n; i++) {
		cin >> word[i].second;
		word[i].first = word[i].second.size();
	}

	sort(word.begin(), word.end());

	for (int i = 0; i < n-1; i++) {
		if (word[i].second == word[i + 1].second) {
			word.erase(word.begin() + i);
			n--;
			i--;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << word[i].second << "\n";
	}
}