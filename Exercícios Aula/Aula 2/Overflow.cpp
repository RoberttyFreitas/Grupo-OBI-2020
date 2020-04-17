#include <iostream>

using namespace std;

int main(){
	
	int N, P, Q;
	char c;
	
	cin >> N;
	cin >> P >> c >> Q;
	
	if(c == '+'){
		if((P + Q) <= N){
			cout << "OK" << endl;
		}else{
			cout << "OVERFLOW" << endl;
		}
	}else{
		if((P * Q) <= N){
			cout << "OK" << endl;
		}else{
			cout << "OVERFLOW" << endl;
		}
	}
	
	return 0;
}
