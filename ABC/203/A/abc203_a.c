// A - Chinchirorin
// https://atcoder.jp/contests/abc203/tasks/abc203_a

#include<stdio.h>

int main(){
    int a[6] = {0}, num;
    int uniq;
    int is_all_1 = 1;
    int i;

    for(i = 0; i < 3; i++){
        scanf("%d", &num);
        a[num - 1] += 1;
    }

    for(i = 0; i < 6; i++){
        if(a[i] == 1){
            uniq = i;
        }

        if(a[i] == 3){
            printf("%d", i+1);
            break;
        }

        if(a[i] >= 2){
            is_all_1 = 0;
        }

        if(i == 5){
            if(is_all_1 == 1){
                printf("0");
            }else{
                printf("%d", uniq+1);
            }
        }
    }

    return 0;
}