// c02 ex07 amaç stringin tümünü büyük harf yapmak

char    *ft_strupcase(char *str)
{
    int i;
    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z') // i'nin oldugu yer küçük harflerden biriyse
        {
            str[i] -= 32; // o karakterin ascıı değerinden 32 çıkarıp büyük yap
        }
        i++;
    }
    return(str); // metni çıkart
}