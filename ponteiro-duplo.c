#include <stdio.h>

int main(){
    system("clear");
    
    int a = 10;
    int *p1 = &a;
    int **p2 = &p1;

    printf("&a = %p, a = %d\n\n", &a, a);
    printf("&p1 = %p, p1 = %p, *p1 = %d\n\n", &p1, p1, *p1);
    printf("&p2 = %p, p2 = %p, *p2 = %d\n\n", &p2, p2, *p2);
    
    **p2 = 99;

    printf("&a = %p, a = %d\n\n", &a, a);
    printf("&p1 = %p, p1 = %p, *p1 = %d\n\n", &p1, p1, *p1);
    printf("&p2 = %p, p2 = %p, *p2 = %d\n\n", &p2, p2, **p2);

    return 0;
}