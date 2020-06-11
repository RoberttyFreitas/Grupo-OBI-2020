#include <bits/stdc++.h>

using namespace std;

int ContagemInversoes(vector<int> &v){
	if((int) v.size() == 1) return 0;
	
	int inv = 0;
	
	int m = ((int) v.size() - 1) / 2;
	
	vector<int> u1, u2;
	
	for(int i = 0; i <= m; i++){
		u1.push_back(v[i]);
	}
	
	for(int i = m + 1; i < (int) v.size(); i++){
		u2.push_back(v[i]);
	}
	
	inv += ContagemInversoes(u1);
	inv += ContagemInversoes(u2);
	
	int i = 0, j = 0;
	
	for(int k = 0; k < (int) v.size(); k++){
		if((i < (int) u1.size()) and (j < (int) u2.size())){
			if(u1[i] <= u2[j]){
				v[k] = u1[i];
				i++;
			}else{
				v[k] = u2[j];
				j++;
				inv += u1.size() - i;
			}
		}else if(i < (int) u1.size()){
			v[k] = u1[i];
			i++;
		}else{
			v[k] = u2[j];
			j++;
		}
	}
	
	return inv;
}

int main(){	
	
	int N;
	
	cin >> N;
	
	vector<int> v(N);
	
	for(int i = 0; i < N; i++){
		cin >> v[i];
	}

	cout << ContagemInversoes(v) << endl;
	
	return 0;
}
