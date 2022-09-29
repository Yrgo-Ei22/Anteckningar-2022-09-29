/********************************************************************************
* main.c: Implementering av tilldelning till arrayer samt filskrivning av
*         arrayernas innehåll. Även separata funktioner för filskrivning och
*         filläsning presenteras som en bonus, se filer "file.h" samt "file.c".
*         I main används en av dessa funktioner, file_read, för filläsning.
*         OBS! Se mer information om hur filhantering genomförs i C genom att 
*         läsa dokumentationen för filen file.c!
* 
*         För att läsa innehållet i en given fil, klicka Tools -> Command Line 
*         -> Developer Command Prompt. Skriv sedan in kommandot "type" följt av 
*         filnamnet. Som exempel, innehållet i filen "numbers.txt" kan läsas via 
*         följande kommando:
*
*         $ type numbers.txt
*
*         Observera att dollartecknet enbart används för att indikera att det 
*         rör sig om ett terminalkommando och skall inte skrivas.
********************************************************************************/
#include "int_array.h"
#include "file.h"

/********************************************************************************
* main: Fyller tre arrayer till bredden med heltal och skriver innehållet ur 
*       varje array till filen "numbers.txt" enligt nedan:
* 
*       1. Deklarerar statiska arrayer a1 - a3.
*       2. Öppnar filen "numbers.txt" för skrivning.
*       3. Fyller arrayerna till bredden med heltal via olika stegvärden.
*       4. Skriver arrayernas innehåll till filen "numbers.txt".
*       5. Stängen filen "numbers.txt".
*       6. Läser innehållet från filen "numbers.txt" rad för rad och skriver
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

