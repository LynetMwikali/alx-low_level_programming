#include "main.h"
/**
*_isdigit-checks if a digit is between 0 and 9
*@c: character to be tested
*Return: 1 whether it is, 0 otherwise
**/
int _isdigit(int c)
{
if ((c >= 0) && (c <= 9))
{
return (1);
}
return (0);
}
