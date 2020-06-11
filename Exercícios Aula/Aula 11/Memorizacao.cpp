#include <bits/stdc++.h>

using namespace std;

#define MAXN 100000

int F[MAXN];

int FibMemorizacao(int i){
	if(F[i] >= 1) return F[i];
	F[i] = FibMemorizacao(i - 1) + FibMemorizacao(i - 2);
	return F[i]; 
}

int Fib(int i){
	if(i == 0 or i == 1) return 1;
	return Fib(i - 1) + Fib(i - 2);
}

int main(){
	
	int N;
	
	cin >> N;
	
	for(int i = 0; i <= N; i++){
		F[i] = -1;
	}
	
	F[0] = 1;
	F[1] = 1;
	
	cout << FibMemorizacao(N) << endl;
	
	cout << Fib(N) << endl;
	
	return 0;
}
