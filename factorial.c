#include<stdio.h>
 int fac(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, fac(n));
    return 0;
}

 int fac(int n) 
 {
    if (n>=1)
        return n*fac(n-1);
    else
        return 1;
}
