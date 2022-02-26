// B - 200th ABC-200 
// https://atcoder.jp/contests/abc200/tasks/abc200_b

int main(){
    long long n;
    int k, i;

    scanf("%lld %d", &n, &k);
    for(i = 0; i < k; i++){
        if(n % 200 == 0){
            n = n / 200;
        }else{
            n = 1000 * n + 200;
        }
    }
    printf("%lld", n);
    return 0;
}