#include <bits/stdc++.h>

using namespace std;

long long int ContagemInversoesMerge(vector<double> &v){
	
	if(v.size() == 1) return 0;
	long long int inv = 0;
	
	vector<double> u1, u2;
	for(int i = 0; i < ((int) v.size()) / 2; i++){
		u1.push_back(v[i]);
	}
	
	for(int i = ((int) v.size()) / 2; i < (int) v.size(); i++){
		u2.push_back(v[i]);
	}
	
	inv += ContagemInversoesMerge(u1);
	inv += ContagemInversoesMerge(u2);
	
	int ini1 = 0, ini2 = 0;
	for(int i = 0; i < (int) v.size(); i++){
		if((ini1 < (int) u1.size()) && (ini2 < (int) u2.size())){
			if(u1[ini1] > u2[ini2]){
				v[i] = u1[ini1];
				ini1++;
			}else{
				v[i] = u2[ini2];
				ini2++;
				inv += u1.size() - ini1;
			}
		}else if(ini1 < (int) u1.size()){
			v[i] = u1[ini1];
			ini1++;
		}else{
			v[i] = u2[ini2];
			ini2++;
			inv += u1.size() - ini1;
		}
	}
	
	return inv;
}

int main(){
	
	int N;
	
	long long int aux, X, Y;
	
	vector<double> v;
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> X >> Y;
		aux = X * X + Y * Y;
		v.push_back(sqrt(aux));
	}
	
	cout << ContagemInversoesMerge(v) << endl;
	
	return 0;
}
