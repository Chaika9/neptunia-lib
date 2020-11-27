/*
** EPITECH PROJECT, 2020
** LibC
** File description:
** math - floor.
*/

double nfloor(double value)
{
    int val = value;

    if (value > -1.0 && value < 1.0)
        return (value >= 0 ? 0.0 : -1.0);
    return (value < 0 ? (double)(val - 1) : (double)val);
}

float nfloorf(float value)
{
    int val = value;

    if (value > -1.0 && value < 1.0)
        return (value >= 0 ? 0.0 : -1.0);
    return (value < 0 ? (float)(val - 1) : (float)val);
}