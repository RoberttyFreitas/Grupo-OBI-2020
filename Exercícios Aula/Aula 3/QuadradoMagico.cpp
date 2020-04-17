#include <iostream>

using namespace std;

int mat[12][12];

int main(){
	
	int N;
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cin >> mat[i][j];
		}
	}
	
	int soma_v = 0;
	bool soma_igual = true;
	
	for(int i = 0; i < N; i++){
		soma_v += mat[0][i];
	}
	
	for(int i = 0; i < N; i++){
		int soma_l = 0;
		for(int j = 0; j < N; j++){
			soma_l += mat[i][j];
		}
		if(soma_l != soma_v){
			soma_igual = false;
		}
	}
	
	for(int i = 0; i < N; i++){
		int soma_c = 0;
		for(int j = 0; j < N; j++){
			soma_c += mat[j][i];
		}
		if(soma_c != soma_v){
			soma_igual = false;
		}
	}
	
	int soma_diagonal = 0;
	for(int i = 0; i < N; i++){
		soma_diagonal += mat[i][i];
	}

	if(soma_diagonal != soma_v){
		soma_igual = false;
	}
	
	soma_diagonal = 0;
	for(int i = 0; i < N; i++){
		soma_diagonal += mat[N - 1 - i][i];
	}

	if(soma_diagonal != soma_v){
		soma_igual = false;
	}
	
	if(soma_igual){
		cout << soma_v << endl; 
	}else{
		cout << "-1" << endl;
	}	
	
	return 0;
}
