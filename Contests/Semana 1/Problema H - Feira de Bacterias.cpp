#include <bits/stdc++.h>

using namespace std;

int N, D, C, i = 0, j = -1;
double maximo = -1.0;

int main(){
	
	cin >> N;
	
	while(N--){
		cin >> D >> C;
		
		if((C * log10(D)) > maximo){
			maximo = 1.0 * C * log10(D);
			j = i;
		}
		i++;
	}
	
	cout << j << endl;
	
	return 0;
}
