#include <bits/stdc++.h>

using namespace std;

void imprimirConjunto(set<int> conj){
	set<int>::iterator it;
	for(it = conj.begin(); it != conj.end(); it++){
		cout << *it << " ";
	}
	cout << endl;
}

bool busca(int elem, set<int> conj){
	if(conj.find(elem) != conj.end()){
		return true;
	}else{
		return false;
	}
}

int main(){
	
	set<int> conjunto;
	
	conjunto.insert(2);
	conjunto.insert(2);
	conjunto.insert(3);
	conjunto.insert(4);
	
	imprimirConjunto(conjunto);
	
	if(busca(2, conjunto)){
		cout << "sim" << endl;
	}else{
		cout << "nao" << endl;
	}
	
	conjunto.erase(2);
	
	imprimirConjunto(conjunto);

	if(busca(2, conjunto)){
		cout << "sim" << endl;
	}else{
		cout << "nao" << endl;
	}
	
	cout << conjunto.size() << endl;
	
	return 0;
}
