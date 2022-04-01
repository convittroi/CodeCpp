#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () 
{

 int circ, total, i;
 double a, x, y, pi;

 a = 0;
 i = 0;

 total = 500;
 circ = 0;
 for ( i = 0; i<total; i++ ) {
  x = (double)rand ()/ RAND_MAX;
  y = (double)rand ()/ RAND_MAX;
  a = x*x + y*y
 if (a<=1) circ ++;
 }
 pi = (double)circ/total * 4;
 printf ("For %d points, pi is %g \n", total, pi);

 total = 20000;
 circ = 0;
 for ( i = 0; i<total; i++ ) {
  x = (double)rand ()/ RAND_MAX;
  y = (double)rand ()/ RAND_MAX;
  a = x*x + y*y
  if (a<=1) circ ++;
  }
 pi = (double)circ/total * 4;
 printf ("For %d points, pi is %g \n", total, pi);


 total = 100000;
 circ = 0;
 for ( i = 0; i<total; i++ ) {
  x = (double)rand ()/ RAND_MAX;
  y = (double)rand ()/ RAND_MAX;
  a = x*x + y*y
  if (a<=1) circ ++;
  }
 pi = (double)circ/total * 4;
 printf ("For %d points, pi is %g \n", total, pi);


 total = 1000000;
 circ = 0;
 for ( i = 0; i<total; i++ ) {
  x = (double)rand ()/ RAND_MAX;
  y = (double)rand ()/ RAND_MAX;
  a = x*x + y*y
  if (a<=1) circ ++;
  }
 pi = (double)circ/total * 4;
 printf ("For %d points, pi is %g \n", total, pi);

 total = 10000000;
 circ = 0;
 for ( i = 0; i<total; i++ ) {
  x = (double)rand ()/ RAND_MAX;
  y = (double)rand ()/ RAND_MAX;
  a = x*x + y*y
  if (a<=1) circ ++;
  }
 pi = (double)circ/total * 4;
 printf ("For %d points, pi is %g \n", total, pi);