#include <stdio.h>
#include <stdlib.h>

int main ()
{
  FILE * fp;

  fp = fopen("sweetpie.txt", "w+");
  fprintf(fp, "%s", "Hello, Ladies and gentlemen; my name is Derek. I am here to do a presentation on library format.");
  fclose(fp);

  return 0;
}