int ft_isdigit(int c)
{
    unsigned char uc;

    uc = (unsigned char)c;
    if('0' <= uc && uc <= '9')
        return (1);
    return (0);
}