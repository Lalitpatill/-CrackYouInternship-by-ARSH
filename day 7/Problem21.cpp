#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

int main()
{
    vector<int>nums = {2,2,1,1,1,2,2};


   unordered_map<int,int> valueMap;
         for(int i : nums)
         {  
             valueMap[i]++;
             
         }
         int max = nums[0];
         for(auto i:valueMap)
         {
             if(i.second>valueMap[max])
             {
                 max = i.first;
             }
         }
         
         cout<<"MAX VALUE :"<<max;

    
}