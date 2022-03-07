#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
    
public:
    void solve(vector<string>&ans, int n , int z ,int o, string op )
    {
        if(op.size()==n)
        {
            ans.push_back(op);
            return ; 
        }
        
        if(o>z)
        {
            string op1 ,op2; 
            op1 = op ; op2 = op ; 
            
            int z1,z2,o1,o2; 
            z1=z; z2=z; o1=o; o2=o; 
            
            op1+='1';
            o1++;
            solve(ans,n,z1,o1,op1);
            
            op2+='0';
            z2++;
            solve(ans,n,z2,o2,op2);
            
            
        
        }
        else 
        {
            op+='1'; 
            o++;
            solve(ans,n,z,o,op);
        
        }
        
        return ;
        
    }


public:	
	vector<string> NBitBinary(int N)
	{
	    // Your code goes here
	    vector<string>ans;
	    string op ; 
	    int z=0, o =0 ; 
	    solve(ans,N,z,o,op);
	    return ans ;
	    
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}  // } Driver Code Ends
