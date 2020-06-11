#include <bits/stdc++.h>

using namespace std;

int ContagemInversoesTradicional(vector<int> v){
	int ans = 0;
	for(int i = 0; i < (int) v.size(); i++){
		for(int j = i + 1; j < (int) v.size(); j++){
			if(v[i] > v[j]) ans++;
		}
	}
	return ans;
}

int ContagemInversoesMerge(vector<int> &v){
	
	if(v.size() == 1) return 0;
	int inv = 0;
	
	vector<int> u1, u2;
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
			if(u1[ini1] <= u2[ini2]){
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
	
	int n;
	
	cin >> n;
	
	vector<int> v(n);
	
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	
	cout << ContagemInversoesTradicional(v) << endl;
	cout << ContagemInversoesMerge(v) << endl;
	
	return 0;
}
