#include <stdio.h>

// Count and print number of blanks, tabs, and newlines
int main()
{
   int nb, nt, nl;
   nb = 0;
   nt = 0;
   nl = 0;

   int c;

   while ((c = getchar()) != EOF)
   {
       if (c == ' ') nb++;
       else if (c == '\t') nt++;
       else if (c == '\n') nl++;
   }

   printf("blanks: %d, tabs: %d, new lines: %d", nb, nt, nl);
}
