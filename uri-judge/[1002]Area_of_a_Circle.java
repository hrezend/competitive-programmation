//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

import java.io.IOException;
import java.util.Scanner;
import java.text.DecimalFormat;

public class Main {
 
    public static void main(String[] args) throws IOException {


        Scanner sc = new Scanner(System.in);
        Double Raio;
        Double pi = 3.14159;
        
        Raio = sc.nextDouble();
        
        Double Resultado = (Raio*Raio)*pi;
        
        String valorFormatado = new DecimalFormat("##############0.0000").format(Resultado);

        System.out.println("A=" +  valorFormatado);
    }
 
}
