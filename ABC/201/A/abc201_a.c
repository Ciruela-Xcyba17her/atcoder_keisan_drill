// A - Tiny Arithmetic Sequence
// https://atcoder.jp/contests/abc201/tasks/abc201_a

#include<stdio.h>

int main(){
    int a;
    int sum = 0;
    int max = 0, min = 101;
    for(int i = 0; i < 3; i++){
        scanf("%d", &a);
        sum += a;
        if(max < a){
            max = a;
        }
        if(a < min){
            min = a;
        }
    }
    if((max + min) * 3 / 2 == sum){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}