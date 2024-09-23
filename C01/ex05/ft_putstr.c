#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    while (*str)
    {
        ft_putchar(*str);
        str++;
    }
}

/*
int main()
{
    char *str = "Lee Tian Hau Ee Chern Ting";

    ft_putstr(str);
}
*/