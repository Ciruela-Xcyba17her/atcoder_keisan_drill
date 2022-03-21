// A - I Scream
// https://atcoder.jp/contests/abc194/tasks/abc194_a

#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%d%d", &a, &b);
    c = a + b;

    if(c >= 15 && b >= 8){
        printf("1");
    }else if(c >= 10 && b >= 3){
        printf("2");
    }else if(c >= 3){
        printf("3");
    }else{
        printf("4");
    }

    return 0;
}