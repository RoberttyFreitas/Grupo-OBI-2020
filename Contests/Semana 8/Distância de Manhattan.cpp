#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int x0, x1, y0, y1;
	
	cin >> x0 >> y0 >> x1 >> y1;
	
	int res = abs(x0 - x1) + abs(y0 - y1);
	
	cout << res << endl;
	
	return 0;
}
