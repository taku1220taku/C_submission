int ft_isprint(int c)
{
	unsigned charuc;

	uc = (unsigned char)c;
	if (32 <= uc && uc <= 126)
		return (1);
	return (0);
}
