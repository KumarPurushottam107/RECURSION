class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        // ok so we got the array now we take out one element and try to 
        
        vector<int> nums1,nums2; 
        int size = nums.size()/2;
        for(int g=0;g<size;g++)
        {
            nums1.push_back(nums[g]);
        }
        for(int g=size;g<nums.size();g++)
        {
            nums2.push_back(nums[g]);
        }
        
        nums1 = sortArray1(nums1);
        
       /* cout<<"nums1:- ";
        for(int g=0;g<nums1.size();g++)
            cout<<nums1[g]<<" ";
        cout<<endl;*/
        
        
        nums2 = sortArray1(nums2);
        
        
     /*   cout<<"nums2:- ";
        for(int g=0;g<nums2.size();g++)
            cout<<nums2[g]<<" ";
        cout<<endl;
        
        */
        vector<int>ans; 
        
        int size1=nums1.size(), size2 = nums2.size();
        
        int z1=0,z2=0;
        
        
        while((z1<size1)&&(z2<size2))
        {
            if(nums1[z1]<=nums2[z2])
                {ans.push_back(nums1[z1]); z1++;}
            else 
                {ans.push_back(nums2[z2]); z2++;}
            
            //for(int g=0;g<ans.size();g++)
           //     cout<<ans[g]<<" ";
          //  cout<<endl;
        }
        
    
        
        while(z1<size1)
        {
            ans.push_back(nums1[z1]);
            z1++;
        }
        while(z2<size2)
        {
            ans.push_back(nums2[z2]);
            z2++;
        }
        
        return ans ; 
}
    
  
        void insert(vector<int>& nums, int temp)
        {
            //int size = nums.size();
            if(( nums.size() == 0 )||( nums[0]>=temp ))
            {    
                 nums.insert(nums.begin(),temp);
                 return ;
            }
                 
            int val = *(nums.begin());
            
            nums.erase(nums.begin());
            
            insert(nums,temp);
            
            nums.insert(nums.begin(),val);
            
            
           return ;
            
            
        }
    
     vector<int> sortArray1(vector<int>& nums) {
        
        // ok so we got the array now we take out one element and try to 
        // place it in best position 
        cout<<"size of array "<<nums.size()<<endl;
        if(nums.size()==0)
            return nums ;
        
        int temp = nums[0]; 
        nums.erase(nums.begin());
        
        nums  = sortArray1(nums);
      /*  cout<<"temp is "<<temp<<endl;
        cout<<"elements in nums are "<<endl;
        for(auto x : nums)
            cout<<x<<" ";
            */
        //cout<<endl;
        insert(nums,temp);
        
        return nums; 
        
}
    
    
    
    
    
    
    
    
    
};