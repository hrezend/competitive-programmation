//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner hr = new Scanner(System.in);
        int R1, R2, Casos;
        
        Casos = hr.nextInt();
        
        for(int i = 0; i < Casos; i++){
            R1 = hr.nextInt();
            R2 = hr.nextInt();
            
            System.out.println(R1+R2);
        }
 
    }
 
}
