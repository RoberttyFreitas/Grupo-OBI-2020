#include <bits/stdc++.h>

using namespace std;

void printVetor(vector<int> v){
	cout << "-------------------------------------" << endl;
	for(int i = 0; i < (int) v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;
}

int main(){
	
	vector<int> v(10, 55);
	
	printVetor(v);
	
	v.resize(5);
	
	printVetor(v);
	
	v.resize(8);
	
	printVetor(v);
	
	v.push_back(8);
	v.push_back(5);
	v.push_back(9);
	
	printVetor(v);
	
	v.pop_back();
	
	printVetor(v);
	
	sort(v.begin(), v.end());
	
	printVetor(v);
	
	v.clear();
	
	printVetor(v);
	
	return 0;
}
