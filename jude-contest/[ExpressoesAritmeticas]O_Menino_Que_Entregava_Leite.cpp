#include <bits/stdc++.h>
using namespace std;

int main(){
    int answer, comprimentoDaCarroca, larguraDaCarroca, raioDaGarrafa, areaDaGarrafa;
    cin >> comprimentoDaCarroca >> larguraDaCarroca >> raioDaGarrafa;
    
    areaDaGarrafa = raioDaGarrafa*2;
    
    answer = ((comprimentoDaCarroca/areaDaGarrafa)*(larguraDaCarroca/areaDaGarrafa));
    
    cout << answer << endl;
}
