#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


 void merge(vector<int>& a, int beg, int mid, int end)    
{    
    int i, j, k;  
    int n1 = mid - beg + 1;    
    int n2 = end - mid;    
      
    int LeftArray[n1], RightArray[n2]; //temporary arrays  
      
    /* copy data to temp arrays */  
    for (int i = 0; i < n1; i++)    
    LeftArray[i] = a[beg + i];    
    for (int j = 0; j < n2; j++)    
    RightArray[j] = a[mid + 1 + j];    
      
    i = 0; /* initial index of first sub-array */  
    j = 0; /* initial index of second sub-array */   
    k = beg;  /* initial index of merged sub-array */  
      
    while (i < n1 && j < n2)    
    {    
        if(LeftArray[i] <= RightArray[j])    
        {    
            a[k] = LeftArray[i];    
            i++;    
        }    
        else    
        {    
            a[k] = RightArray[j];    
            j++;    
        }    
        k++;    
    }    
    while (i<n1)    
    {    
        a[k] = LeftArray[i];    
        i++;    
        k++;    
    }    
      
    while (j<n2)    
    {    
        a[k] = RightArray[j];    
        j++;    
        k++;    
    }    
}  

int countPairs(vector<int>& a, int low, int mid, int high)
{
    int right = mid +1;
    long long count= 0;
    for(int i = low; i<=mid; i++)
    {
       
        while(right <= high && a[i]>  2*(long long)a[right]) 
        {
            right++;
        }
        count += (right-(mid+1));
    }
    return count;

}
  
int mergeSort(vector<int>& a, int beg, int end)  
{  
      int count =0;
    
    if (beg < end)   
    {  
       long long  int mid = (beg + end) / 2;  
      
        count += mergeSort(a, beg, mid);  
        count += mergeSort(a, mid + 1, end);  
        count += countPairs(a,beg,mid,end );
        merge(a, beg, mid, end);  
    } 
    return count; 
}  

int reversePairs(vector<int>& nums) {
    return mergeSort(nums,0,nums.size()-1);

    }


int main()
{
    vector<int>nums = {1,3,2,3,1};
    int count;
    count = reversePairs(nums);

    cout<<"Answer is :"<<count;
}