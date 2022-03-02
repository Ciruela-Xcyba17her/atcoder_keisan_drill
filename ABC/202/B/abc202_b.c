// B - 180°
// https://atcoder.jp/contests/abc202/tasks/abc202_b

#include<stdio.h>
#include<string.h>

int main(){
    char s_in[100000];
    char* s_out;
    int s_len;
    char c;
    int i;

    scanf("%s", s_in);
    s_len = strlen(s_in);
    s_out = (char*)malloc(sizeof(char) * (s_len + 1));
    s_out[s_len] = 0;
    for(i = 0; i < s_len; i++){
        c = s_in[i];
        switch(c){
            case '6':
                s_out[s_len - 1 - i] = '9';
                break;
            case '9':
                s_out[s_len - 1 - i] = '6';
                break;
            default:
                s_out[s_len - 1 - i] = c;
        }
    }

    printf("%s", s_out);
    free(s_out);

    return 0;
}