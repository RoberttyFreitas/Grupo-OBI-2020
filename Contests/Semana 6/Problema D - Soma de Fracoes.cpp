#include <bits/stdc++.h>

using namespace std;

long int mdc(long int a, long int b){
	if(a % b == 0) return b;
	return mdc(b, a % b); 
}

int main(){
	
	long int A, B, C, D;
	
	cin >> A >> B >> C >> D;
	
	long int F = B * D;
	
	long int E = A * D + C * B;
	
	long int d = mdc(E, F);
	
	cout << E / d << " " << F / d << endl; 
	
	return 0;
}
