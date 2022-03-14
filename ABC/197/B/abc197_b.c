// B - Visibility
// https://atcoder.jp/contests/abc197/tasks/abc197_b

#include<stdio.h>

int main(){
    int h, w, x, y;
    int i, j, k;
    int answer = 0;
    char table[100][101];
    char c;
    scanf("%d %d %d %d", &h, &w, &x, &y);

    // table initialization
    for(i = 0; i < 100; i++){
        if(i < h){
            scanf("%s", table[i]);
            for(j = w; j < 101; j++){
                table[i][j] = '#';
            }
        }else{
            for(j = 0; j < 101; j++){
                table[i][j] = '#';
            }
        }
    }

    for(k = 0; k < 4; k++){
        i = x - 1;
        j = y - 1;
        
        while(1){
            // move index
            if(k == 0){
                i--;
            }else if(k == 1){
                i++;
            }else if(k == 2){
                j--;
            }else{
                j++;
            }

            // check
            if((i < 0 || i > 99) || (j < 0 || j > 100)){
                break;
            }
            if(table[i][j] == '#'){
                break;
            }
            answer += 1;
        }
    }

    printf("%d", answer + 1);
    return 0;
}