// B - AtCoder Condominium
// https://atcoder.jp/contests/abc203/tasks/abc203_b

#include<stdio.h>

int main(){
    int n, k;
    int i, j;
    int sum = 0;

    scanf("%d", &n);
    scanf("%d", &k);

    for(i = 1; i <= n; i++){
        for(j = 1; j <= k; j++){
            sum += (100 * i + j);
        }
    }

    printf("%d", sum);

    return 0;
}