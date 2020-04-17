#include <iostream>

using namespace std;

int somatorio(int n){
	if(n == 0) return 0;
	return somatorio(n - 1) + n;
}

int main(){
	
	int n;
	
	cin >> n;
	
	cout << somatorio(n) << endl;
	
	return 0;
}
