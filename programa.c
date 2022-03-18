#include <stdlib.h>
#include <stdio.h>

float somaDoisFloats(float, float);

int main(int argc, char **argv) {

  printf("Hello World!\n");

  printf("Soma(%f, %f) = %f\n", 2.5f, 3.5f, somaDoisFloats(2.5f, 3.5f));

  return 0;
}

float somaDoisFloats(float a, float b) {

  return a + b;
}