#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int cht=0;
    if(a<=1){
        printf("Not Prime");
    }
    for (int i==2; i<=a; i++){
        if (a%i==0){
            cht+=1;
        }
    }
    if(cht==2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}