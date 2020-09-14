//Programa que dice cuantos dias has vivido.
//Creado por Camilo Andres Acevedo Portilla.
//

#include <stdio.h>//Parte de cabecera que contiene las definiciones de constantes y declaraciones de funciones.
#include <time.h>//Parte de cabecera que contiene funciones para manipular y formatear la fecha y hora del sistema.
#include <iostream> //Libreria para leer y escribir desde / hacia archivos.
using namespace std; //Creamos un bloque que asocie nuestras funciones.
int main ()
{
  time_t timer; //Guarda el tiempo actual en la variable llamada timer.
  struct tm y2k = {0}; //crea una estructura de tiempo y la guarda en una variable llamada y2k.
  double seconds; //Objeto que almacena la estrucutra de y2k.

  y2k.tm_hour = 0; //variables constantes
  y2k.tm_min = 0;  
  y2k.tm_sec = 0;  
  int ano; // variable int para el año
  cout<<"digite el año de nacimiento:"; cin>> ano;  //imprime el mensaje "digite el año:" y define el valor de la varible int.
  int mes; // variable int para el mes
  cout<<"digite el mes de nacimiento:"; cin>> mes; //imprime el mensaje "digite el mes:" y define el valor de la varible int.
  int dias; // variable int para los dias
  cout<<"digite el dia de nacimiento :"; cin>> dias; //imprime el mensaje "digite el dia:" y define el valor de la varible int.
  y2k.tm_year=ano-1900; // variables que dependen de una operacion con otra variable
  y2k.tm_mon=mes-1; 
  y2k.tm_mday=dias;


  time(&timer); // convierte en tiempo unix la varible timer

  seconds = difftime(timer,mktime(&y2k)); //Operacion diferencial de tiempo entre la estructura y2k y el timer en tiempo unix.
  float dia=seconds/86400; // operacion que convierte el tiempo unix (seg) en dias
  printf ("has vivido %.f dias ",dia);  // imprime el valor de cuantos dias han transcurrido.
  return 0; //Abandonamos la funcion main.
}