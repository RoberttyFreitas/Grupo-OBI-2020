#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int x0, y0, x1, y1;
	int x2, y2, x3, y3;
	
	cin >> x0 >> y0 >> x1 >> y1;
	cin >> x2 >> y2 >> x3 >> y3;
	
	if((x2 > x1) or (x0 > x3)){
		cout << "0" << endl;
	}else if((y2 > y1) or (y0 > y3)){
		cout << "0" << endl;
	}else{
		cout << "1" << endl;
	}
	
	return 0;
}
