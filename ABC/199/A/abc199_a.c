// A - Square Inequality
// https://atcoder.jp/contests/abc199/tasks/abc199_a

#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a * a + b * b < c * c){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}