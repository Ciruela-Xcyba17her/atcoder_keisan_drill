// https://atcoder.jp/contests/abc206/tasks/abc206_a
// A - Maxi-Buying

#include<stdio.h>

int main(){
    int n, price;
    scanf("%d", &n);
    price = (int)(n * 1.08);
    if(price < 206){
        printf("Yay!");
    }else if(price == 206){
        printf("so-so");
    }else{
        printf(":(");
    }
    return 0;
}