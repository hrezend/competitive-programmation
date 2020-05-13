//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

import java.io.IOException;
import java.util.Scanner

public class Main {
 
    public static void main(String[] args) throws IOException {
 
       Scanner hr = new Scanner(System.in);
       int Casos, N;
       
       Casos = hr.nextInt();
       
       for(int i = 0; i < Casos; i++){
           N = hr.nextInt();
           if(N % 2 == 0){
               System.out.println("0");
           }
           else{
               System.out.println("1");
           }
       }
 
    }
 
}
