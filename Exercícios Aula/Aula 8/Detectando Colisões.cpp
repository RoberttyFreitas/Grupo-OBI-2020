#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int x0, x1, y0, y1;
	int x2, x3, y2, y3;
	
	cin >> x0 >> y0 >> x1 >> y1;
	cin >> x2 >> y2 >> x3 >> y3;
	
	if((x0 > x3) or (x2 > x1)){	
		cout << "0" << endl;
	}else if((y0 > y3) or (y2 > y1)){
		cout << "0" << endl;
	}else{
		cout << "1" << endl;
	}
	
	return 0;
}
