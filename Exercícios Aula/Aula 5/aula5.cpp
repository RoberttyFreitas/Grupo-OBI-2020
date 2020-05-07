#include <bits/stdc++.h>

using namespace std;

struct Pessoa{
	int idade;
	string nome;
	double altura;
};

bool funcao_comparacao(Pessoa x, Pessoa y){
	if(x.idade < y.idade){
		return true;
	}else{
		return false;
	}
}

int main(){
	
	int n, idade;
	string nome;
	double altura;
	Pessoa p;
	
	cin >> n;
	
	vector<Pessoa> pessoas;
	
	for(int i = 0; i < n; i++){
		cin >> idade >> nome >> altura;
		p.idade = idade;
		p.nome = nome;
		p.altura = altura;
		pessoas.push_back(p);
	}
	
	sort(pessoas.begin(), pessoas.end(), funcao_comparacao);
	
	for(int i = 0; i < n; i++){
		cout << pessoas[i].nome << " " << pessoas[i].idade << " " << pessoas[i].altura << endl;
	}
	
	return 0;
}
