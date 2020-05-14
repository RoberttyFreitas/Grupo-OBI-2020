#include <bits/stdc++.h>

using namespace std;

#define MAXN 12000000

vector<int> v;
bool v_crivo[MAXN + 1];

void crivo(){
	for(int i = 2; i <= MAXN; i++) v_crivo[i] = true;
	for(int i = 2; i <= MAXN; i++){
		if(v_crivo[i]){
			v.push_back(i);
			if(i <= sqrt(MAXN)){
				for(int j = i * i; j <= MAXN; j += i){
					v_crivo[j] = false;
				}
			}
		}
	}
}

int main(){
	
	int n;
	
	cin >> n;
	
	crivo();
	
	cout << v[n-1] << endl;
	
	return 0;
}
