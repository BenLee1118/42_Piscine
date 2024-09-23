// #include <stdio.h>

int ft_strlen(char *str)
{
    int count;

    count = 0;
    while (*str)
    {
        count++;
        str++;
    }
    return (count);
}

/*
int main()
{
    char *str = "LeeTianHau";

    printf("String Length = %d", ft_strlen(str));
    return 0;
}
*/