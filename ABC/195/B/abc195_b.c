// B - Many Oranges
// https://atcoder.jp/contests/abc195/tasks/abc195_b

#include<stdio.h>

int main(){
    int a, b, w;
    int answer_min, answer_max;
    scanf("%d%d%d", &a, &b, &w);
    w *= 1000;

    // check if n that satisfies a*n <= w <= b*n exists
    if(w % a != 0 && b * (w / a) < w){
        printf("UNSATISFIABLE");
        return 0;
    }

    // find answer_min
    if(w % b == 0){
        answer_min = w / b;
    }else{
        answer_min = w / b + 1;
    }

    // find answer_max
    answer_max = w / a;

    // print answers
    printf("%d %d", answer_min, answer_max);
    return 0;
}