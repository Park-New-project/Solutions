#include<bits/stdc++.h>
using namespace std;

int n, m, dp[1123][1123], choose[1123][1123];
pair<int,int> pos[1123];

//좌표 a와 b의 최단 거리
inline int dist(auto &a, auto &b){
	return abs(a.first - b.first) + abs(a.second - b.second);
}

//경찰차의 위치가 각각 pos[x], pos[y]일 때, 현재 상태부터 가능 한 최소 거리의 합
int solve(int x, int y){
	//pos[here]을 해결해야 한다.
	int here = max(x,y)+1; 
	if(here == m+2) return 0;

	int &ret = dp[x][y];
	if(ret != -1) return ret;

	//x가 이번 사건을 해결한다.
	ret = solve(here, y) + dist(pos[x], pos[here]);

	//y가 이번 사건을 해결하는게 이득일 경우
	int ygo = solve(x, here) + dist(pos[y], pos[here]);
	if(ygo < ret){
		ret = ygo;
		choose[x][y] = 1;
	}

	return ret;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	for(int i=2; i<=m+2; ++i)
		cin >> pos[i].first >> pos[i].second;
	pos[0] = {1,1};
	pos[1] = {n,n};
	memset(dp, -1, sizeof(dp));
	cout << solve(0, 1) << '\n';

	for(int x = 0, y = 1; max(x,y)+1 < m+2; ){
		cout << choose[x][y]+1 << '\n';
		//choose[x][y] = 1일 경우 y가 사건을 해결
		if(choose[x][y]) y = max(x,y)+1;
		else x = max(x,y)+1;
	}
}
