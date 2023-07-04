// question : 11. Container With Most Water



#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>height = {1,8,6,2,5,4,8,3,7};
     int maxArea = 0;
        int s = 0, e = height.size()-1;

        while(s < e)
        {
            if(height[s] <= height[e])
            {
                maxArea = max(maxArea, (e-s) * height[s]);
                s++;
            }
            else
            {
                maxArea = max(maxArea,(e-s) * height[e]);
                e--;
            }
        } 
    
    cout<<"The output is :"<<maxArea;

    



    
}