#include<stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a%4 == 0) {
        if (a%100 == 0){
            if (a%400 == 0) {
                printf("うるう年である\n");
            } else {
                printf("うるう年でない\n");
            }
        } else {
            printf("うるう年である\n");
        }
    } else {
        printf("うるう年でない\n");
    }
}