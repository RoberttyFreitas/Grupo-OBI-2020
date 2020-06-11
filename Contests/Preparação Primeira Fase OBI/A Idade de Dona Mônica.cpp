#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int M, A, B, C;
	
	cin >> M >> A >> B;
	
	C = M - A - B;
	
	cout << max(A, max(B, C)) << endl;
	
	return 0;
}
