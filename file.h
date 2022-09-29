/********************************************************************************
* file.h: Innehåller funktionalitet för filhantering via externa funktioner.
*         Dessa funktioner behandlades inte under lektionen, utan utgör
*         ett komplement för de som är intresserade.
********************************************************************************/
#pragma once

/* Inkluderingsdirektiv: */
#include <stdio.h>

/********************************************************************************
* file_write: Skriver ett textstycke till angiven filsökväg. Eventuellt
*             tidigare innehåll skrivs över. 
* 
*             - filepath: Pekare till filsökvägen dit skrivning skall ske.
*             - s       : Pekare till textstycket som skall skrivas.
********************************************************************************/
void file_write(const char* filepath,
                const char* s);

/********************************************************************************
* file_append: Bifogar ett textstycke till angiven filsökväg. Det nya textstycket
*              läggs till längst bak i filen. 
* 
*             - filepath: Pekare till filsökvägen dit befogning skall ske.
*             - s       : Pekare till textstycket som skall skrivas.
********************************************************************************/
void file_append(const char* filepath,
                 const char* s);

/********************************************************************************
* file_read: Läser innehållet från angiven filsökväg rad för rad och skriver
*            ut i terminalen.
*
*            - filepath: Pekare till filsökvägen där läsning skall ske.
********************************************************************************/
void file_read(const char* filepath);

