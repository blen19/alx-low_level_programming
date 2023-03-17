#include <stdio.h>
/*program that prints alphabets in lowercase
 */
int main(void)
{
  char i;
  for(i='a';i<='z';i++)
    {
      putchar(i);
      putchar('\n');
    }
  return(0);
}
