#include <bits/stdc++.h>

using namespace std;

void printVetorPair(vector< pair<string, int> > v){
	cout << "----------------------------------" << endl;
	for(int i = 0; i < (int) v.size(); i++){
		cout << v[i].first << " - " << v[i].second << endl;
	}
	cout << endl;
}

int main(){
	
	pair<string, int> aux;
	
	aux.first = "Robertty";
	aux.second = 21;
	
	vector< pair<string, int> > v;
	
	v.push_back(aux);
	
	v.push_back(make_pair("Pedro", 23));
	v.push_back(make_pair("William", 19));
	v.push_back(make_pair("Ana", 29));
	
	printVetorPair(v);
	
	sort(v.begin(), v.end());
	
	printVetorPair(v);
	
	v.push_back(make_pair("Pedro", 19));
	
	printVetorPair(v);
	
	sort(v.begin(), v.end());
	
	printVetorPair(v);
	
	return 0;
}
