// Question : Chocolate Distribution Problem

#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{

    int A[] = { 3, 4, 1, 9, 56, 7, 9, 12};
    int M = 5;
    int N = sizeof(A)/sizeof(A[0]);
    int minvalue = INT8_MAX;
    sort(begin(A), end(A));

    for (int i = 0; i+M-1 < N ; i++)
    {
        int diff = A[i+M-1]-A[i];
        if (diff < minvalue)
        {
            minvalue = diff;
        }
        
            
    }

    cout<<"Minimum differ :"<<minvalue;
    
    
    
}