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
	
	for(int i = 0; i <= N + 1; i++){
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

int main(){
	
	int a, b, c;
	
	cin >> N >> M;
	
	for(int i = 0; i < M; i++){
		cin >> a >> b >> c;
		v[a].push_back(make_pair(b, c));
		v[b].push_back(make_pair(a, c));
	}
	
	Dijkstra(0);
		
	cout << distancia[N + 1] << endl;
	
	return 0;
}

