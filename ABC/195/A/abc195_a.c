// A - Health M Death
// https://atcoder.jp/contests/abc195/tasks/abc195_a

int main(){
    int m, h;
    scanf("%d%d", &m, &h);

    if(h % m == 0){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}