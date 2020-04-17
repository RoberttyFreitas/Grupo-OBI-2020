#include <iostream>

using namespace std;

int main(){
	
	int N, L, C;
	
	int copos = 0;
	
	cin >> N;
	
	while(N > 0){
		cin >> L >> C;
		if(L > C){
			copos += C;
		}
		N--;
	}
	
	cout << copos << endl;
	
	return 0;
}
