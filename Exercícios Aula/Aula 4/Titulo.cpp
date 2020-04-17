#include <iostream>

using namespace std;

string title(string F){
	string retorno = "";
	bool inicio = true;
	for(int i = 0; i < (int) F.size(); i++){
		if(F[i] == ' '){
			inicio = true;
		}else if(inicio){
			if(F[i] >= 'a' && F[i] <= 'z'){
				F[i] -= 32;
			}
			inicio = false;
		}else{
			if(F[i] >= 'A' && F[i] <= 'Z'){
				F[i] += 32;
			}
		}
		retorno = retorno + F[i];
	}
	return retorno;
}

int main(){
	
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
	
	return 0;
}
