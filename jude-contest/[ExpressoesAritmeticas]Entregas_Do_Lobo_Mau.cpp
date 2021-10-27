#include <bits/stdc++.h>
using namespace std;

int main(){
    int answer, tamanhoDaEstrada, distanciaEntrePedagios, valorPorKM, valorPorPedagio;
    cin >> tamanhoDaEstrada >> distanciaEntrePedagios >> valorPorKM >> valorPorPedagio;
    
    answer = (((tamanhoDaEstrada/distanciaEntrePedagios)*valorPorPedagio) + (valorPorKM * tamanhoDaEstrada));
    
    cout << answer << endl;
}
