# Anteckningar 2022-09-29
Demonstration av filhantering i C, främst skrivning via passering av filpekare till egenskapade print-funktioner.
Även extra funktioner för filskrivning och filläsning implementeras, se filer file.h samt file.c.

Filen main.c innefattar tilldelning av heltal till tre int-arrayer av olika storlek. Arrayernas innehåll skrivs sedan
till filen "numbers.txt". För tilldelningen samt utskriften används funktioner implementerade just för int-arrayer.

Filer file.h samt file.c utgör bonusinnehåll och demonstration implementering av funktioner för filläsning samt filskrivning.
En av dessa funktioner, file_read, anropas i main för att läsa innehållet ur filen "numbers.txt" rad för rad och skriva ut
i terminalen.