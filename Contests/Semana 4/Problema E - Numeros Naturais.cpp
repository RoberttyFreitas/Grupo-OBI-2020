#include <iostream>

using namespace std;

int solve(int n){
	if(n == 1) return 1;
	return solve(n - 1) + n; 
}

int main(){
	
	int n;
	
	cin >> n;
	
	cout << solve(n) << endl;
	
	return 0;
}
