#include<iostream>
#include<vector>

using namespace std;
 
int main()
{
    vector<int> nums = {2,3,1,1,4};
    int reachable = 0;
    bool ans = true;

    for(int i = 0; i< nums.size(); i++)
    {
        if (i>reachable)
        {
            ans = false;
        }
        reachable = max(reachable, i+nums[i]);
        
    }

    if (ans)
    {
        cout<<"True";

    }
    else
    {
        cout<<"False";
    }
    
   
   

    
    
}