#include <iostream>

using namespace std;

int main(){

    int M, N, aux;
    long long int cont = 0;
    
    cin >> N >> M;

    if(3 * M <= N){
        if(3 * M == N) cout << "1" << endl;
        else cout << "0" << endl;
        return 0;
    }

    for (int i = 1; i <= M; i++) {
        aux = N - i;
        if(2 * M < aux) continue;
        int menor = max(1, aux-M);
        int maior = min(aux-1, M);
        cont+=(maior-menor+1);
    }

    cout << cont << endl;

    return 0;
}
