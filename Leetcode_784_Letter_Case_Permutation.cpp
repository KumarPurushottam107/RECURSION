class Solution {
    
    
    void solve( vector<string>&ans, string s, string op, int c  )
    {
        
        if(c==s.size())
        {
            ans.push_back(op); 
            return ; 
        }
        
        char curr = s[c]; 
        c++;
        char curr1 ; 
        if((curr>=97)&&(curr<=122))
        {
            curr1 = (curr-97)+65;
        }
        else if((curr>=65)&&(curr<=90))
        {
            curr1=97+(curr-65); 
        }
     
        
        if(curr>=48&&curr<=57)
        {
            op+=curr; 
            solve(ans,s,op,c);
        }
        else 
        {
            string op1, op2; 
        
            op1=op; 
            op2=op; 
        
            op1+=curr; 
            solve(ans,s,op1,c);
            op2+=curr1; 
            solve(ans,s,op2,c); 
        }
        
        return ;
        
        
        
        
        
    }
    
public:
    vector<string> letterCasePermutation(string s) {
        
        vector<string>ans; 
        string op ; int c=0; 
        solve(ans,s,op,c); 
        
        return ans ; 
        
        
    }
};
