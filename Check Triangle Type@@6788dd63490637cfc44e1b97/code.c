#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c && a==c){
        printf("Equilateral");
    }
    else if(a==b && b!=c || a==c && b!=c ||a!=b && b==c){
        printf("Isosceles");
    }
    else if((a!=b && b!=c && c!=a)){
        printf("Scalene");
    }
    return 0;
}