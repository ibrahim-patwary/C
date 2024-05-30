#include <stdio.h>

int max(int num1, int num2) {
    if(num1 > num2)
        return num1;
    else {
        return num2;
    }

}
int knapsack(int S, int s[], int v[], int n) {
    int i, V[n+1][S+1], j;

    for(i = 0; i<=n; i++) {
        for(j = 0; j<=S; j++) {
            if(i == 0 || j == 0) {
                V[i][j] = 0;
            }
            else if(s[i-1] <= j) {
                V[i][j] = max(v[i-1]+V[i-1][j-s[i-1]], V[i-1][j]);
            }
            else {
                V[i][j] = V[i-1][j];
            }
        }
    }

    return V[n][S];

}

int main()
{
    int n, S, i, profit;
    scanf("%d %d", &n, &S);
    int s[n], v[n];
    for(i = 0; i<n; i++) {
        scanf("%d", &s[i]);
    }
    for(i = 0; i<n; i++) {
        scanf("%d", &v[i]);
    }

    profit = knapsack(S, s, v, n);
    printf("%d", profit);


    return 0;
}
