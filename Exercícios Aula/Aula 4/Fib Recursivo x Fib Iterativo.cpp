#include <iostream>

using namespace std;

int fib[10000];

int FibIterativo(int n){
	fib[0] = 1;
	fib[1] = 1;
	for(int i = 2; i <= n; i++){
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	return fib[n];
}

int FibRecursivo(int n){
	if(n == 0 or n == 1) return 1;
	return FibRecursivo(n - 1) + FibRecursivo(n - 2);
}

int main(){
	
	int n;
	
	cin >> n;
	
	cout << "Iterativo" << endl;
	cout << FibIterativo(n) << endl;
	
	cout << "Recursivo" << endl;
	cout << FibRecursivo(n) << endl;
	
	return 0;
}
