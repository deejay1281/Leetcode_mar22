double champagneTower(int k, int m, int n) {
        m++, n++;
        vector<vector<double>>dp(m + 1, vector<double>(m + 1));
        dp[0][0] = k;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j <= i; j++) {
                if(dp[i][j] > 1.0) { //water leaks
                    dp[i+1][j] += (dp[i][j] - 1.0) / 2.0; // to bottom left
                    dp[i+1][j+1] += (dp[i][j] - 1.0) / 2.0;  // to bottom right
                    dp[i][j] = 1.0;  //after leaking the water at i, j will be at full capacity
                }
            }
        }
        return dp[m-1][n-1];
    }
