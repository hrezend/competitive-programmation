//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

import java.util.Scanner;

public class Main {
 
    public static void main(String[] args){
        
        Scanner hr = new Scanner(System.in);

        int N[] = new int [4];
	    int Posicao = 0;
        
        for(int i = 0; i < 4; i++){
        	N[i] = hr.nextInt();
		    if(N[i] == 1){
		    	Posicao = i;	
		    }	
        }
 	
	    System.out.println(Posicao+1);
    }
 
}
