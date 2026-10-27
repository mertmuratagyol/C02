// c02 ex02  elimde bi string var bu yalnızca alfabetik karakterlerden mi oluşuyor onu görmek istiyorum

int     ft_str_is_alpha(char *str)
{
    int i;// sayaç ata
    i = 0;
    while(str[i] != '\0')// eğer stringde hala sayacak bir şey varsa
    {
        if((str[i] >= 'a' && str[i] <= 'z')  // alfabe aralığında ise
        || (str[i] >= 'A' && str[i] <= 'Z'))
            i++;// i'yi arttır
        else // değilse 0 döndür
         return(0);
    }
    return(1); // eğer öyleyse 1 döndür
}

