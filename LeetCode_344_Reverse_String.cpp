class Solution {
    
    void solve(vector<char> &s, int f)
    {
        if((f+1)>s.size()/2)
        {
            return ; 
        }
        
        int l = s.size()-1-f; 
        
        char temp = s[f];
        s[f]=s[l];
        s[l]=temp; 
        
        f++;
        
        solve(s,f);
        
        
    }
    
public:
    void reverseString(vector<char>& s) {
        
        int f=0 ; 
        solve(s,f);
        
        
    }
};
