#include<stdio.h>


int power(int a, int b);


int main() {

    int a;
    int b;
    printf(" Enter number: ");
    scanf(" %d", &a);
    printf(" Enter it's power: ");
    scanf(" %d", &b);
    printf("\n\n Result: %d", power(a, b));
}

int power(int a, int b) {

    if (b == 0)
        return 1;
    if (a == 0)
        return 0;
    if (b == 1)
        return a;
    else return a * power(a, b - 1);
}

