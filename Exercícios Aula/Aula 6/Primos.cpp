#include <bits/stdc++.h>

using namespace std;

bool primo_implementacao1(int x){
	if(x == 1) return false;
	for(int i = 2; i < x; i++){
		if(x % i == 0){
			return false;
		}
	}
	return true;
}

bool primo_implementacao2(int x){
	if(x == 1) return false;
	for(int i = 2; i <= sqrt(x); i++){
		if(x % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	
	int x;
	
	cin >> x;
	
	if(primo_implementacao1(x)){
		cout << "S" << endl;
	}else{
		cout << "N" << endl;
	}
	
	if(primo_implementacao2(x)){
		cout << "S" << endl;
	}else{
		cout << "N" << endl;
	}
	
	return 0;
}
