// Question : 442. Find All Duplicates in an Array

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
    vector<int>nums = {1,1,2};
    vector<int> newarr;
    int n = nums.size();
    sort(nums.begin(), nums.end());
  
    if (n <= 1)
        {
            cout<<"{}";
        }
    else{
       
        for (int i = 0; i < nums.size()-1; i++)
    {
       
        
       if (nums[i+1] == nums[i])
       {
          newarr.push_back(nums[i]); 
       }      
    }
    
    for (int i = 0; i < newarr.size(); i++)
    {
       
        cout<<newarr[i]<<endl;
    }
    
    }
    

}