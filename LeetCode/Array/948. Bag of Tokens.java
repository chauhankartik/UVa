/*
    @kartik chauhan
    Leetcode : https://leetcode.com/problems/bag-of-tokens/
*/
import java.util.*;

class Solution {
    public int bagOfTokensScore(int[] tokens, int power) {
        
        int res = 0;
        Arrays.sort(tokens);
        int i = 0, j = tokens.length - 1;
        int p = 0;

        while(i <= j && (power >= tokens[i] || p > 0)) {
            while(i <=j && power >= tokens[i]) {
                power -= tokens[i++];
                p += 1;
            }

            res = Math.max(res, p);

            if(i <= j && p > 0) {
                power += tokens[j--];
                p -= 1;
            }
        }
        return res;
    }
}