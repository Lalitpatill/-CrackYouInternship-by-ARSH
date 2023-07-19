#include<iostream>
#include<string>
#include<stack>

using namespace std;

bool isValid(string s)
{
     
    stack<char>st;
    int i = 0;

   while(i< s.size())
   {
    if (s[i] == '{' || s[i] == '[' || s[i] == '(')
    {
       
        st.push(s[i]);
    }
    else if((s[i] == ')' || !st.empty() || st.top()=='(') ||
            (s[i] == '}' || !st.empty() || st.top()=='{') ||
            (s[i] == ']' || !st.empty() || st.top()=='['))
            {
                st.pop();
            }
    else
    {
       return false;
    }
    i++;
   }
   if (st.empty())
   {
    
    return true;
   }
    

return false;
   

}

int main()
{
   
    string s = "()[]{}";
    
    bool ans = isValid(s);
    
    if(ans)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }

}