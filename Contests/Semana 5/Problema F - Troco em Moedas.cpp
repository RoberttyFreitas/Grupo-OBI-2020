#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int N, total = 0;
	
	vector<int> troco;
	
	cin >> N;
	
	troco.push_back((int) N / 100);
	N = N % 100;
	
	troco.push_back((int) N / 50);
	N = N % 50;
	
	troco.push_back((int) N / 25);
	N = N % 25;
	
	troco.push_back((int) N / 10);
	N = N % 10;
	
	troco.push_back((int) N / 5);
	N = N % 5;
	
	troco.push_back(N);
	
	for(int i = 0; i < (int) troco.size(); i++){
		total += troco[i];
	}
	
	cout << total << endl;
	
	for(int i = 0; i < (int) troco.size(); i++){
		cout << troco[i] << endl; 
	}
	
	return 0;
}
