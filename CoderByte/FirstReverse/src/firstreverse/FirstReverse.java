package firstreverse;
import java.util.*; 
import java.io.*;

public class FirstReverse {  
   static Scanner  s = new Scanner(System.in);
   static String FirstReverse(String str) { 
  StringBuilder sp=new StringBuilder();
  sp.append(str);
  return sp.reverse().toString();  
  } 
  
  public static void main (String[] args) {  
    // keep this function call here     
    System.out.print(FirstReverse(s.nextLine())); 
  }   
  
}
