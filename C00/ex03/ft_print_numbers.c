#include <unistd.h>

void ft_print_numbers(void)
{
    char i;

    i = '0';
    while (i <= '9')
    {
        write(1, &i, 1);
        i++;
    }
    // write(1, "0123456789", 10);
}

/*
int main()
{
    ft_print_numbers();
}
*/