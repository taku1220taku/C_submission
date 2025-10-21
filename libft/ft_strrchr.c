unsigned int ft_strlen(char *s);

char	*strchr(const char *s, int c)
{
	unsigned int	i;

	i = ft_strlen(s);
	while (i > -1)
	{
		if (s[i] == c)
			return (&s[i]);
		--i;
	}
	return (0);
}
