#include <iostream>

using namespace std;

bool eh_primo(int x){
	if(x == 1) return false;
	bool res = true;
	for(int i = 2; i < x; i++){
		if(x % i == 0){
			res = false;
			break;
		}
	}
	return res;
}

int main(){
	
	int x;
	
	cin >> x;
	
	if(eh_primo(x)){
		cout << "S" << endl;
	}else{
		cout << "N" << endl;
	}
	
	return 0;
}
