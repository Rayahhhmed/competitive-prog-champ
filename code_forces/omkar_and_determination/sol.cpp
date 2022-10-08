#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define X 1
#define E 0
int main () { 
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int m = 1; 
    int n = 1;

    cin >> m >> n;
    vector<vector<int>> grid;
    for (int i = 0; i < n; i++) { 
        vector<int> row;
        grid.push_back(row);
        for (int j = 0; j < m; j++) { 
            char cell;
            cin >> cell;
            row.push_back((cell == 'X') ? X : E);
        }
    }

    for (int i = 0; i < n; i++) { 
         
        for (int j = 0; j < m; j++) { 
            if (i == 0) {
                if (grid[0][j] != X) grid[0][j]
            }   
        }
    }



    return 0;   

}