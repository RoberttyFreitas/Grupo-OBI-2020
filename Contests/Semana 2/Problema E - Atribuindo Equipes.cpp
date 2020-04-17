#include <iostream>

using namespace std;

int main(){
	
	int A, B, C, D;
	int result = 5 * 10000;
	
	cin >> A >> B >> C >> D;
	
	result = min(result, abs((A + B) - (C + D)));
	result = min(result, abs((A + C) - (B + D)));
	result = min(result, abs((A + D) - (B + C)));
	
	cout << result << endl;
	
	return 0;
}
