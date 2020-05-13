//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
using namespace std;

int main(){
    int C;
    cin >> C;
    
    for(int i = 0; i < C; i++){
        int N;
        cin >> N;
        int Vetor[N];
        int MT = 0;
        int Cont = 0;
        
        for(int j = 0; j < N; j++){
            int MF;
            cin >> MF;
            Vetor[j] = MF;
            MT += MF;
        }
        
        float Media = (MT/N) * 1.00;
        
        for(int k = 0; k < N; k++){
            if(Vetor[k] > Media){
                Cont++;
            }
        }
        
        float Result = (Cont*100.000) / N;
        cout << fixed << setprecision(3) << Result << "%" << endl;
    }
 
}
