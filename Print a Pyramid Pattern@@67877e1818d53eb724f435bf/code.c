#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i;
    int j;
    for(i=1;i<=n;i++){
        for(j=n;j<=i;j=j+2){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}