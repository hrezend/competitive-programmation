#include <bits/stdc++.h>
using namespace std;

int main(){
    int tamanhoDaPista, metrosPretendidos, answer;
    cin >> tamanhoDaPista >> metrosPretendidos;
    
    answer = (metrosPretendidos % tamanhoDaPista);
    
    cout << answer << endl;
}
