#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a==b)&&(b==c)){
        printf("Equilateral");
    }
    else if(a==b!=c || a!=b==c ||c==a!=b){
        printf("Isosceles");
    }
    else if((a!=b && b!=c && c!=a)){
        printf("Scalene");
    }
    return 0;
}