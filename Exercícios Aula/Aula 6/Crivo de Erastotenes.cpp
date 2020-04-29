#include <bits/stdc++.h>

using namespace std;

#define MAXN 1000000

bool vetor[MAXN];

void crivo(){
	for(int i = 2; i < MAXN; i++) vetor[i] = true;
	for(int i = 2; i * i <= MAXN; i++){
		if(vetor[i]){
			for(int j = i * i; j <= MAXN; j += i){
				vetor[j] = false;
			}
		}
	}
}

int main(){
	
	int n;
	
	crivo();
	
	while(true){
		cin >> n;
		if(n == 0) break;
		if(vetor[n]){
			cout << "S" << endl;
		}else{
			cout << "N" << endl;
		}
	}
	
	return 0;
}
