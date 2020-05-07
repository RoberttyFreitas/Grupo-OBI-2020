#include <bits/stdc++.h>

using namespace std;

void imprimirMapa(map<string, int> mapa){
	map<string, int>::iterator it;
	cout << "----------------------------" << endl;
	for(it = mapa.begin(); it != mapa.end(); it++){
		cout << "( " << it->first << " , " << it->second << " )" << endl;
	}
}

bool buscaMapa(string s, map<string, int> mapa){
	if(mapa.find(s) != mapa.end()){
		return true;
	}else{
		return false;
	}
}

int main(){
	
	map<string, int> mapa;
	
	mapa["a"] = 1;
	
	cout << mapa["a"] << endl;
	
	mapa.insert(make_pair("Robertty", 21));
	mapa.insert(make_pair("Ana", 19));
	mapa.insert(make_pair("Pedro", 18));
	
	imprimirMapa(mapa);
	
	if(buscaMapa("Ana", mapa)){
		cout << "sim" << endl;
	}else{
		cout << "nao" << endl;
	}
	
	mapa.erase("Ana");
	
	imprimirMapa(mapa);
	
	if(buscaMapa("Ana", mapa)){
		cout << "sim" << endl;
	}else{
		cout << "nao" << endl;
	}
	
	return 0;
}
