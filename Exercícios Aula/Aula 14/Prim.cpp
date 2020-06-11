#include <bits/stdc++.h>

using namespace std;

#define MAXN 1010
#define INF 99999999

bool processado[MAXN];
int distancia[MAXN];

vector< pair<int, int> > v[MAXN];

int N, M;

int Prim(int S){
	
	priority_queue< pair<int, int>, vector< pair<int, int> >, greater< pair<int, int> > > fila;
	
	for(int i = 1; i <= N; i++){
		distancia[i] = INF;
	}
	
	distancia[S] = 0;
	fila.push(make_pair(distancia[S], S));
	
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
			if(distancia[p.first] > p.second && !processado[p.first]){
				distancia[p.first] = p.second;
				fila.push(make_pair(distancia[p.first], p.first));
			}
		}
		
	}
	
	int soma = 0;
	
	for(int i = 1; i <= N; i++){
		if(distancia[i] == INF) return INF;
	}
	
	for(int i = 1; i <= N; i++){
		soma += distancia[i];
	}
	
	return soma;
}

/*
6 8
1 2 3
1 6 1
2 3 4
2 4 7
3 4 1
3 6 9
4 6 4
4 5 8
*/

int main(){
	
	int a, b, c;
	
	cin >> N >> M;
	
	for(int i = 0; i < M; i++){
		cin >> a >> b >> c;
		v[a].push_back(make_pair(b, c));
		v[b].push_back(make_pair(a, c));
	}
	
	cout << Prim(1) << endl; 
	
	return 0;
}
