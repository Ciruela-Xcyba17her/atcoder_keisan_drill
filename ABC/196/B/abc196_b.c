// B - Round Down
// https://atcoder.jp/contests/abc196/tasks/abc196_b

int main(){
    char num_str[500];
    int dot_idx;
    int i;
    scanf("%s", num_str);
    
    for(dot_idx = 0; ; dot_idx++){
        if(num_str[dot_idx] == '.' || num_str[dot_idx] == 0){
            break;
        }
    }
    num_str[dot_idx] = 0;
    
    printf("%s", num_str);
    return 0;
}
