#include <iostream>

using namespace std;

int main(){
	
	int IA, IB, FA, FB;
	
	cin >> IA >> IB >> FA >> FB;
	
	if((IA == FA) && (IB == FB)){
		cout << "0" << endl;
	}else if((IA != FA) && (IB == FB)){
		cout << "1" << endl;
	}else if((IA == FA) && (IB != FB)){
		cout << "2" << endl;
	}else{
		cout << "1" << endl;
	}
	
	return 0;
}
