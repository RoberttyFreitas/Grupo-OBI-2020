#include <bits/stdc++.h>

using namespace std;

int main(){
	
	long long int n;
	
	cin >> n;
	
	if(((n&(n+1)) == 0) and (n > 0)){
		cout << "S" << endl;
	}else{
		cout << "N" << endl;
	}
	
	return 0;
}
