/********************************************************************************
* file.h: Inneh�ller funktionalitet f�r filhantering via externa funktioner.
*         Dessa funktioner behandlades inte under lektionen, utan utg�r
*         ett komplement f�r de som �r intresserade.
********************************************************************************/
#pragma once

/* Inkluderingsdirektiv: */
#include <stdio.h>

/********************************************************************************
* file_write: Skriver ett textstycke till angiven fils�kv�g. Eventuellt
*             tidigare inneh�ll skrivs �ver. 
* 
*             - filepath: Pekare till fils�kv�gen dit skrivning skall ske.
*             - s       : Pekare till textstycket som skall skrivas.
********************************************************************************/
void file_write(const char* filepath,
                const char* s);

/********************************************************************************
* file_append: Bifogar ett textstycke till angiven fils�kv�g. Det nya textstycket
*              l�ggs till l�ngst bak i filen. 
* 
*             - filepath: Pekare till fils�kv�gen dit befogning skall ske.
*             - s       : Pekare till textstycket som skall skrivas.
********************************************************************************/
void file_append(const char* filepath,
                 const char* s);

/********************************************************************************
* file_read: L�ser inneh�llet fr�n angiven fils�kv�g rad f�r rad och skriver
*            ut i terminalen.
*
*            - filepath: Pekare till fils�kv�gen d�r l�sning skall ske.
********************************************************************************/
void file_read(const char* filepath);

