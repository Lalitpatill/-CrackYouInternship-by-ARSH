#include<iostream>
#include<vector>
using namespace std;


int liveCount(vector<vector<int>>& board, int i , int j)
{
    int r = board.size();
    int c = board[0].size();
    int count = 0;

        if(j-1>=0)
        {
            if(board[i][j-1] == 1 || board[i][j-1] == 3)
            {
                count++;
            }
        }   
        if(j+1<c)
        {
            if(board[i][j+1] == 1 || board[i][j+1] == 3)
            {
                count++;
            }
        }    
        if(i-1>=0)
        {
            if(board[i-1][j] == 1 || board[i-1][j] ==3)
            {
                count++;
            }
        } 
        if(i+1<r)
        {
            if(board[i+1][j] ==1 || board[i+1][j] == 3)
            {
                count++;
            }
        }

        // diagonal
        if((i-1>=0)&&(j-1>=0))
        {
            if(board[i-1][j-1] ==1 || board[i-1][j-1] == 3)
            {
                count++;
            }
        }
        if((i-1>=0)&&(j+1<c))
        {
            if(board[i-1][j+1] ==1 || board[i-1][j+1] == 3)
            {
                count++;
            }
        }
        if((i+1<r)&&(j-1>=0))
        {
            if(board[i+1][j-1] ==1 || board[i+1][j-1] == 3)
            {
                count++;
            }
        }
        if((i+1<r)&&(j+1<c))
        {
            if(board[i+1][j+1] ==1 || board[i+1][j+1] == 3)
            {
                count++;
            }
        }
return count;
}
int main()
{
    vector<vector<int>>  board = {{0,1,0},{0,0,1},{1,1,1},{0,0,0}};
    int row = board.size();
    int col = board[0].size();
    int count  = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            count = liveCount(board, i, j);
        
        if(board[i][j] == 0)
        {
            if (count == 3)
            {
                board[i][j] = 2;
            }
        }
        else if(board[i][j] = 1)
        {
            if(count < 2 || count > 3)
            {
                board[i][j] = 3;
            }
        }
            
        
        }
        
    }

     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(board[i][j] == 2)
            {
                board[i][j] = 1;
            }
            else if(board[i][j] == 3)
            {
                board[i][j] = 0;
            }
            
        }    
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<board[i][j]<<" ";
        }    
        cout<<endl;
    }
    
}