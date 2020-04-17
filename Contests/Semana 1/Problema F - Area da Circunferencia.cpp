#include <iostream>

#define pi 3.1416

using namespace std;

int main(){
	
	double R;
	
	cin >> R;
	
	cout.precision(2);
	cout.setf(ios::fixed);
	
	cout << pi * R * R << endl;
	
	return 0;
}
