#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    
public:
    void solve(vector<string>&ans,string s,string op, int curr )
    {
        int l = s.size()-1;
        if(curr==l)
        {
            ans.push_back(op);
            return ;
        }
        
        curr++;
        
        string op1 = op ; 
        string op2 = op ; 
        
        op1+=s[curr];
        solve(ans,s,op1,curr);
        
        op2+=' ';
        op2+=s[curr];
        solve(ans,s,op2,curr);
        
        return ;
        
    }
    
    
public:

    vector<string> permutation(string S){
        // Code Here
        vector<string> ans ;
        string op; 
        int curr = 0 ;
        op+=S[0];
        solve(ans,S,op,curr);
        
        sort(ans.begin(),ans.end());
        
        return ans; 
    }
};

// { Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}
  // } Driver Code Ends
