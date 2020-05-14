#include <bits/stdc++.h>

using namespace std;

int main(){
	
	short int int_short, min_short, max_short;
	int int_, min_int, max_int;
	unsigned int int_unsigned, max_unsigned;
	long int int_long, min_long, max_long;
	long long int int_long_long, min_long_long, max_long_long;
	
	int_short = 1;
	while(int_short > 0){
		max_short = int_short;
		int_short++;
	}
	
	int_short = -1;
	while(int_short < 0){
		min_short = int_short;
		int_short--;
	}
	
	int_ = 1;
	while(int_ > 0){
		max_int = int_;
		int_++;
	}
	
	int_ = -1;
	while(int_ < 0){
		min_int = int_;
		int_--;
	}
	
	int_unsigned = 1;
	while(int_unsigned > 0){
		max_unsigned = int_unsigned;
		int_unsigned++;
	}
	
/*
 	
	int_long = max_int;
	while(int_long > 0){
		max_long = int_long;
		int_long++;
	}
	
	int_long = min_int;
	while(int_long < 0){
		min_long = int_long;
		int_long--;
	}
	
	int_long_long = 1;
	while(int_long_long > 0){
		max_long_long = int_long_long;
		int_long_long++;
	}
	
	int_long_long = -1;
	while(int_long_long < 0){
		min_long_long = int_long_long;
		int_long_long--;
	}
*/
	
	cout << "SHORT INT" << endl;
	cout << "min: " << min_short << "  max: " << max_short << endl;
	
	cout << "INT" << endl;
	cout << "min: " << min_int << "  max: " << max_int << endl;
	
	cout << "UNSIGNED INT" << endl;
	cout << "min: 0" << "  max: " << max_unsigned << endl;

/*
 	
	cout << "LONG INT" << endl;
	cout << "min: " << min_long << "  max: " << max_long << endl;

	
	cout << "LONG LONG INT" << endl;
	cout << "min: " << min_long_long << "  max: " << max_long_long << endl;
*/	
	return 0;
}
