#include <bits/stdc++.h>

using namespace std;


int main(){
	
	set<int> conjunto;
	
	conjunto.insert(2);
	conjunto.insert(0);
	conjunto.insert(5);
	
	set<int>::iterator it;
	for(it = conjunto.begin(); it != conjunto.end(); it++){
		cout << *it << endl;
	} 
	
	return 0;
}
