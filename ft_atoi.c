int ft_atoi(const char *c)
{
    int x;
    int nb_sign;

    x = 0;
    nb_sign = 1;
    while ((*c >= 9 && *c <= 13) || *c == 32)
        c++;
    if (*c == 43 || *c == 45)
    {
        if (*c == 45)
            nb_sign *=-1;
        c++;
    }
    while (*c >= 48 && *c <= 57)
        x = x * 10 + *c++ - '0';
    return (nb_sign * x);
}
