#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

const int MAX = 10000 + 1;
int N, M, cnt;
vector<int> graph[MAX];
bool visited[MAX];

void DFS(int nodeNum)
{
	visited[nodeNum] = true;

	for (int i = 0; i < graph[nodeNum].size(); i++)
	{
		int next = graph[nodeNum][i];
		if (!visited[next])
		{
			cnt++;
			DFS(next);
		}
	}
}

int main(void)

{
	ios_base::sync_with_stdio(0);
	cin >> N >> M;

	for (int i = 0; i < M; i++)
	{
		int node1, node2;

		cin >> node1 >> node2;
		graph[node2].push_back(node1);
	}

	int nodeCnt = 0;
	vector<int> result;

	for (int i = 1; i <= N; i++)
	{
		memset(visited, false, sizeof(visited));
		cnt = 0;

		DFS(i);
		if (nodeCnt == cnt)
			result.push_back(i);
		if (nodeCnt < cnt)
		{
			nodeCnt = cnt;
			result.clear();
			result.push_back(i);
		}
	}
	sort(result.begin(), result.end());

	for (int i = 0; i < result.size(); i++)
		cout << result[i] << " ";
	cout << endl;
	return 0;
}