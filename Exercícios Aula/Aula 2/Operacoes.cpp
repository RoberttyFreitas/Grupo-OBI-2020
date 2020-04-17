#include <iostream>

using namespace std;

int main(){
	
	char C;
	double A, B;
	
	cin >> C;
	
	cin >> A >> B;
	
	cout.precision(2);
    cout.setf(ios::fixed);
	
	if(C == 'M'){
		cout << A * B << endl;
	}else{
		cout << A / B << endl;
	}
	
	return 0;
}
