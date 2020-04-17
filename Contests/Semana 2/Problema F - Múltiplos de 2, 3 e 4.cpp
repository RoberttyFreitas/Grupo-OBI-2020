#include <iostream>

using namespace std;

int N, M, mult2 = 0, mult3 = 0, mult4 = 0;

int main(){
	
	cin >> N;
	
	while(N--){
		cin >> M;
		mult2 += (M % 2 == 0);
		mult3 += (M % 3 == 0);
		mult4 += (M % 4 == 0);
	}
	
	cout << mult2 << endl;
	cout << mult3 << endl;
	cout << mult4 << endl;
	
	return 0;
}
