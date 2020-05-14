#include <bits/stdc++.h>

using namespace std;

#define MAX 100000000

bool eh_primo[MAX + 1];

void crivo(){
	for(int i = 0; i <= MAX; i++){
		eh_primo[i] = true;
	}
	eh_primo[1] = false;
	for(int i = 2; i <= sqrt(MAX); i++){
		if(eh_primo[i]){
			for(int j = i * i; j <= MAX; j += i){
				eh_primo[j] = false;
			}
		}
	}
}

int main(){
	
	int N;
	
	crivo();
	
	while(true){
		cin >> N;
		if(N == 0) break;
		if(eh_primo[N]){
			cout << "S" << endl;
		}else{
			cout << "N" << endl;
		}
	}
		
	return 0;
}
