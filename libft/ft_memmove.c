void	*memmove(void *dst, const void *src, unsigned int len)
{
	char			*s_dst;
	char			*s_src;

	s_dst = (char *)dst;
	s_src = (char *)src;

	if (s_dst <= s_src)
	{
		while (len--)
			*(s_dst++) = *(s_src++);
	}
	else
	{
		while (len--)
			s_dst[len] = s_src[len];
	}
	return (dst);
}
