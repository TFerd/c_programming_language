// 1-21: Write a program `entab` that replaces strings of blanks by the minimum number of tabs and blanks 
// to achieve the same spacing. The reverse of exercise `1-20`.
#include <stdio.h>

#define TAB_STOP 6

int main()
{
        int c;
        int counter;

        counter = 1;
        while ((c = getchar()) != EOF)
        {
                if (c == '\t' || c == ' ')
                {
                        while (counter < TAB_STOP)
                        {
                                putchar(' ');
                                counter++;
                        }
                }
                else if (c == '\n')
                {       
                        putchar(c);
                        counter = 1;
                }
                else
                {
                        putchar(c);
                        counter++;
                }

                if (counter > TAB_STOP)
                        counter = 1;
        }

        return 0;
}

