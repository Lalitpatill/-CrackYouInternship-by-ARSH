// question :287. Find the Duplicate Number


#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

    int nums[] = {4,1,2,3,4};
    int ans = 0;

    // Firstly I sorted element so I can check the adjacent element 
    sort(begin(nums),end(nums));

    // For loop created for checking the adjacent element.
    for (int i = 0; i < 5; i++)
    {
        if (nums[i] == nums[i+1])
        {
            ans = nums[i];
            break;
        }
    }

    cout<<"The Duplicate value is :"<<ans;
    
    
    
       
       
}