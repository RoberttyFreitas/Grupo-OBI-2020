#include <iostream>

using namespace std;

int main(){
	
	int N, aux, total = 0, total_p = 0, valor;
	
	cin >> N;
	
	N--;
	cin >> aux;
	
	total_p = 1;
	valor = aux;
	
	while(N--){
		cin >> aux;
		if(aux == valor){
			total_p++;
		}else{
			total = max(total, total_p);
			total_p = 1;
			valor = aux;
		}
	}
	
	total = max(total, total_p);
	
	cout << total << endl;
	
	return 0;
}
