#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
    desync;
    vector <int> nums;
    int quantidadeDeRodadas, quantidadeDeNumeros, input, custo = 0, auxiliar = 0;
    cin >> quantidadeDeRodadas;

    for (int i = 0; i < quantidadeDeRodadas; i++){
        cin >> quantidadeDeNumeros;

        for (int j = 0; j < quantidadeDeNumeros; j++){
            cin >> input;
            nums.push_back(input);
        }

        int auxiliarFixoIncremento = 0;
        while(auxiliarFixoIncremento < nums.size() - 1){
            sort(nums.begin(), nums.end());

            auxiliar = nums[auxiliarFixoIncremento] + nums[auxiliarFixoIncremento+1];
            nums[auxiliarFixoIncremento+1] = auxiliar;
            custo += auxiliar;
            auxiliarFixoIncremento++;
        }

        cout << custo << endl;

        custo = 0;
        auxiliar = 0;
        nums.clear();
    }
}

/* INPUT

    4
    4
    1 1 1 1
    4
    1 1 5 8
    5
    1 3 7 15 30
    8
    4 4 4 4 4 4 4 4

*/

/* OUTPUT

    8
    24
    97
    96

*/