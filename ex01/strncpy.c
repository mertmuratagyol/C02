// c02 ex01 

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int    i; // stringi takip ettiğinden negatif işaret alamaz

    i = 0; // i 0'dan başlattım
    while(src[i] != '\0' && i < n) // eğer inin stringi takip ettiği noktada bir şey varsa ve o şey null değilse gir
    {
        dest[i] = src[i]; // destte i!nin olduğu yere srcdeki i!yi at
        i++; // iyi arttır
    }
    while(i < n) // eğer i nden küçükse ama üstteki kısımdan çıktıysa demek ki karakter kalmamış
    {
        dest[i] = '\0'; // çıktı almak istediğim stringe null ekle kapat
        i++;
    }
    return(dest); // dest stringi çıkart
}

#include <stdio.h>

int main(void)
{
    char    dest[] = "nonevuan";
    char    src[] = "cumlebuseferreal";
    int n = 3; // srcnin ilk 3 harfini deste aktarmasını bekliyorum
}