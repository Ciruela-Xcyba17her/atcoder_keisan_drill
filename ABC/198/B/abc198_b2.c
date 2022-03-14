#include<stdio.h>
#include<string.h>

int main(){
    char* s = (char*)malloc(sizeof(char) * 11);
    char flag = 1;
    int i;
    int s_len;
    int s_final_valid_idx;

    scanf("%s", s);
    s_len = strlen(s);

    for(i = s_len - 1;; i--){
        if(s[i] != '0'){
            s_final_valid_idx = i;
            break;
        }
    }

    for(i = 0; i < s_final_valid_idx - i; i++){
        if(s[i] != s[s_final_valid_idx - i]){
            flag = 0;
            break;
        }
    }

    if(flag){
        printf("Yes");
    }else{
        printf("No");
    }

    free(s);
    return 0;
}