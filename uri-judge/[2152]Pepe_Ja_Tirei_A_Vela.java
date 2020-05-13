//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

import java.util.Scanner;

public class Main{

	public static void main(String[] args){	

		Scanner hr = new Scanner(System.in);
		int Casos, Hora, Minuto, Porta;
		Casos = hr.nextInt();

		for(int i = 0; i < Casos; i++){
			Hora = hr.nextInt();
			Minuto = hr.nextInt();
			Porta = hr.nextInt();

			if(Porta == 0){
				if(Hora < 10 && Minuto > 9){
					System.out.println("0" + Hora + ":" + Minuto + " - A porta fechou!");
				}
				else if(Hora < 10 && Minuto < 10){
					System.out.println("0" + Hora + ":" + "0" + Minuto + " - A porta fechou!");
				}
				else if(Hora > 9 && Minuto < 10){
					System.out.println(Hora + ":" + "0" + Minuto + " - A porta fechou!");
				}
				else if(Hora > 9 && Minuto > 9){
					System.out.println(Hora + ":" + Minuto + " - A porta fechou!");
				}
			}
			else if(Porta == 1){
				if(Hora < 10 && Minuto > 9){
					System.out.println("0" + Hora + ":" + Minuto + " - A porta abriu!");
				}
				else if(Hora < 10 && Minuto < 10){
					System.out.println("0" + Hora + ":" + "0" + Minuto + " - A porta abriu!");
				}
				else if(Hora > 9 && Minuto < 10){
					System.out.println(Hora + ":" + "0" + Minuto + " - A porta abriu!");
				}
				else if(Hora > 9 && Minuto > 9){
					System.out.println(Hora + ":" + Minuto + " - A porta abriu!");
				}
			}		
		}
	}

}
