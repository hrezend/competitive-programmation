//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

import java.util.Scanner;

public class Main {
 
    public static void main(String[] args){
        
        Scanner hr = new Scanner(System.in);
 
        int Maior = 0;
	    int Num;
        Num = hr.nextInt();
        
	    while(Num != 0){
		    if(Num > Maior){
		    	Maior = Num;
		    }
	    	Num = hr.nextInt();
	    }

        System.out.println(Maior);
 
    }
 
}
