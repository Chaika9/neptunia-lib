/*
** EPITECH PROJECT, 2021
** neptunia-lib
** File description:
** math - floor
*/

double nfloor(double value)
{
    int val = (int)value;

    if (value > -1.0f && value < 1.0f)
        return (value >= 0 ? 0.0f : -1.0f);
    return (value < 0 ? (double)(val - 1) : (double)val);
}

float nfloorf(float value)
{
    int val = (int)value;

    if (value > -1.0 && value < 1.0)
        return (value >= 0 ? 0.0f : -1.0f);
    return (value < 0 ? (float)(val - 1) : (float)val);
}