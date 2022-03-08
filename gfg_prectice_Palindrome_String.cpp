#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
    
    int solve(string s , int f )
    {
        
        if((f+1)>s.size()/2)
        {  // cout<<"we are here "<<endl;
            
            return 1; 
        }
        int l = s.size()-1-f; 
        
        //cout<<"fast and last is "<<f<<" "<<l<<endl;
        
        //cout<<s[f]<<" "<<s[l]<<endl;
        
        if(s[f]!=s[l])
        {   
            return 0;
        }
        f++; 
        int ans =  solve(s,f);
        return ans ; 
    }
    
    
    
    
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int f = 0 ; 
	    
	    int ans  = solve(S,f);
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
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}  // } Driver Code Ends
