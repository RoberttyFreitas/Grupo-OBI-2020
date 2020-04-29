#include <iostream>
#include <iomanip>

using namespace std;

double media_vetor(int n, int v[]){
	if(n == 1) return 1.0 * v[0];
	return ((n - 1) * media_vetor(n - 1, v) + v[n - 1]) / (1.0 * n);
}

int main(){	
	
	int n, v[100100];
	cin >> n;
	
	for(int i=0;i<n;i++)
		cin >> v[i];

	cout << setprecision(2) << fixed;

	cout << media_vetor(n,v) << "\n";
	
	return 0;
}
