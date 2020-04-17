#include <iostream>

using namespace std;

int main(){
	
	int T1, T2, T3;
	
	cin >> T1;
	cin >> T2;
	cin >> T3;
	
	if((T1 < T2) && (T2 < T3)){
		cout << "1\n2\n3\n";
	}else if((T1 < T3) && (T3 < T2)){
		cout << "1\n3\n2\n";
	}else if((T2 < T1) && (T1 < T3)){
		cout << "2\n1\n3\n";
	}else if((T2 < T3) && (T3 < T1)){
		cout << "2\n3\n1\n";
	}else if((T3 < T1) && (T1 < T2)){
		cout << "3\n1\n2\n";
	}else if((T3 < T2) && (T2 < T1)){
		cout << "3\n2\n1\n";
	}
	
	return 0;
}

