
class Solution{
    void f(int i, int j, vector<vector<char>> &mat, vector<vector<int>> &visited, int n, int m) {
        if (i < 0 || j < 0 || i >= n || j >= m || mat[i][j] == 'X' || visited[i][j] == 1) return;
        visited[i][j] = 1;
        f(i + 1, j, mat, visited, n, m);
        f(i - 1, j, mat, visited, n, m);
        f(i, j + 1, mat, visited, n, m);
        f(i, j - 1, mat, visited, n, m);
    }
public:
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here
        vector<vector<int>> visited(n, vector<int>(m, 0));
    
       
        for (int i = 0; i < n; i++) {
            if (mat[i][0] == 'O' && !visited[i][0]) f(i, 0, mat, visited, n, m);
            if (mat[i][m-1] == 'O' && !visited[i][m-1]) f(i, m-1, mat, visited, n, m);
        }
        for (int j = 0; j < m; j++) {
            if (mat[0][j] == 'O' && !visited[0][j]) f(0, j, mat, visited, n, m);
            if (mat[n-1][j] == 'O' && !visited[n-1][j]) f(n-1, j, mat, visited, n, m);
        }
    
       
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 'O' && visited[i][j] == 0) {
                    mat[i][j] = 'X';
                }
            }
        }
    
        return mat;
    }
};
