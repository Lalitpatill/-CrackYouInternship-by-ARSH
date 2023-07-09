#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int>num1 = {1,2,3,0,0,0};
    vector<int>num2 = {2,5,6};
    int m = 3; 
    int n = 3;
    int count =m;
   
     for(int i = 0; i<n; i++)
        {
            num1[count]=num2[i];
            count++;
        }
        sort(num1.begin(), num1.end());

    
    for (int i = 0; i <num1.size(); i++)
        {
            cout<<num1[i]<<" ";
        }    
    
    
    


    
}