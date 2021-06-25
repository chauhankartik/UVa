class Solution {
    public int target;
    public List<Integer> temp = new ArrayList<>();
    public List<List<Integer>> res = new ArrayList<>();

    public List<List<Integer>> allPathsSourceTarget(int[][] graph) {
        target = graph.length - 1;
        dfs(graph, 0);
        return res;    
    }

    public void dfs(int[][] graph, int parent) {
        temp.add(parent);
        if(parent == target) res.add(new ArrayList<Integer>(temp));
        else for(int i : graph[parent]) {
            dfs(graph, i);
        }
        temp.remove(temp.size() - 1);
    }
}