//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
       Scanner hr = new Scanner(System.in);
       int Casos;
	String Curso;
       
       Casos = hr.nextInt();
	hr.nextLine();       

       for(int i = 0; i < Casos; i++){
           Curso = hr.nextLine();
       }

       System.out.println("Ciencia da Computacao");
 
    }
 
}
