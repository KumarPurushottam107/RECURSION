class Solution {
    
public:
    void solve(vector<string>&ans,int t ,string op , int s , int o, int c )
    {
        //cout<<op<<" s = "<<s<<" o = "<<o<<" c = "<<c<<endl;
        if(op.length()==t) 
        {
           // op+=')';
            ans.push_back(op);
            return ; 
        }
        
        if(s==0)
        {
            op+='(';
            o++;
            s++;
            solve(ans,t,op,s,o,c);
        }
        else if(s>0)
        {
            string op1,op2; 
            op1=op; op2=op;
            int s1, s2 ;
            s1=s; s2=s; 
            int o1 = o, o2 = o  ; 
            int c1 = c , c2 = c ; 
            if(o<t/2)
            {   
                op1+='(';
                s1++;
                o1++;
                solve(ans,t,op1,s1,o1,c1);
            }
            if(s>0)
            {
                op2+=')';
                s2--;
                c2++;
                solve(ans,t,op2,s2,o2,c2);
            }
        }
        return ; 
        
    }
    
public:
    vector<string> generateParenthesis(int n) {
        
        vector<string>ans;
        string op ;
        int t = 2*n , s = 0 , o=0, c=0 ; 
        solve(ans,t,op,s,o,c); 
        return ans ;
        
    }
};
