#include <iostream>

using namespace std;

int main(){
	
	int N;
	int qtd = 0;
	string A, B;
	
	cin >> N;
	
	cin >> A;
	cin >> B;
	
	for(int i = 0; i < N; i++){
		if(A[i] == B[i]){
			qtd++;
		}
	}
	
	cout << qtd;
	
	return 0;
}
