#include <stdio.h>
#include <stdlib.h>

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

char *ft_strdup(char *src)
{
    char    *tab;
    int     i;

    i = 0;
    tab = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
    if (tab == NULL)
        return 0;
    while (src[i] != '\0')
    {
        tab[i] = src[i];
        i++;
    }
    tab[i] = '\0';
    return (tab);
}

int main()
{
    char *src = "Hello LeeTianHau";
    printf("Answer = %s", ft_strdup(src));
}