#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define endl '\n'
using namespace std;

void solve(){
    int gl = 0, pl = 0, gr = 0, pr = 0;
    bool left = true, right = false;
    string seq;
    cin >> seq;
       
    for(int i = 0; i < seq.length(); i++){
        //Atribuicao das rodadas
        if( seq[i] == 'S' && left ){
            pl++;
        }
        else if( seq[i] == 'R' && left ){
            pr++;
            left = false;
            right = true;
        }
        else if( seq[i] == 'S' && right ){
            pr++;
        }
        else if( seq[i] == 'R' && right ){
            pl++;
            left = true;
            right = false;
        }

        //Decisao de games
        if( pr >= 5 && (pr-pl) >= 2 ){
            pr = 0;
            pl = 0;
            gr++;
        }
        else if( pl >= 5 && (pl-pr) >= 2 ){
            pr = 0;
            pl = 0;
            gl++;
        }
        else if( pr == 10 ){
            pr = 0;
            pl = 0;
            gr++;
        }
        else if( pl == 10 ){
            pr = 0;
            pl = 0;
            gl++;
        }

        //Impressao dos resultados
        if( seq[i] == 'Q' ){
            if( gl == 2 ){
                cout << gl << " (winner) - " << gr << endl;
            }
            else if( gr == 2 ){
                cout << gl << " - " << gr << " (winner)" << endl;
            }
            else if( left ){
                cout << gl << " (" << pl << "*) - " << gr << " (" << pr << ")" << endl;
            }
            else if( right ){
                cout << gl << " (" << pl << ") - " << gr << " (" << pr << "*)" << endl;
            }
        }
    }
}

int main(){
	solve();
}