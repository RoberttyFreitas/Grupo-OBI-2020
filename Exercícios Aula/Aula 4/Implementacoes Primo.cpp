#include <iostream>

using namespace std;

bool primo1(int n){
	if(n == 1) return false;
	bool resp = true;
	for(int i = 2; i < n; i++){
		if(n % i == 0){
			resp = false;
			break;
		}
	}
	return resp;
}

bool primo2(int n){
	if(n == 1) return false;
	bool resp = true;
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0){
			resp = false;
			break;
		}
	}
	return resp;	
}

int main(){
	
	int n;
	
	cin >> n;
	
	cout << primo1(n) << endl;
	cout << primo2(n) << endl;
	
	return 0;
}
