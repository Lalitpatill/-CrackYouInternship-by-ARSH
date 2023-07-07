#include<iostream>
#include<vector>

using namespace std;


bool search(int index, int i, int j, vector<vector<char>>& board, string word)
{
    if(index == word.size())
    {
        return true;
    }
    if (i<0 or j<0 or i>=board.size() or j>=board[0].size())
    {
        return false;
    }
    
    bool ans=false;
    if(word[index] == board[i][j])
    {
        board[i][j] ='*';
        ans =(  (search(index+1, i+1, j, board, word)) or (search(index+1, i, j+1, board, word)) or search(index+1, i-1, j, board, word) or search(index+1, i, j-1, board, word));

        board[i][j] = word[index];
    }
    return ans;
}

int main()
{
    vector<vector<char>> board = {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    string word = "ABCCED";
    int m = board.size();
    int n = board[0].size();
    bool ans = false;
    int index = 0;

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if (word[index] == board[i][j])
            {
                if(search(index, i, j, board, word))
                    {
                        ans = true;
                    }
            }
            
           
        }
    }
   if (ans)
   {
    cout<<"your word is in the list....";
   }
   else
   {
    cout<<"Sorry not found.......";
   }
   

}