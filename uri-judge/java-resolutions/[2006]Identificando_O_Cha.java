//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
    
        Scanner hr = new Scanner(System.in);
        int Tipo;
	    int Palpites[] = new int [10];
	    int Contador = 0;
	    
	    Tipo = hr.nextInt();
	    
	    
	    for(int i = 0; i < 5; i++){
		    Palpites[i] = hr.nextInt();
    		if(Palpites[i] == Tipo){
		    	Contador++;
	    	}	
	    }
    
        System.out.println(Contador);
 
    }
 
}
