//# algorithms
// Mobile Numeric key problem
#include <stdio.h>

int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    int arr[10][5] = { {0,8,-1,-1,-1},
                       {1,2,4,-1,-1} ,
                        {2,1,3,5,-1},
                        {3,2,6,-1,-1},
                        {4,1,5,7,-1},
                        {5,2,4,6,8},
                        {6,3,5,9,-1},
                        {7,4,8,-1,-1},
                        {8,5,0,7,9},
                        {9,6,8,-1,-1}};
    int dp[10][n+1];
    for(i=0;i<10;i++)
    {
        dp[i][0] = 0;
    }
    for(i=0;i<10;i++)
    {
        dp[i][1] = 1;
    }
    dp[0][2] = 2;
    dp[1][2] = 3;
    dp[2][2] = 4;
    dp[3][2] = 3;
    dp[4][2] = 4;
    dp[5][2] = 5;
    dp[6][2] = 4;
    dp[7][2] = 3;
    dp[8][2] = 5;
    dp[9][2] = 3;

    int ans = 0;
    for(j=3;j<=n;j++)
    {
        for(i=0;i<10;i++)
        {
            int temp = 0;
            for(k=0;k<5;k++)
            {
                if(arr[i][k]!=-1)
                {
                    temp+=dp[arr[i][k]][j-1];
                }
            }
            dp[i][j] = temp;
        }
    }
    for(i=0;i<10;i++)
    {
        ans+=dp[i][n];
    }

    printf("ANswer is %d\n",ans);

    return 0;
}
