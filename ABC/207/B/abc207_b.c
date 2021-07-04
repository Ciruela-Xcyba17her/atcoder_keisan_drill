// B - Hydrate
// https://atcoder.jp/contests/abc207/tasks/abc207_b

#include<stdio.h>

int main(){
    int a, b, c, d;
    int m;
    int result;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(b == c * d){
        printf("-1");
    }else{
        result = (-a) / (b - c * d);
        if(result < 0){
            printf("-1");
        }else{
            if((-a) % (b - c * d) == 0){
                printf("%d", result);
            }else{
                printf("%d", result + 1),
            }
        }
    }

    
}