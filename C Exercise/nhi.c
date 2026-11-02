#include <stdio.h>
#include <math.h>
int f(int x, int N) {
    int s = pow(x,N);
    return s;
}

int main()
{
    int x,N,s;
    printf("nhap x: ");
    scanf("%d",&x);
    printf("nhap N: ");
    scanf("%d",&N);
    
    printf("%d", f(x, N));
}