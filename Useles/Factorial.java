import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(fac(n));
    }

    public static int fac(int n) {
        if(n == 1) return 1;
        int fac_of_n_minus_one = fac(n-1);
        int res = n * fac_of_n_minus_one;
        return res;
    }
}