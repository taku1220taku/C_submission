int ft_isalpha(int c)
{
    unsigned char uc;

    uc = (unsigned char)c;
    if(('a' <= uc && uc <= 'z') || ('A' <= uc && uc <= 'Z'))
        return (1);
    return (0);
}
