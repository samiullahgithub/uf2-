#include <stdio.h>

int main ()
{

int Segs, Mins, Horas, Dias;

printf("Escribe un número de segundos: ");
//Sustituyo la función LEA Segs por scanf (“%d”, &variableEntera);
scanf("%d", &Segs); 
if (Segs < 0)
{
 //Sustituyo la función ESCRIBA “cadena” por printf
  printf("Error. Debe indicar un número positivo!");
 }
else
{
 
 Dias=0;
 Horas=0;
 Mins=0;
  if (Segs > 59)
 {
  Mins = Segs / 60;
  Segs = Segs % 60;
  if (Mins > 59)
  {
   Horas = Mins / 60;
   Mins = Mins % 60;
   if (Horas > 23)
   {
    Dias = Horas / 24;
    Horas = Horas % 24;
   }
  }
 }
 printf("El número de segundos se corresponde con %d días, %d horas, %d minutos y %d Segs.", Dias, Horas, Mins, Segs); 
 
}
return 0;

}

