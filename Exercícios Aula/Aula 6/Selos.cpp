#include <bits/stdc++.h>

using namespace std;

bool primo(long int n){
	if(n <= 1) return false;
	for(long int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	} 
	return true;
}

int main(){
	
	long int n;
	
	cin >> n;
	
	if(n == 1){
		cout << "N" << endl;
	}else{
		if(primo(n)){
			cout << "N" << endl;
		}else{
			cout << "S" << endl;
		}
	}
	
	return 0;
}
