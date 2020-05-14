#include <bits/stdc++.h>

using namespace std;

#define x first
#define y second

typedef pair<double, double> point;

double produto_escalar(point a, point b){
	return (a.x * b.x + a.y * b.y);
}

double produto_vetorial(point a, point b){
	return (a.x * b.y - a.y * b.x);
}

double distancia(point a, point b){
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

double area_poligono(vector<point> v){
	double area = 0.0;
	for(int i = 2; i < (int) v.size(); i++){
		area += produto_vetorial(make_pair(v[i].x - v[0].x, v[i].y - v[0].y), make_pair(v[i - 1].x - v[0].x, v[i - 1].y - v[0].y)) / 2.0;
	}
	return area;
}

int main(){
	
	point a, b;
	a.x = 2;
	a.y = 4;
	
	b.x = 5;
	b.y = 7;
	
	cout << "Distancia: " << distancia(a, b) << endl;
	cout << "Produto Escalar: " << produto_escalar(a, b) << endl;
	cout << "Produto Vetorial: " << produto_vetorial(a, b) << endl;
	
	
	vector<point> v;
	v.push_back(make_pair(0, 0));
	v.push_back(make_pair(0, 4));
	v.push_back(make_pair(5, 4));
	v.push_back(make_pair(5, 0));
	
	cout << "Area poligono: " << area_poligono(v) << endl;
	
	return 0;
}
