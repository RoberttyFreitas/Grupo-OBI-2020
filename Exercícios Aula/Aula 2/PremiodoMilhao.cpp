#include <iostream>

using namespace std;

int main(){
	
	int N, A, soma = 0, dia = 1;
	
	cin >> N;
	
	while(N--){
		cin >> A;
		soma += A;
		if(soma >= 1000000){
			break;
		}
		dia++;
	}
	
	cout << dia << endl;
	
	return 0;
}
