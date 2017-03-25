int		ft_wordcount(const char *str, char c)
{
	int i;
	int count;

	i = -1;
	count = 0;
	while (str[++i] != '\0')
		if (str[i] != c && (str[i - 1] == c || i == 0))
			count++;
	return (count);
}