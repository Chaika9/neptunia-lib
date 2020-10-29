/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** math - nabs, nlabs, nllabs, nfabs.
*/

int nabs(int value)
{
    return (value < 0 ? -value : value);
}

long nlabs(long value)
{
    return (value < 0 ? -value : value);
}

long long nllabs(long long value)
{
    return (value < 0 ? -value : value);
}

double nfabs(double value)
{
    return (value < 0 ? -value : value);
}