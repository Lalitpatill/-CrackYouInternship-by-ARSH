// 1. Two Sum


#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>nums = {2,7,11,15};
    int n = nums.size();
    int target  = 9;
    for(int i = 0; i< n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (nums[i]+nums[j] == target )
            {
                cout<<"{"<<i<<", "<<j<<"}";    

            }
            
        }
        
    }
}