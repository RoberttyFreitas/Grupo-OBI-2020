#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int N, A, B, C, vA = 0, vB = 0, vC = 0, aux;
	vector<int> v(10, 0);
	
	cin >> N;
	
	while(N--){
		cin >> aux;
		v[aux]++;
		
		A = min(v[1], min(v[3], v[5]));

		v[1] -= A;
		v[3] -= A;
		v[5] -= A;

		B = min(v[1], v[4]);

		v[1] -= B;
		v[4] -= B;

		C = min(v[2], v[4]);

		v[2] -= C;
		v[4] -= C;
		
		vA += A;
		vB += B;
		vC += C;
	}
	
	cout << "A: " << vA << endl;
	cout << "B: " << vB << endl;
	cout << "C: " << vC << endl;
	
	return 0;
}
