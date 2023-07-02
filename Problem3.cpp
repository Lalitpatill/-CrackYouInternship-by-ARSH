// Question : Best Time to Buy and Sell Stock


#include<iostream>
using namespace std;

int main()
{
    int prices[] = {3,1,4,8,7,2,5}; 
   
    int profit =0;
    int min = prices[0];
    for (int i = 0; i < 7; i++)
    {

        if (prices[i] < min)
        {
            min = prices[i];
           


        }
         cout<<"MINIMUM"<<min<<endl;
        int value =  prices[i]-min;
        if (profit < value)
        {
            profit = value;
        }
        cout<<"profit"<<profit<<endl;
        
    }
    cout<<"profit is :"<<profit;
        
}