//Author: Shiao Zhuang sqz5328@psu.edu
//Collaborator: Zhihong Jiang zbj5088@psu.edu
//Collaborator: Yeman Xu ybx5148@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *d = readline("Enter temperature in celsius: ");
  double c = atof(d);
  double f = (c * 1.8 + 32);
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n" ,c ,f);
  return 0;
}