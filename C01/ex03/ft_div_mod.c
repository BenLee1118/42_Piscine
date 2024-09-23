// #include<stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

/*
int main()
{
    int a = 5;
    int b = 3;
    int division;
    int modulus;

    ft_div_mod(a, b, &division, &modulus);
    printf("div = %d, mod = %d", division, modulus);
}
*/