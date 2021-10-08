#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    printf("%d", sizeof(a));
    printf("%d", suma(5,5));
    return 0;
}

int suma(int a, int b){
    return a + b;
}