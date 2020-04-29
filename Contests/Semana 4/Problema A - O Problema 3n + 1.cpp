#include <iostream>

using namespace std;

int solve(int n){
	if(n == 1) return 0;
	if(n % 2 == 0){
		return solve(n / 2) + 1;
	}else{
		return solve(3 * n + 1) + 1;
	} 
}

int main(){
	
	int n;
	
	cin >> n;
	
	cout << solve(n) << endl;
	
	return 0;
}
