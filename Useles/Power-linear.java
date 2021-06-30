import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        System.out.println(power(x, n));
    }

    public static int power(int x, int n){
        if(n == 0) return 1;
        int powe_n_1 = power(x, n-1);
        int res = x * pow_n_1;
        return res;
    }

}