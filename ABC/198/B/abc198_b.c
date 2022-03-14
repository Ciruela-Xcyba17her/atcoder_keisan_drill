#include<stdio.h>

int get_specific_digit(int n, int digit_idx){
    int n_cpy = n;
    int i;
    for(i = 0; i < digit_idx; i++){
        n_cpy /= 10;
    }
    return n_cpy % 10;
}

int get_max_digit_idx(int n){
    int digit_idx_max = 0;
    while(1){
        if(n < 10){
            break;
        }
        n /= 10;
        digit_idx_max += 1;
    }
    return digit_idx_max;
}

int main(){
    int i;
    char flag = 1;
    int n;
    int n_cpy;
    int digit_idx_max;
    int digit_idx_left, digit_idx_right;
    int digit_left, digit_right;
    scanf("%d", &n);
    
    n_cpy = n;
    if(n_cpy != 0){
        while(1){
            if(n_cpy % 10 == 0){
                n_cpy /= 10;
            }else{
                break;
            }
        }
    }

    digit_idx_left = get_max_digit_idx(n_cpy);
    for(i = 0; i < digit_idx_left - i; i++){
        digit_left = get_specific_digit(n_cpy, digit_idx_left - i);
        digit_right = get_specific_digit(n_cpy, i);
        if(digit_left != digit_right){
            flag = 0;
            break;
        }
    }

    if(flag){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}