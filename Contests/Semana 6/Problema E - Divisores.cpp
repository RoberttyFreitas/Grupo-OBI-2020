#include <bits/stdc++.h>

using namespace std;

long long int A, B, C, D;

int main(){
	
	cin >> A >> B >> C >> D;
	
	long long int num;
	
	if((C % A != 0) or (A % B == 0)){
		cout << "-1" << endl;
		return 0;
	}
	
	if(D % A != 0){
		cout << A << endl;
		return 0; 
	}
	
	for(num = A; num <= C; num += A){
		if((num % B != 0) && (D % num != 0) && (C % num == 0)){
			break;
		}
	}
	
	if(num > C){
		cout << "-1" << endl;
	}else{
		cout << num << endl;
	}
	
	
	return 0;
}
