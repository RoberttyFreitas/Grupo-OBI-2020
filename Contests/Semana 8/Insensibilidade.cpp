#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int x0, x1, y0, y1;
	int n;
	long long int res = 0;
	
	cin >> n;
	
	while(n--){
		cin >> x0 >> y0 >> x1 >> y1;
		res += (x0 - x1) * (x0 - x1) + (y0 - y1) * (y0 - y1);
	}
	
	cout << res << endl;
	
	return 0;
}
