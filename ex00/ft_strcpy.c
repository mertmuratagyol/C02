// c 02 ex00 bir stringi bi yerden başka bir yere kopyalama

#include <stdio.h>
char    ft_strcpy(char dest, char *src)
{
    int i;
    i = 0;

    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

#include <string.h>
int main()
{
    char src[] = "hello";
    char dest[] = "world";
    printf("%s", ft_strcpy(dest, src));
}