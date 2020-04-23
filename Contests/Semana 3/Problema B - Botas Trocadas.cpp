#include <iostream>

using namespace std;

int num_esq[65];
int num_dir[65];

int main(){
	
	int N, M, resultado = 0;
	char L;
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> M >> L;
		if(L == 'E'){
			num_esq[M]++;
		}else{
			num_dir[M]++;
		}
	}
	
	for(int i = 0; i <= 62; i++){
		resultado += min(num_esq[i], num_dir[i]);
	}
	
	cout << resultado << endl;
	
	return 0;
}
