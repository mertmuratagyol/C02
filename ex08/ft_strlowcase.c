// c02 ex08 az öncekinin aynısı ama küçük harf

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32; // 32 ekle harfi küçült
		}
		i++;
	}
	return (str);
}