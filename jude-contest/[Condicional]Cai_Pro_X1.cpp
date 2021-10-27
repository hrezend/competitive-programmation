#include <bits/stdc++.h>
using namespace std;

int main(){
    int inputL, inputP;
    int countL = 0, countP = 0;
    
    for(int i = 0; i < 3; i++){
        cin >> inputL >> inputP;
        countL += inputL;
        countP += inputP;
    }
    
    if(countL == countP){
        cout << "Empate" << endl;
    }
    else if(countL > countP){
        cout << "Lucas" << endl;
    }
    else if(countL < countP){
        cout << "Pedro" << endl;
    }
}
