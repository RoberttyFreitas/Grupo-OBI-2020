#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	int N;
	double aux;
	
	cin >> N;
	cout.precision(4);
	cout.setf(ios::fixed);
	
	while(N--){
		cin >> aux;
		cout << sqrt(aux) << endl;
	}
	
	return 0;
}
