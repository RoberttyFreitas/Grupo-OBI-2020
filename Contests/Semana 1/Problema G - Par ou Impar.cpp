#include <iostream>

using namespace std;

int main(){
	
	int A, B;
	
	cin >> A >> B;
	
	if((A + B) % 2 == 0){
		cout << "Bino" << endl;
	}else{
		cout << "Cino" << endl;
	}
	
	return 0;
}
