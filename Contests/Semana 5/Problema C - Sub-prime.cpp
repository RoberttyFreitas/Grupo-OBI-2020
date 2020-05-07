#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int B, N, D, C, V;
	
	while(true){
		cin >> B >> N;
		if(B == 0 && N == 0) break;
		vector<int> v(B+1, 0);
		bool result = true;
		
		for(int i = 1; i <= B; i++){
			cin >> v[i];
		}
		
		for(int i = 1; i <= N; i++){
			cin >> D >> C >> V;
			v[D] -= V;
			v[C] += V;
		}
		
		for(int i = 1; i <= B; i++){
			if(v[i] < 0){
				result = false;
				break;
			}
		}
		
		if(result){
			cout << "S" << endl;
		}else{
			cout << "N" << endl;
		}
	}
	
	
	return 0;
}
