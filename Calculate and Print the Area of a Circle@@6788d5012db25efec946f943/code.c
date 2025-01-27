#include <stdio.h>
int main() {
    int radius;
    float pi= 3.14;
    scanf("%d",radius);
    float area = pi*radius*radius;
    scanf("%f",&area);
    printf("Area: .2%f",area);
    return 0;
}