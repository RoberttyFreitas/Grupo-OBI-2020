#include <bits/stdc++.h>

using namespace std;

int lsb(int x){ // retorna o valor somente com o ultimo bit
	return x&-x;
}

int cont_bits(int x){ // cont a quantidade de bits 1's
	int cont = 0;
	while(x > 0){
		x -= (x&-x);
		cont++;
	}
	return cont;
}

bool potencia2(int x){
	if(x == 0) return false;
	return (x&(x-1)) == 0;
}

int setBit(int x, int bit){
	return x | (1 << bit);
}

int cleanBit(int x, int bit){
	return x & ~(1 << bit);
}

int main(){
	
	
	int A = 6; //          0110 = 6
	int B = 10; //         1010 = 10
	int AandB = A & B; //  0010 = 2
	int AorB =  A | B; //  1110 = 14
	int AxorB = A ^ B; //  1100 = 12
	
	cout << AandB << endl;
	cout << AorB << endl;
	cout << AxorB << endl;
	
	cout << (A << 1) << endl; // A << 1 = 1100 = 12 = A * 2
	cout << (A >> 1) << endl; // A << 1 = 0011 = 3  = A / 2 
	
	cout << lsb(6) << endl; // 01(1)0 = 10 = 2
	cout << cont_bits(6) << endl; // 0110 = 2 bits 1s
	cout << potencia2(6) << endl; // 6 nao eh uma potencia de 2
	cout << potencia2(8) << endl; // 8 eh uma potencia de 2
	
	cout << setBit(6, 0) << endl; // 011(0) = 0111 = 7
	cout << cleanBit(6, 1) << endl; // 01(1)0 = 0100 = 4
		
	return 0;
}
