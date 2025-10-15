#include <stdio.h>
#include <math.h>
#include <assert.h>
#include "taylor_sine.h"
#include "exercise1.h"

int main() { //til at tjekke koden, skal skrives i en seperat hvor at vi bruger library
    double x;
    int n;

    printf("Indtast x: ");
    scanf("%lf", &x); //lf fordi double
    printf("Indtast antal termer n: ");
    scanf("%d", &n); //d fordi int

    double result = taylor_sine(x, n); //kalder funktion

    printf("\nsin(%.6f) ≈ %.10f (med %d termer)\n", x, result, n); //her er 10f, 6f, antal digits i svar. svar i radianer

    return 0;
}
