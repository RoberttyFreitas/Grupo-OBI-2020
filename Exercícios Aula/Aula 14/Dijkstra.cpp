#include <bits/stdc++.h>

using namespace std;

#define INF 99999999
#define MAXN 1010

int distancia[MAXN];
bool processado[MAXN];
vector< pair<int, int> > v [MAXN];
int N, M;

void Dijkstra(int S){
	
	priority_queue< pair<int, int>, vector< pair<int, int> >, greater< pair<int, int> > > fila;
	
	for(int i = 1; i <= N; i++){
		distancia[i] = INF;
	}
	
	distancia[S] = 0;
	fila.push(make_pair(0, S));
	
	while(true){
	
		int v_sel = -1;
			
		while(!fila.empty()){
			int u = fila.top().second;
			fila.pop();
			
			if(!processado[u]){
				v_sel = u;
				processado[u] = true;
				break;
			}
		}
		
		if(v_sel == -1) break;
		
		for(int i = 0; i < (int) v[v_sel].size(); i++){
			pair<int, int> p = v[v_sel][i];
			if(distancia[v_sel] + p.second < distancia[p.first]){
				distancia[p.first] = distancia[v_sel] + p.second;
				fila.push(make_pair(distancia[p.first], p.first));
			} 
		}
		
	}
}

/*
7 8
1 2 3
1 7 1
2 3 4
2 4 7
3 4 1
3 7 9
4 7 4
4 5 8
*/

int main(){
	
	int a, b, c, x;
	
	cin >> N >> M;
	
	for(int i = 0; i < M; i++){
		cin >> a >> b >> c;
		v[a].push_back(make_pair(b, c));
		v[b].push_back(make_pair(a, c));
	}
	
	Dijkstra(1);
	
	cin >> x;
	
	cout << distancia[x] << endl;
	
	return 0;
}
