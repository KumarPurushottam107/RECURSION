class Solution {
public:
    int kthGrammar(int n, int k) {
        
        if(n==1)
            return 0;
        
        int mid = ( int )(pow(2,n-1)/2.0);
        
        int ans ;
        
        if(k<=mid)
            ans = kthGrammar(n-1,k);
        else 
            ans = !(kthGrammar(n-1,k-mid));
        
        return ans ;
        
        
        
        
    }
};
