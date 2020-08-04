//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

import java.util.Scanner;
import java.lang.Math;
import java.text.DecimalFormat;


public class Main{
	public static void main(String[] args){
	
		Scanner hr = new Scanner(System.in);
		double a, b, c;
		a = hr.nextDouble();
		b = hr.nextDouble();
		c = hr.nextDouble();
	
		double delta = (b*b) - (4*a*c);
		double raizQ = Math.sqrt(delta);
	
		double r1 = (-b + raizQ) / (2*a);
		double r2 = (-b - raizQ) / (2*a);
		
		String r1Formatado = new DecimalFormat("##############0.00000").format(r1);
		String r2Formatado = new DecimalFormat("##############0.00000").format(r2);

		if(a != 0 && raizQ > 0){
 			System.out.println("R1 = " + r1Formatado);
 			System.out.println("R2 = " + r2Formatado);
		}
		else{			
 			System.out.println("Impossivel calcular");
		}	

	}
}
