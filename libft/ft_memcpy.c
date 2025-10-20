void*	ft_memcpy(void *dst, const void *src, unsigned int n)
{
	char			*s_dst;
	char			*s_src;

	s_dst = (char *)dst;
	s_src = (char *)src;
	while(n--)
	{
		*(s_dst++) = *(s_src++);
	}
	return (dst);
}
