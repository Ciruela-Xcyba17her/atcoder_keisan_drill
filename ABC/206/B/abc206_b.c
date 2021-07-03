// https://atcoder.jp/contests/abc206/tasks/abc206_b
// B - Savings

#include<stdio.h>
#include<math.h>

int main(){
    signed long long n, d;
    scanf("%lld", &n);
    d = (int)((-1 + sqrt(1 + 8 * n)) / 2) + 1;
    if(d * (d - 1) / 2 == n){
        d -= 1;
    }
    printf("%lld", d);
}