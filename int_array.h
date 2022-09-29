/********************************************************************************
* int_array.h: Innehåller funktionalitet för tilldelning och utskrift av
*              arrayer innehållande heltal (int-arrayer).
********************************************************************************/
#pragma once

/* Inkluderingsdirektiv: */
#include <stdio.h>

/********************************************************************************
* int_array_assign: Tilldelar heltal till en array av angiven storlek med
*                   angivet stegvärde.
*
*                   - self: Pekare till själva arrayen.
*                   - size: Arrayens storlek, dvs. antalet element den rymmer.
*                   - step: Stegvärde, dvs. differensen mellan varje element.
********************************************************************************/
void int_array_assign(int* self,
                      const int size,
                      const int step);

/********************************************************************************
* int_array_print: Skriver ut heltal lagrade i angiven array till valfri utström,
*                  där standarutenheten stdout används som default för utskrift
*                  i terminalen.
*
*                  - self   : Pekare till själva arrayen.
*                  - size   : Arrayens storlek, dvs. antalet element den rymmer.
*                  - ostream: Pekare till vald utström (default = stdout).
********************************************************************************/
void int_array_print(const int* self,
                     const int size,
                     FILE* ostream);
