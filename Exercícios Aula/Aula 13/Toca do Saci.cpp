#include <bits/stdc++.h>

using namespace std;

#define MAXN 1010
#define MAXM 1010

int matriz[MAXN][MAXM];
int dist[MAXN][MAXM];

int vx[4] = {0, 0, 1, -1};
int vy[4] = {1, -1, 0, 0};

void dfs(int i, int j){
	
	for(int k = 0; k < 4; k++){
		int i_ = i + vx[k];
		int j_ = j + vy[k];
		
		if(dist[i_][j_] < 0 and matriz[i_][j_] > 0){
			dist[i_][j_] = dist[i][j] + 1;
			dfs(i_, j_);
		}
		
	}
	
}

int main(){
	
	memset(dist, -1, sizeof(dist));
	
	int N, M;
	
	int x_i, y_i;
	int x_f, y_f;
	
	cin >> N >> M;
	
	for(int i = 1; i <= N; i++){
		for(int j = 1; j <= M; j++){
			cin >> matriz[i][j];
			
			if(matriz[i][j] == 2){
				x_i = i;
				y_i = j;
			}
			
			if(matriz[i][j] == 3){
				x_f = i;
				y_f = j;
			}
		}
	}
	
	dist[x_i][y_i] = 1;
	
	dfs(x_i, y_i);
	
	cout << dist[x_f][y_f] << endl;
	
	return 0;
}
