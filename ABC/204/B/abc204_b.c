#include<stdio.h>

int main(){
    int n, a, sum=0;
    int i;
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &a);
        a -= 10;
        if(a > 0){
            sum += a;
        }
    }
    printf("%d", sum);

    return 0;
}