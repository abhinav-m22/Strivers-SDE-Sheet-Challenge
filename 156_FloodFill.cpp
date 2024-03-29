#include<bits/stdc++.h>
using namespace std;

int delRow[] = {-1, 0, 1, 0};
int delCol[] = {0, 1, 0, -1};

void dfs(int row, int col, vector<vector<int>>& ans, vector<vector<int>>& image, int newColor, int initialColor){
    ans[row][col] = newColor;
    int n = image.size();
    int m = image[0].size();

    for(int i = 0; i < 4; i++){
        int nrow = row + delRow[i];
        int ncol = col + delCol[i];

        if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && image[nrow][ncol] == initialColor && ans[nrow][ncol] != newColor){
            dfs(nrow, ncol, ans, image, newColor, initialColor);
        }
    }
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int newColor)
{
    int initialColor = image[x][y];
    vector<vector<int>> ans = image;
    dfs(x, y, ans, image, newColor, initialColor);
    return ans;
}