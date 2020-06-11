#include <bits/stdc++.h>

using namespace std;

int A[100100];
int F[100100];

int busca(int i, int j, int o){
	if(i == j){
		if(A[i] <= o){
			return F[i];
		}else{
			return F[i - 1];
		}
	}
	int m = (i + j) / 2;
	if(A[m] < o){
		return busca(m+1, j, o);
	}else if(A[m] > o){
		return busca(i, m, o);
	}else{
		return F[m];
	}
}

int main(){
	
	int N, M, o;
	
	cin >> N >> M;
	
	for(int i = 1; i < N; i++){
		cin >> A[i];
	}
	
	for(int i = 0; i < N; i++){
		cin >> F[i];
	}
	
	for(int i = 0; i < M; i++){
		cin >> o;
		cout << busca(0, N-1, o) << " ";
	}
	
	cout << endl;
	
	return 0;
}
