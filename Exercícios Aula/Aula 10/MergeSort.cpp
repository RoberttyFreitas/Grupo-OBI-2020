#include <bits/stdc++.h>

using namespace std;

vector<int> merge(vector<int> v1, vector<int> v2){
	vector<int> res;
	int ini1 = 0, ini2 = 0;
	while((ini1 < (int) v1.size()) || (ini2 < (int) v2.size())){
		if((ini1 < (int) v1.size()) && (ini2 < (int) v2.size())){
			if(v1[ini1] <= v2[ini2]){
				res.push_back(v1[ini1]);
				ini1++;
			}else{
				res.push_back(v2[ini2]);
				ini2++;
			}
		}else if(ini1 < (int) v1.size()){
			res.push_back(v1[ini1]);
			ini1++;
		}else{
			res.push_back(v2[ini2]);
			ini2++;
		}
	}
	
	return res;
}

vector<int> merge_sort(vector<int> v){
	
	if((int) v.size() == 1) return v;
	
	vector<int> u1, u2;
	for(int i = 0; i < ((int) v.size()) / 2; i++){
		u1.push_back(v[i]);
	}
	
	for(int i = ((int) v.size()) / 2; i < (int) v.size(); i++){
		u2.push_back(v[i]);
	}
	
	u1 = merge_sort(u1);
	u2 = merge_sort(u2);
	
	vector<int> res = merge(u1, u2);
		
	return res;
}

int main(){
	
	int n;
	
	cin >> n;
	
	vector<int> v(n);
	
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	
	v = merge_sort(v);
	
	for(int i = 0; i < n; i++){
		cout << v[i] << " ";
	}
	
	return 0;
}
