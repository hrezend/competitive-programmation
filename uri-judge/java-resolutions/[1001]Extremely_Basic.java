//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

import java.io.IOException;
import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int A;
        int B;
        
        A = sc.nextInt();
        sc.nextLine();
        B = sc.nextInt();
        
        int X = A+B;
        
        System.out.println("X = " + X);
    }
 
}
