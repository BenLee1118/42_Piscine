// #include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    int mod;

    div = *a / *b;
    mod = *a % *b;
    *a = div;
    *b = mod;
}

/*
int main()
{
    int a = 5;
    int b = 3;
    ft_ultimate_div_mod(&a, &b);
    printf("division(a) = %d, modulus(b) = %d", a, b);
}
*/