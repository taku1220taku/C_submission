int ft_isalnum(int c)
{
    unsigned char uc;

    uc = (unsigned char)c;
    if(('a' <= uc && uc <= 'z') || ('A' <= uc && uc <= 'Z'))
        return (1);
    else if ('0' <= uc && uc <= '9')
        return (1);
    return (0);
}