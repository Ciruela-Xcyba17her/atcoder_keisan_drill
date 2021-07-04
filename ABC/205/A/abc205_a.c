// A - kcal
// https://atcoder.jp/contests/abc205/tasks/abc205_a

#include<stdio.h>

int main(){
    int a, b;
    float ans;

    scanf("%d %d", &a, &b);
    
    ans = (float)a * b / 100;
    printf("%f", ans);
    return 0;
}