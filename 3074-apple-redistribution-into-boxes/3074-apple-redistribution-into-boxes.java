class Solution {
    public int minimumBoxes(int[] apple, int[] capacity) {
        Arrays.sort(capacity);
        int totalapples=0;
        int m=capacity.length;
        int ans=0;
        for(int a : apple) totalapples+=a;
        for(int i=m-1;i>=0;i--){
            if(totalapples <= 0) return ans;
            totalapples-=capacity[i];
            ans++;
        }
        return ans;
    }
}