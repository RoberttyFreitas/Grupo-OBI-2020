#include <iostream>

using namespace std;

int main(){
	
	double n1, n2, media;
	
	cin >> n1 >> n2;
	
	media = (n1 + n2) / 2.0;
	
	if(media >= 7.0){
		cout << "Aprovado" << endl;
	}else if(media >= 4.0){
		cout << "Recuperacao" << endl;
	}else{
		cout << "Reprovado" << endl;
	}
	
	
	return 0;
}
