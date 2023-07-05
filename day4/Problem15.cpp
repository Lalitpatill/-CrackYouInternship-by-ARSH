// Question :1423. Maximum Points You Can Obtain from Cards

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int>cardPoints = {1,2,3,4,5,6,1};
    int k = 3;
    int sum=0, maxsum=0;


    for(int i = 0; i < k; i++)
    {
        sum = sum + cardPoints[i];
    }
    maxsum += sum;

    for (int  i = k-1; i>=0; i--)
    {
        sum -= cardPoints[i];
        sum += cardPoints[cardPoints.size()-k+i];
        maxsum = max(sum, maxsum);
    }

    cout<<"Your result is :"<<maxsum;
    
}