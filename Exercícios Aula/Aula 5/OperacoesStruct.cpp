#include <bits/stdc++.h>

using namespace std;

struct Pessoa{
	string nome;
	int idade;
};

void printVetorPessoa(vector<Pessoa> v){
	cout << "----------------------------------" << endl;
	for(int i = 0; i < (int) v.size(); i++){
		cout << v[i].nome << " - " << v[i].idade << endl;
	}
	cout << endl;
}

bool comp(Pessoa p1, Pessoa p2){
	if(p1.nome < p2.nome) return 1;
	else if(p1.nome == p2.nome) return (p1.idade > p2.idade);
	else return 0;
}

int main(){
	
	Pessoa p1, p2, p3, p4;
	vector<Pessoa> v;
	
	p1.nome = "Robertty";
	p1.idade = 21;
		
	p2.nome = "Pedro";
	p2.idade = 23;
	
	p3.nome = "Ana";
	p3.idade = 20;
	
	v.push_back(p1);
	v.push_back(p2);	
	v.push_back(p3);
	
	printVetorPessoa(v);
	
	sort(v.begin(), v.end(), comp);
	
	printVetorPessoa(v);
	
	p4.nome = "Pedro";
	p4.idade = 19;
	v.push_back(p4);
	
	printVetorPessoa(v);
	
	sort(v.begin(), v.end(), comp);
	
	printVetorPessoa(v);
	
	return 0;
}
