#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
/*You are required to complete this method */

class Solution
{
public:
int solve(vector<int>&v, int k , int curr)
{
   // for(auto x:v)
     //   cout<<x<<" "; 
    //cout<<endl;

    if(v.size()==1)
    {
        return v[0];
    }
    
    int len = v.size(); 
    curr = (curr+(k-1))%len; 
    
    int last = v.size(); 
    
    v.erase(v.begin()+curr);
    
    if(curr==last)
    {
        curr=0;
    }
    
    
    solve(v,k,curr);
    
    
}

    
    
    
    
    public:
    int josephus(int n, int k)
    {
       //Your code here
      
      vector<int>v(n); 
      for(int g=0;g<n;g++)
      {
          v[g]=g+1;
          
      }
      int curr = 0; 
      int ans = solve(v,k,curr);
      return ans ; 
    }
};



// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}  // } Driver Code Ends
