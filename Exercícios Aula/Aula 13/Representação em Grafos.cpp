#include <bits/stdc++.h>

using namespace std;

#define MAXV 1010

vector< pair<int, int> > lista_arestas;
bool matriz_adjacencia[MAXV][MAXV];
vector<int> lista_adjacencia [MAXV];

bool BuscaArestaListaArestas(int x, int y){
	for(int i = 0; i < (int) lista_arestas.size(); i++){
		if((lista_arestas[i].first == x and lista_arestas[i].second == y) or (lista_arestas[i].first == y and lista_arestas[i].second == x)){
			return true;
		}
	}
	return false;
}

int NumeroAdjacentesListaArestas(int x){
	int cont = 0;
	
	for(int i = 0; i < (int) lista_arestas.size(); i++){
		if(lista_arestas[i].first == x or lista_arestas[i].second == x){
			cont++;
		}
	}
	
	return cont;
}

bool BuscaArestaMatrizAdjacencia(int x, int y){
	return matriz_adjacencia[x][y];
}

int NumeroAdjacentesMatrizAdjacencia(int x){
	int cont = 0;
	
	for(int i = 0; i < MAXV; i++){
		if(matriz_adjacencia[x][i]){
			cont++;
		}
	}
	
	return cont;
}

bool BuscaArestaListaAdjacencia(int x, int y){
	for(int i = 0; i < (int) lista_adjacencia[x].size(); i++){
		if(lista_adjacencia[x][i] == y){
			return true;
		}
	}
	
	return false;
}

int NumeroAdjacentesListaAdjacencia(int x){
	return (int) lista_adjacencia[x].size();
}

int main(){
	
	/* Considere o grafo nao direcionado */
	
	/* Representação 1 */
	
	cout << "--------- Lista de Arestas ---------------" << endl;
	
	lista_arestas.push_back(make_pair(0, 1));
	lista_arestas.push_back(make_pair(1, 2));
	lista_arestas.push_back(make_pair(2, 3));
	lista_arestas.push_back(make_pair(3, 0));
	
	if(BuscaArestaListaArestas(3, 2)){
		cout << "S" << endl;
	}else{
		cout << "N" << endl;
	}
	
	if(BuscaArestaListaArestas(1, 3)){
		cout << "S" << endl;
	}else{
		cout << "N" << endl;
	}
	
	cout << NumeroAdjacentesListaArestas(0) << endl;
	
	cout << endl;
	
	cout << "--------- Matriz de Ajacencia ---------------" << endl;
	
	matriz_adjacencia[0][1] = true;
	matriz_adjacencia[1][0] = true;
	matriz_adjacencia[1][2] = true;
	matriz_adjacencia[2][1] = true;
	matriz_adjacencia[2][3] = true;
	matriz_adjacencia[3][2] = true;
	matriz_adjacencia[3][0] = true;
	matriz_adjacencia[0][3] = true;
	
	if(BuscaArestaMatrizAdjacencia(3, 2)){
		cout << "S" << endl;
	}else{
		cout << "N" << endl;
	}
	
	if(BuscaArestaMatrizAdjacencia(1, 3)){
		cout << "S" << endl;
	}else{
		cout << "N" << endl;
	}
	
	cout << NumeroAdjacentesMatrizAdjacencia(0) << endl;
	
	cout << endl;
	
	cout << "--------- Lista de Ajacencia ---------------" << endl;
	
	lista_adjacencia[0].push_back(1);
	lista_adjacencia[1].push_back(0);
	lista_adjacencia[1].push_back(2);
	lista_adjacencia[2].push_back(1);
	lista_adjacencia[2].push_back(3);
	lista_adjacencia[3].push_back(2);
	lista_adjacencia[3].push_back(0);
	lista_adjacencia[0].push_back(3);
	
	if(BuscaArestaListaAdjacencia(3, 2)){
		cout << "S" << endl;
	}else{
		cout << "N" << endl;
	}
	
	if(BuscaArestaListaAdjacencia(1, 3)){
		cout << "S" << endl;
	}else{
		cout << "N" << endl;
	}
	
	cout << NumeroAdjacentesListaAdjacencia(0) << endl;
	
	cout << endl;
	
	return 0;
}
