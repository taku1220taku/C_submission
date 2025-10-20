int ft_isascii(int c)
{
    unsigned char uc;

    uc = (unsigned char)c;
    if(0 <= uc && uc <= 127)
        return (1);
    return (0);
}