#include<stdio.h>
#include<stdlib.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", abs(a-abs(b-a)));
}