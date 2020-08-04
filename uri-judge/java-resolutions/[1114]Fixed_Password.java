//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

import java.util.Scanner;
 
public class Main {
  public static void main(String[] args){
  Scanner sc = new Scanner(System.in);
  int Senha; 
  Senha = sc.nextInt(); 
    while(Senha != 2002){
        System.out.println("Senha Invalida");
        Senha = sc.nextInt();
    }
        System.out.println("Acesso Permitido");
  }
}
