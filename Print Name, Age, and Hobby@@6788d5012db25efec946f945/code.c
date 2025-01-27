#include <stdio.h>

int main() {
    char name[20];
    int a;
    char hobby[20];
    scanf("%s",&name);
    scanf("%d",&a);
    scanf("%[^\n]",&hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",a);
    printf("Hobby: %s",hobby);
    return 0;
}