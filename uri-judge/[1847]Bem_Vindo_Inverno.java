//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 	
	Scanner hr = new Scanner(System.in);
	int T1, T2, T3;
	boolean Condicao = false;
	
	T1 = hr.nextInt();
	T2 = hr.nextInt();
	T3 = hr.nextInt();

	if(T2 < T1 && T3 >= T2){
		Condicao = true;
	}
	else if(T2 > T1 && T3 > T2 && T3-T2 >= T2-T1){
		Condicao = true;
	}
	else if(T1 > T2 && T2 > T3 && T2-T3 < T1-T2){
		Condicao = true;
	}
	else if(T1 == T2 && T3 > T2){
		Condicao = true;
	} 
	
	if(Condicao){
		System.out.println(":)");
	}
	else{
		System.out.println(":(");
	}
 
    }
 
}
