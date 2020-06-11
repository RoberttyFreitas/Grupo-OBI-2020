#include <bits/stdc++.h>

using namespace std;

#define MAXV 1010

bool marcados[MAXV];
vector<int> v [MAXV];

void BFS(int x){
	
	queue<int> fila;
	fila.push(x);
	
	while(!fila.empty()){
		int x = fila.front();
		fila.pop();
		
		marcados[x] = true;
		
		for(int i = 0; i < (int) v[x].size(); i++){
			if(!marcados[v[x][i]]){
				fila.push(v[x][i]);
			}
		}
	}
}

void DFS(int x){
	for(int i = 0; i < (int) v[x].size(); i++){
		if(!marcados[v[x][i]]){
			marcados[v[x][i]] = true;
			DFS(v[x][i]);
		}
	}
}


int main(){
	
	v[0].push_back(1);
	v[1].push_back(0);
	v[1].push_back(2);
	v[2].push_back(1);
	v[2].push_back(3);
	v[3].push_back(2);
	v[3].push_back(0);
	v[0].push_back(3);
	
	//DFS(0);
	
	BFS(0);
	
	if(marcados[3]){
		cout << "S" << endl;
	}else{
		cout << "N" << endl;
	}
	
	return 0;
}
