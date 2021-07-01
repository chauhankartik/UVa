class Solution {
    Map<Integer, Integer> map = new HashMap<>();
    public int numTrees(int n) {
        // G(n) -> nuber of unique bst for no of nodes = n
        // F(i, n)-> root i and nodes = n
        // f(i, n) = g[i-1]*g[n-i]
        if(n == 0 || n == 1) {
            return 1;
        }
        int res = 0;
        for(int i = 1; i <= n; i++) {
            if(!map.containsKey(i-1))
                map.put(i-1, numTrees(i-1));
            if(!map.containsKey(n-i))
                map.put(n-i, numTrees(n-i));
            res += map.get(i-1) * map.get(n-i);
        }
        return res;
    }
}