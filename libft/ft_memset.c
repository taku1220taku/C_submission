void*   ft_memset(void *b, int c, unsigned int len)
{
    unsigned int    i;
    char            *str;

    i = 0;
    str = (char *)b;
    while (i < len)
    {
        str[i] = (unsigned char)c;
        ++i;
    }
    return (str);
}
