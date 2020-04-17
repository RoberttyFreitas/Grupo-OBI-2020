#include <iostream>

using namespace std;

int main(){
	
	int N;
	int cont = 0;
	string a, b;
	
	cin >> N;
	cin >> a >> b;
	
	for(int i = 0; i < N; i++){
		if(a[i] == b[i]){
			cont++;
		}
	}
	
	cout << cont << endl;
	
	return 0;
}
