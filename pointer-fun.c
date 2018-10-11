/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: <2AHIF>
 * ---------------------------------------------------------
 * Exercise Number: 3
 * Title:			<Pointer-fun>
 * Author:			<Ignjatovic David>
 * ----------------------------------------------------------
 * Description:
 * <Two functions, one changes values the other one
 *  prints the values. It tests which values are changed or not>
 * ----------------------------------------------------------
 */

#include <stdio.h>
#include <float.h>

void print_integers(int int_value,int* int_pointer);
void change_integers(int int_value,int* int_pointer);

int main(int argc, char const *argv[]) {

  int int_value = 8;
  int* int_pointer = &int_value;

  print_integers(int_value,int_pointer); // output of the values
  change_integers(int_value,int_pointer); // new values
  print_integers(int_value, int_pointer); // output of new values

  return 0;
}

void print_integers(int int_value,int* int_pointer){

  printf("Got an integer value %d and an address to an integer with value %d\n",int_value, *int_pointer); //output
}

void change_integers(int int_value,int* int_pointer){

  int_value = 23;
  *int_pointer = 24;
}
