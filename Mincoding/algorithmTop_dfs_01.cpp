#include <iostream>

using namespace std;

int mat[101][101];
int nodeCnt, edgeCnt;
int visited[101], cnt, defected[101];

void dfs(int from)
{
	for (int to = 1; to <= 100; to++)
	{
		if (!mat[from][to]) continue;
		if (visited[to]) continue;
		
		if (!defected[to]) {
			defected[to] = 1;
			cnt++;
		}
		visited[to] = 1;
		dfs(to);
		visited[to] = 0;
	}
}

int main()
{
	cin >> nodeCnt >> edgeCnt;

	for (int i = 0; i < edgeCnt; i++)
	{
		int from, to;

		cin >> from >> to;

		mat[from][to] = 1;
		mat[to][from] = 1;
	}

	defected[1] = 1;
	dfs(1);

	cout << cnt;

	return 0;
}