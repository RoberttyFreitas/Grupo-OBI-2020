#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int N, ans = 0;
	
	cin >> N;
	
	ans += N / 100;
	N = N % 100;
	
	ans += N / 50;
	N = N % 50;
	
	ans += N / 25;
	N = N % 25;
	
	ans += N / 10;
	N = N % 10;
	
	ans += N / 5;
	N = N % 5;
	
	ans += N;
	
	cout << ans << endl;
	
	return 0;
}

