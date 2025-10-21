int	ft_toupper(int c)
{
	char	diff;
	char	c_c;

	c_c = (char)c;
	diff = 'A' - 'a';
	if ('a' <= c_c && c_c <= 'z')
		return (c_c + diff);
	return (c_c);
}
