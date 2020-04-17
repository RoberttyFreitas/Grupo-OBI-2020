#include <iostream>

using namespace std;

int main(){
	
	int N, aux, estado = 0, result = 0;
	
	cin >> N;
	
	while(N--){
		cin >> aux;
		if((estado == 0) && (aux == 1)){
			estado = 1;
		}else if((estado == 1) && (aux == 0)){
			estado = 2;
		}else if((estado == 2) && (aux == 0)){
			estado = 0;
			result++;
		}else if((estado == 2) && (aux == 1)){
			estado = 1;
		}
	}
	
	cout << result << endl;
	
	return 0;
}
