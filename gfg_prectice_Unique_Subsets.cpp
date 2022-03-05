#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    
    void solve(vector<int>arr,int n , set<vector<int>>&set, vector<int> output,int i )
    {
        if(i==arr.size())
        {
            /*for(auto x : output)
            {
                cout<<x<<" ";
            }*/
            
            //cout<<endl;
            
            sort(output.begin(),output.end());
            
            set.insert(output);
            return ; 
        }
        
        int curr = arr[i]; 
        
        i++;
        
        solve(arr, n , set, output,i);
        
        output.push_back(curr);
        
        solve(arr, n , set, output,i);
        
        return ;
        
        
    }
    public:
    //Function to find all possible unique subsets.
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        // code here 
        set<vector<int>>set;
        vector<int>output; 
        solve(arr,n,set,output,0);
        vector<vector<int>> ans ; 
       for(auto x:set)
        {   
            ans.push_back(x);
            //cout<<endl;
        }
        
        
        
        return ans ; 
        
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   


  // } Driver Code Ends
