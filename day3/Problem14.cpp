// Question : 15. 3Sum

#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

int main()
{
    vector<int>nums = {-1,0,1,2,-1,-4};
       vector<vector<int>>output;
        int target = 0;
        sort(nums.begin(), nums.end());
        set<vector<int>>s;

        for(int i =0; i< nums.size(); i++)
        {
            int j = i+1;
            int k = nums.size()-1;

            while(j<k)
            {
                int sum = nums[i]+nums[j]+nums[k];
                if(sum == target)
                {
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(sum < target)
                {j++;}
                else
                {
                    k--;
                }
            }
        }
        for(auto triplets : s)
            output.push_back(triplets);
        
    
        for (int i = 0; i < output.size(); i++)
        {
            for (int j = 0; j < output[i].size(); j++)
            {
                cout << output[i][j] << " ";
            }    
            cout << endl;
        }

}


