unsigned int ft_strlen(char *s);

char	*strchr(const char *s, int c)
{
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = ft_strlen(s) + 1;
	while (i < len)
	{
		if (s[i] == c)
			return (&s[i]);
		++i;
	}
	return (0);
}
