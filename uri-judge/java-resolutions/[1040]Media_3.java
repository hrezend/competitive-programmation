//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

import java.util.Scanner;
import java.text.DecimalFormat;

public class Main{
	public static void main(String[] args){
	
		Scanner hr = new Scanner(System.in);
		double n1, n2, n3, n4, ne;
		n1 = hr.nextDouble();
		n2 = hr.nextDouble();
		n3 = hr.nextDouble();
		n4 = hr.nextDouble();
		double media = ((n1*2)+(n2*3)+(n3*4)+(n4*1)) / 10;
		double mediaE;
		
		String mediaFormatada = new DecimalFormat("##############0.0").format(media);

		System.out.println("Media: " + mediaFormatada);
		if(media >= 7){
			System.out.println("Aluno aprovado.");
		}
		else if(media < 5){
			System.out.println("Aluno reprovado.");
		}
		else if(media >=5 && media < 7){
			System.out.println("Aluno em exame.");
			ne = hr.nextDouble();
			String neFormatado = new DecimalFormat("##############0.0").format(ne);
			System.out.println("Nota do exame: " + neFormatado);
			mediaE = (media+ne) / 2;
			String meFormatado = new DecimalFormat("##############0.0").format(mediaE);
			if(mediaE >=5){
				System.out.println("Aluno aprovado.");
				System.out.println("Media final: " + meFormatado);
			}
			else if(mediaE < 5){
				System.out.println("Aluno reprovado.");
				System.out.println("Media final: " + meFormatado);
			}
		}


	}
}
