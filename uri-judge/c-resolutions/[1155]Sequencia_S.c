//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <stdio.h>
#include <stdlib.h>

int main(void){
    float somatorio = 0;
    int i;
    for(i = 1; i <= 100; i++){
        somatorio = somatorio + (1.00/i);
    }
    printf("%.2f\n",somatorio);
    return 0;
}
