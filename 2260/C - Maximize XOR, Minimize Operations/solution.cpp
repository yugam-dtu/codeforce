#include<bits/stdc++.h>
using namespace std;
int main(){
    int qrTNum;
    scanf("%d",&qrTNum);
    while(qrTNum--){
        long long x,y;
        scanf("%lld %lld",&x,&y);
        long long S=x+y;
        long long T=0;
        for(int b=31;b>=0;b--){
            long long bit=1LL<<b;
            if(S&bit){
                if((T|bit)<=x) T|=bit;
            }
        }
        printf("%lld %lld
",S,x-T);
    }
}