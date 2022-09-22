#include <stdio.h>
#include <string.h>
int main()
{
char src[] = "world here";
char dest[40] = "hello";

strncat(dest,src,5);
printf("%s\n",dest);
return (0);
}
