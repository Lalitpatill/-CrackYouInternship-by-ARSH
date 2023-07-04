// question :974. Subarray Sums Divisible by K

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main()
{

    vector<int>nums = {4,5,0,-2,-3,1};
    int target = 5;
    int n = nums.size();
    int count = 0;
    int sum = 0, i =0;

    unordered_map<int,int>mp;  
    mp[0]=1; 

    if (n==0)
    {
        cout<<"No possibility because array is empty..."<<endl;
    }
    

    while (i<n)
    {
        int rem=0;
        sum += nums[i++];
        cout<<"Sum :"<<sum<<endl;
        rem = sum%target;
        cout<<"Rem : "<<rem<<endl;

        if (rem<0)
        {
            rem += target;
            cout<<"Inner rem :"<<rem<<endl;
        }
     
        if (mp.find(rem) != mp.end())
        {
           

            count += mp[rem];
           

        }
        cout<<"Outter Count"<<count<<endl;
         mp[rem]++;


        

    }
    

    cout<<"The answer is :"<<count;
}