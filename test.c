#include <stdio.h>
int f(int a,int b){//유클리드 호제법
    if(b==0){
        return a;
    }
    return f(b,a%b);
    printf("hihihih");
}
int main(void){
    f(30,18);
    return 0;
}