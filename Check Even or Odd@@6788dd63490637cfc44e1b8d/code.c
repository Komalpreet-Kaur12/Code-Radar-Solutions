#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a%2==0){
        printf("Even %d",a);
    }
    else{
        printf("Odd %d",a);
    }
    return 0;
}