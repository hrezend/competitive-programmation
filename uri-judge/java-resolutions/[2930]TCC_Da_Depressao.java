//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

import java.util.Scanner;

public class Main{
	public static void main(String[] args){
	
		Scanner hr = new Scanner(System.in);
		int E, D;
		E = hr.nextInt();
		D = hr.nextInt();
	
		if(E > D){
			System.out.println("Eu odeio a professora!");
		}
		else if(D-E > 2){
			System.out.println("Muito bem! Apresenta antes do Natal!");
		}
		else if(D-E < 3){
			System.out.println("Parece o trabalho do meu filho!");
			E+= 2;
			if(E >= 24){
				System.out.println("Fail! Entao eh nataaaaal!");
			}
			else{
				System.out.println("TCC Apresentado!");
			}
		}
	}
}
