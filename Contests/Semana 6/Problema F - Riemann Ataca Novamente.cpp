#include <bits/stdc++.h>

using namespace std;

#define MAXN 1300000

int vetor[MAXN + 1];

void crivo(){
	int a = 1;
	for(int i = 2; i <= MAXN; i++) vetor[i] = 1;
	for(int i = 2; i <= MAXN; i++){
		if(vetor[i]){
			vetor[i] = a;
			a++;
			if(i <= sqrt(MAXN)){
				for(int j = i * i; j <= MAXN; j += i){
					vetor[j] = 0;
				}
			}
		}
	}
}

int main(){
	
	int n, a;
	
	cin >> n;
	
	crivo();
	
	while(n--){
		cin >> a;
		cout << vetor[a] << endl;
	}
	
	return 0;
}

