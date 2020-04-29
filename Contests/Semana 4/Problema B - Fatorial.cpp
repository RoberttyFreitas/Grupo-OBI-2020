#include <iostream>

using namespace std;

int fatorial(int n){
	if(n == 0) return 1;
	return fatorial(n - 1) * n;
}

int main(){
	
	int n;
	
	cin >> n;
	
	cout << fatorial(n) << endl;
	
	return 0;
}
