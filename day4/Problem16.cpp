// question : 

#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

int main()
{
    vector<int>nums = {1,2,3,5,2,1,3,6};
    int k = 3;
    int sum = 0;
    int count = 0; 

    unordered_map<int, int> mp;
    mp[0]=1;

    for(auto it :nums)
    {
        sum +=it;
        int find = sum -k;
        if(mp.find(find) != mp.end())
        {
            count += mp[find];
        }
        mp[sum]++;
        
    }

    cout<<"The answer is :"<<count;
}
