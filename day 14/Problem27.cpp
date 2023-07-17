#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main()
{
    vector<int>heights = {2,1,5,6,2,3};
    stack<int> st;
    int ans = 0; 
    heights.push_back(0);

    for(int i = 0; i < heights.size(); i++)
    {
        while(!st.empty() && heights[st.top()]>heights[i])
        {
            int top = heights[st.top()];
            st.pop();
            int ran = st.empty()?-1:st.top();
            ans = max(ans, top*(i-ran-1));
        }
        st.push(i);
    }
    

    cout<<"Answer is :"<<ans;
    
}