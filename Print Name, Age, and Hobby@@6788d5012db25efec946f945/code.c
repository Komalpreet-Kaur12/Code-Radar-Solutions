#include <stdio.h>

int main() {
    char name[50];
    int age;
    char hobby[100];
    scanf("%s",name);
    scanf("%d",&age);
    getchar();
    scanf("%[\n]",hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hobby);
    return 0;
}