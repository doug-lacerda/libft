int		ft_strcmp(char *str1, char *str2)
{
	int		i;

	i = 0;
	if (!str1 && !str2)
		return (0);
	if (!str1 || !str2)
		return (1);
	while (str1[i] || str2[i])
	{
		if ((str1[i] < str2[i]) || (str1[i] > str2[i]))
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}