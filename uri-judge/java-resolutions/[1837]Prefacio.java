//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 	
	Scanner hr = new Scanner(System.in);
        int A, B;
	int Quociente = 0, Resto = 0;

	A = hr.nextInt();
	B = hr.nextInt();

	Quociente = A/B;
	Resto = A%B;

	if(A >= 0){
        	Quociente = A/B;
        	Resto = A%B;	
        } 
	else{
        	int X = 0, Y = 0;
        	
        	if(B < 0){
			X = B * -1;
		}
        	else{
			X = B;
		}
        	
        	for (Resto = 0; Resto < X; Resto++) {
        		Y = A - Resto;
        		if(Y % B == 0){
				break;
			}
        	}
        	Quociente = Y / B;
        }

	System.out.println(Quociente + " " + Resto);
 
    }
 
}
