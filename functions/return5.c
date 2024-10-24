#include <stdio.h>

float toCelsius(float fahrenheit) {
  return (5.0 / 9.0) * (fahrenheit - 32.0);
}

int main() {
  float f_value;
  printf("Enter a value in Fahrenheit: ");
  scanf("%f", &f_value);
  printf("%.2f degrees Fahrenheit is equal to %.2f degrees Celsius.\n", f_value, toCelsius(f_value));
  return 0;
}
