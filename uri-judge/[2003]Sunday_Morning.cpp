//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
using namespace  std;

int main(){
    int H,M;
    while(scanf("%d:%d", &H, &M) != EOF)
    {
        printf("Atraso maximo: ");
        if(H<7 || (H==7 && M==0)) printf("0\n");
        else printf("%d\n", ((H+1)-8)*60 + M);
    }
    return 0;
}
