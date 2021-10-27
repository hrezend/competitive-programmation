#include <bits/stdc++.h>
using namespace std;

int main(){
    int numero;
    cin >> numero;
    
    cout << (numero % 10) << " " << (numero % 100) / 10 << " " << (numero % 1000) / 100 << endl;
}
