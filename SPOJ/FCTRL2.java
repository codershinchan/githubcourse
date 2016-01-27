import java.util.*;
import java.io.*;
import java.math.*;
class Main {
    static Scanner s=new Scanner(System.in); 
    static BigInteger fact(int N)
    {
        BigInteger x=BigInteger.ONE;
        for(int i=1;i<=N;i++)
        {
            x=x.multiply(BigInteger.valueOf(i));
        }
        return x;
    }
    public static void main(String[] args) {
        int t;
        t=s.nextInt();
        while(t-->0)
        {
            int n;
            n=s.nextInt();
            System.out.println(fact(n));
        }
    }
    
} 