#include <stdio.h>

int main(){
    system("clear");
    
    int a, b, *p1, *p2;

    a = 4;
    b = 3;
    p1 = &a;
    p2 = p1;
    printf("%d %d\n", *p1, *p2);
    *p2 = *p1 + 3;
    printf("%d %d\n", *p1, *p2);
    b = b * (*p1);
    (*p2)++;

    printf("%d %d\n", *p1, *p2);
    printf("%d %d\n\n", a, b);
    
    return 0;
}