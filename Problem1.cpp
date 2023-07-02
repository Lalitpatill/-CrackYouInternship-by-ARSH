// Question : 73. Set Matrix Zeroes


#include<iostream>
using namespace std;


int main()
{

    // Asking for row and col size
    int row, col;
    cout<<"Enter the row :";
    cin>>row;
    cout<<"Enter the coloumn:";
    cin>>col;
    
    int matrix[row][col];
    int zeroindex[row][col];
    
    // Getting array element
    for (int i = 0; i < row; i++)
    {
        cout<<"Enter the element for row "<<i<<endl;
        for (int j = 0; j < col; j++)
        {
            cin>>matrix[i][j];
            zeroindex[i][j]  = matrix[i][j];
        }

        
    }
    

    int ind2 =0;


    // Making whole row  and column zero which contain zero
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j]==0 && zeroindex[i][j] == 0 )
            {
                 ind2 =j;
                for (int  k = 0; k < col ; k++)
                {
                    matrix[i][k]=0;

                }
                 for (int k = 0; k < row; k++)
                    {
                        matrix[k][j]=0;
                        
                    }
                 
            }
           
         
        }
        
    }

    // Printing Final Array
    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
            
            cout<<matrix[i][j]<<" ";
            
       }
       cout<<endl;
       
    }
    

}