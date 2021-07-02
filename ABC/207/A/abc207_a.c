// https://atcoder.jp/contests/abc207/tasks/abc207_a

#include<stdio.h>

int main(){
    int a;
    int sum = 0;
    int min = 200;

    for(int i = 0; i < 3; i++){
        scanf("%d", &a);
        sum += a;
        if(a < min){
            min = a;
        }
    }
    printf("%d", (sum - min));

    return 0;
}