#include <bits/stdc++.h>
using namespace std;

int main(){
    int tr, i, tn;
    cin >> tr >> i >> tn;
    
    if(tn == 2){
        cout << "VITORIA" << endl;
    }
    else{
        cout << (9-tr) << " " << (3-i) << " " << (2-tn) << endl;
    }

}
