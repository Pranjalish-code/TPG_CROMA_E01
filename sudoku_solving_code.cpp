#include <bits/stdc++.h>
using namespace std;

bool iscorrect(int s[9][9],int i,int j,int n)
{
    for (int k=0;k<9; k++)
    {
        if(s[i][k]==n||s[k][j]==n)
        return false;
    }
    int r=(i/3)*3,
    c=(j/3)*3;
    for (int a=r;a <r+3; a++) {
        for (int b=c; b<c+3; b++) {
            if (s[a][b]==n)
            return false;
        }
    }
    return true;
}

bool helper(int s[9][9], int row, int col)
{
    if (row==9)
    {
        for(int i=0; i<9; i++)
        {
            for (int j=0; j<9; j++)
            cout<<s[i][j]<< " ";
            cout << "\n";
        }
        return true;
    }
    if(col==9)
    return helper(s,row+1,0);
    if (s[row][col]!=0)
    return helper(s,row,col+1);
    for(int num=1;num<=9;num++)
    {
        if (iscorrect(s,row,col,num))
        {
            s[row][col]=num;
            helper(s,row,col+1);
            s[row][col]=0;
        }
    }
    return false;
}

int main()
{
    int s[9][9]={{3, 0, 6, 5, 0, 8, 4, 0, 0},
                 {5, 2, 0, 0, 0, 0, 0, 0, 0},
                 {0, 8, 7, 0, 0, 0, 0, 3, 1},
                 {0, 0, 3, 0, 1, 0, 0, 8, 0},
                 {9, 0, 0, 8, 6, 3, 0, 0, 5},
                 {0, 5, 0, 0, 9, 0, 6, 0, 0},
                 {1, 3, 0, 0, 0, 0, 2, 5, 0},
                 {0, 0, 0, 0, 0, 0, 0, 7, 4},
                 {0, 0, 5, 2, 0, 6, 3, 0, 0}
    };
    if (!helper(s, 0, 0)) cout << "No solution exists!" << endl;
    return 0;
}
