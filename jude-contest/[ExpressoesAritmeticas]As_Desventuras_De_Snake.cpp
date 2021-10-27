#include <bits/stdc++.h>
using namespace std;

int main(){
    int answer, Q1, Q2, Q3, E1, E2, E3;
    cin >> Q1 >> Q2 >> Q3 >> E1 >> E2 >> E3;
    
    answer = ((Q1 - 3 * E1) + (Q2 - 3 * E2) + (Q3 - 3 * E3));
    
    cout << answer << endl;
}
