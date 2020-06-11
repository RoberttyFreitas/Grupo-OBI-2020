#include <bits/stdc++.h>

using namespace std;

#define PI 3.14159265

int main(){
	
	int A, B, C;
	
	cin >> A >> B >> C;
	
	if(((A + B) <= C) || ((A + C) <= B) || ((C + B) <= A)){
		cout << "n" << endl;
	}else if(((A * A + B * B) == C * C) || ((A * A + C * C) == B * B) || ((C * C + B * B) == A * A)){
		cout << "r" << endl;
	}else{
		float thetaA = acos((A * A - B * B - C * C) / (-2.0 * B * C)) * (180.0 / PI);
		float thetaB = acos((B * B - A * A - C * C) / (-2.0 * A * C)) * (180.0 / PI);
		float thetaC = acos((C * C - B * B - A * A) / (-2.0 * B * A)) * (180.0 / PI);
		if((thetaA < 90.0) && (thetaB < 90.0) && (thetaC < 90.0)){
			cout << "a" << endl;
		}else{
			cout << "o" << endl;
		} 
	}
	
	return 0;
}
