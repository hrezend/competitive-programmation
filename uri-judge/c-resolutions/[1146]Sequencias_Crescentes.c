//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <stdio.h>
#include <stdbool.h>
 
int main() {
    int x;
    int i;
    
	while(1){
		scanf("%d", &x);
		if(x == 0){
			break;
		}
		else{
			for(i = 1; i < x; i++){
				printf("%d ", i);		
			}
		}    	
    	printf("%d\n", x);
	}


	return 0;
}
