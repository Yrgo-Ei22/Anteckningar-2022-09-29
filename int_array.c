/********************************************************************************
* int_array.c: Inneh�ller funktionsdefinitioner f�r tilldelning samt utskrift
*              av arrayer inneh�llande heltal (int-arrayer).
********************************************************************************/
#include "int_array.h"

/********************************************************************************
* int_array_assign: Tilldelar heltal till en array av angiven storlek med
*                   angivet stegv�rde.
*
*                   - self: Pekare till sj�lva arrayen.
*                   - size: Arrayens storlek, dvs. antalet element den rymmer.
*                   - step: Stegv�rde, dvs. differensen mellan varje element.
********************************************************************************/
void int_array_assign(int* self,
                      const int size,
                      const int step)
{
   for (int i = 0; i < size; ++i)
   {
      self[i] = i * step;
   }

   return;
}

/********************************************************************************
* int_array_print: Skriver ut heltal lagrade i angiven array till valfri utstr�m,
*                  d�r standarutenheten stdout anv�nds som default f�r utskrift
*                  i terminalen.
*
*                  - self   : Pekare till sj�lva arrayen.
*                  - size   : Arrayens storlek, dvs. antalet element den rymmer.
*                  - ostream: Pekare till vald utstr�m (default = stdout).
********************************************************************************/
void int_array_print(const int* self,
                     const int size,
                     FILE* ostream)
{
   if (!ostream) ostream = stdout;
   fprintf(ostream, "--------------------------------------------------------------------------------\n");

   for (int i = 0; i < size; ++i)
   {
      fprintf(ostream, "%d\n", self[i]);
   }

   fprintf(ostream, "--------------------------------------------------------------------------------\n\n");
   return;
}