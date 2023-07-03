// question : 26. Remove Duplicates from Sorted Array 

#include<vector>
#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<int>nums = {0,0,1,1,1,2,2,3,3,4};

    int k=0;
     for(int i = 1; i<nums.size(); i++)
        {
            if(nums[i] == nums[i-1])
            {
                k++;
            }
            else
            {
                nums[i-k] = nums[i];
            }

        }
    
    
    
    
    for (int i = 0; i < nums.size()-k; i++)
    {
        cout<<nums[i]<<" ";
    }
    

    
    
}

