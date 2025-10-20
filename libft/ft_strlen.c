unsigned int ft_strlen(char *s)
{
    unsigned int len;

    len = 0;
    while(*(s++))
        ++len;
    return (len);
}
