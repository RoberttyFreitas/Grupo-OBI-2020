#include <iostream>

using namespace std;

bool isVogal(char c){
	if((c == 'a') || (c == 'e') ||(c == 'i') || (c == 'o') || (c == 'u')){
		return true;
	}else{
		return false;
	}
}

int main(){
	
	
	string s;
	
	cin >> s;
	
	bool resp = true;
	
	int i = 0;
	int j = (int) s.size() - 1;
	
	while(true){
		
		while((!isVogal(s[i])) && (i < j))
			i++;
		while((!isVogal(s[j])) && (i < j))
			j--;
			
		if(i >= j){
			break;
		}
		
		if(s[i] != s[j]){
			resp = false;
			break;
		}
		
		i++;
		j--;
		
	}
	
	if(resp){
		cout << "S" << endl;
	}else{
		cout << "N" << endl;
	}
	
	return 0;
}
