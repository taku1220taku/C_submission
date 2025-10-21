int	ft_tolower(int c)
{
	char	diff;
	char	c_c;

	c_c = (char)c;
	diff = 'a' - 'A';
	if ('A' <= c_c && c_c <= 'Z')
		return (c_c + diff);
	return (c_c);
}
