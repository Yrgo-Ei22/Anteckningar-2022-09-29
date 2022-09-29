/********************************************************************************
* main.c: Implementering av tilldelning till arrayer samt filskrivning av
*         arrayernas inneh�ll. �ven separata funktioner f�r filskrivning och
*         fill�sning presenteras som en bonus, se filer "file.h" samt "file.c".
*         I main anv�nds en av dessa funktioner, file_read, f�r fill�sning.
*         OBS! Se mer information om hur filhantering genomf�rs i C genom att 
*         l�sa dokumentationen f�r filen file.c!
* 
*         F�r att l�sa inneh�llet i en given fil, klicka Tools -> Command Line 
*         -> Developer Command Prompt. Skriv sedan in kommandot "type" f�ljt av 
*         filnamnet. Som exempel, inneh�llet i filen "numbers.txt" kan l�sas via 
*         f�ljande kommando:
*
*         $ type numbers.txt
*
*         Observera att dollartecknet enbart anv�nds f�r att indikera att det 
*         r�r sig om ett terminalkommando och skall inte skrivas.
********************************************************************************/
#include "int_array.h"
#include "file.h"

/********************************************************************************
* main: Fyller tre arrayer till bredden med heltal och skriver inneh�llet ur 
*       varje array till filen "numbers.txt" enligt nedan:
* 
*       1. Deklarerar statiska arrayer a1 - a3.
*       2. �ppnar filen "numbers.txt" f�r skrivning.
*       3. Fyller arrayerna till bredden med heltal via olika stegv�rden.
*       4. Skriver arrayernas inneh�ll till filen "numbers.txt".
*       5. St�ngen filen "numbers.txt".
*       6. L�ser inneh�llet fr�n filen "numbers.txt" rad f�r rad och skriver
*          ut i terminalen (extra, behandlades inte under lektionen).
********************************************************************************/
int main(void)
{
   int a1[10];
   int a2[20];
   int a3[30];

   FILE* ostream = fopen("numbers.txt", "w");

   int_array_assign(a1, 10, 1);
   int_array_assign(a2, 20, 2);
   int_array_assign(a3, 30, 3);
   
   int_array_print(a1, 10, ostream); 
   int_array_print(a2, 20, ostream);
   int_array_print(a3, 30, ostream);

   fclose(ostream);
   file_read("numbers.txt");
   return 0;
}

