// Question : 283. Move Zeroes


#include<iostream>
using namespace std;



int main()
{
    int n;
    cout<<"ENter the size of array :";
    cin>>n;

    int nums[n];

    cout<<"Enter the eleemnt of array :";
    for (int  i = 0; i < n; i++)
    {
        cin>>nums[i];
    }
    



    for (int i = 0,j = 0; i < n;)
        {
           if (nums[i] == 0)
            {
             i++;  
            }
            else
            {
               swap(nums[i],nums[j]);
               i++;
               j++;
            }
        }
        
    for (int i = 0; i < 5; i++)
        {
            cout<<nums[i]<<" ";
        }
        
    
}