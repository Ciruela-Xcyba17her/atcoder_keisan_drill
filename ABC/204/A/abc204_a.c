#include<stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);

    if (x == y){
        printf("%d", x);
    }else{
        printf("%d", 3-x-y);
    }

    return 0;
}