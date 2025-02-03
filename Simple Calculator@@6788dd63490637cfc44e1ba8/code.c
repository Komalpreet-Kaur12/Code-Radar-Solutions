#include <stdio.h>
int main() {
    int a,b;
    char opr;
    scanf("%d %d %c",&a,&b,&opr);
    switch(opr){
        case '+':
            printf("%d\n",a + b);
            break;
        case '-':
            printf("%d\n",a - b);
            break;
        case '*':
            printf("%d\n",a * b);
            break;
        case '/':
            if(b==0){
                printf("error");
            } else{
                printf("%d\n",a / b);
            }
            break;
        default:
            printf("error");
    }

    return 0;
}