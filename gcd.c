#include <stdio.h>
int hcf(int n1, int n2);
int gcd(int n1, int n2, int n3);
int main()
{
    int n1, n2, n3;
    printf("Enter three positive integers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("G.C.D of %d %d and %d is %d", n1, n2, n3, gcd(n1, n2, n3));
    return 0;
}

int hcf(int n1, int n2)
{
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}
int gcd(int n1, int n2, int n3)
{
    if (n3 != 0)
        return (n3, hcf(n1, n2));
}
