#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i;
    int j;
    for(i=1;i<=n;i++){
        for(j=n;j<=2*i-1;j=j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}