#include<iostream>
#define no_of_charcter 255

using namespace std;

int main()
{
    string s = "lalit";
    int ary[255] = {0};
    
    for (int i = 0; i < s.size(); i++)
    {
        int n = s[i];

        for(int j = 1; j<=n; j++)
        {
            if(j==n)
            {
                ary[j]++;
            }
        }
    }

    for (int i = 1; i <no_of_charcter; i++)
    {
        if (ary[i] >1)
        {
            printf("%c, count = %d \n",i,ary[i]);
        }
        
    }
    
    
}