// B - Do you know the second highest mountain?
// https://atcoder.jp/contests/abc201/tasks/abc201_b

#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, n;
    char s[16];
    int h;
    char ranking_s[2][16] = {"init_1", "init_2"};
    int ranking_h[2] = {0, 0};
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%s", s);
        scanf("%d", &h);
        if(ranking_h[0] < h){
            strcpy(ranking_s[1], ranking_s[0]);
            strcpy(ranking_s[0], s);
            ranking_h[1] = ranking_h[0];
            ranking_h[0] = h;
        }else if(ranking_h[1] < h){
            strcpy(ranking_s[1], s);
            ranking_h[1] = h;
        }
    }

    printf("%s", ranking_s[1]);
    return 0;
}