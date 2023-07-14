#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<climits>

using namespace std;

int main()
{
    vector<vector<int>> points = {{1,3},{2,0},{5,10},{6,-10}};
    int k =1;
    int n = points.size();
    int output = INT_MIN;
    priority_queue<pair<int,int>> q;

    for (int i = 0; i < n; i++)
    {
        while (!q.empty() && points[i][0]-q.top().second >k)
        {
            q.pop();
            
        }
        if(!q.empty())
        {
            output = max(output, (q.top().first + points[i][0] + points[i][1]));
        }
         q.push({points[i][1] - points[i][0], points[i][0]});
    }

    cout<<"Your answer is "<<output;
    
    

}