// #include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int count;

    count = 0;
    while (*(src + count) != '\0')
    {
        *(dest + count) = *(src + count);
        count++;
    }
    
    *(dest + count) = '\0';
    return (dest);
}

/*
int main()
{
  char src[20] = "C programming";
  char dest[20];

  // copying str1 to str2
  ft_strcpy(dest, src);

  printf("Destination : %s\n", dest);
  printf("Return : %s\n", ft_strcpy(dest, src));

  return 0;
}
*/