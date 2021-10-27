#include <bits/stdc++.h>
using namespace std;

int main(){
    int navesNoQuadrante, navesSondadas, navesNaFrente, navesNaDireita, navesNaEsquerda, navesNoFundo;
    cin >> navesSondadas >> navesNaFrente >> navesNaDireita >> navesNaEsquerda >> navesNoFundo;
    
    navesNoQuadrante = (navesSondadas - (navesNaFrente + navesNaDireita + navesNaEsquerda + navesNoFundo));
    
    cout << navesNoQuadrante << endl;
}
