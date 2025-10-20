unsigned int ft_strlen(char *s)
{
    unsigned int len;
    while(*(s++))
        ++len;
    return (len);
}