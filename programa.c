#include <stdlib.h>
#include <stdio.h>

float somaDoisFloats(float a, float b) {

  return a + b;
}

int somaDoisInteiros(int a, int b) {

  return a + b;
}

int main(int argc, char **argv) {

  printf("Hello World!\n");

  printf("Soma(%f, %f) = %f\n", 2.5f, 3.5f, somaDoisFloats(2.5f, 3.5f));

  printf("Soma(%d, %d) = %d\n", 2, 3, somaDoisInteiros(2, 3));

  return 0;

}