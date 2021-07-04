// B - Permutation Check
// https://atcoder.jp/contests/abc205/tasks/abc205_b

#include<stdio.h>

int main(){
    int a, n;
    int i;
    int ok = 1;
    int checker[1000] = {0};

    scanf("%d", &n);
    
    for(i = 0 ; i < n; i++){
        scanf("%d", &a);
        checker[a] = 1;
    }

    for(i = 1 ; i < n + 1; i++){
        if(checker[i] == 0){
            ok = 0;
            break;
        }
    }

    if(ok == 0){
        printf("No");
    }else{
        printf("Yes");
    }

    return 0;
}