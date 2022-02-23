// A - Three Dice
// https://atcoder.jp/contests/abc202/tasks/abc202_a

#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", (21 - a - b - c)); 
    return 0;
}