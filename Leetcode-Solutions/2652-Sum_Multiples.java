class Solution {
    public int sumOfMultiples(int n) {
        int ans = 0;
        while(n>0){
            if(n%3==0 || n%5==0 ||n%7==0){
                ans = ans+n;
            }
            n--;
        }
        return ans;
        
    }
}
