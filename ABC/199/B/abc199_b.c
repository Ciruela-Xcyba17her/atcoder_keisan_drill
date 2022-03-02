// B - Intersection
// https://atcoder.jp/contests/abc199/tasks/abc199_b

#include<stdio.h>

int main(){
    int i; 

    // read N
    int n;
    scanf("%d", &n);

    // read A[N], B[N]
    int* a = (int*)malloc(sizeof(int) * n);
    int* b = (int*)malloc(sizeof(int) * n);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++){
        scanf("%d", &b[i]);
    }

    // find answer
    int lower_limit = 0;
    int upper_limit = 1000;
    int answer;
    for(i = 0; i < n; i++){
        if(lower_limit < a[i]){
            lower_limit = a[i];
        }
        if(b[i] < upper_limit){
            upper_limit = b[i];
        }
    }
    answer = upper_limit - lower_limit;
    if(answer < 0){
        answer = -1;
    }
    answer += 1;

    printf("%d", answer);
    free(a);
    free(b);

    return 0;
}