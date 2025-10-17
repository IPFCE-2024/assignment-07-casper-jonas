/*
 * Exercise 1: Taylor Series Approximation for Sine Function
 * Assignment 7 - IPFCE 2025
 * 
 * Implement the taylor_sine function that calculates the sine of x
 * using Taylor series approximation with n terms.
 * 
 * Taylor series for sin(x) = x - x^3/3! + x^5/5! - x^7/7! + ...
 */

#include "taylor_sine.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/* 
 * Calculate sine using Taylor series approximation
 * x: input value in radians
 * n: number of terms in the series
 * Returns: approximation of sin(x)
 */

/*double taylor_sine(double x, int n) {
    if (n <= 0) return 0.0;        
    
    double sum = 0.0;               
    double term = x;              
    
    for (int i = 0; i < n; i++) {
       
        if (i % 2 == 0) {
            sum += term;            
        } else {
            sum -= term;            
        }

        int power_step = 2 * i + 2;
        term = term * x * x / (power_step * (power_step + 1));
    }
    
    return sum; 
}
*/


double taylor_sine(double x, int n) {
    double svar = 0.0; // vores resultat. starter ved nul
    double term = x; //første term er bare lig x
    double x2 = x * x;

    assert(n >= 0);

     svar += term; //tilføjer nuværende resultat (første term er x)
     //næste term (som vi så skal tilføje til svar)

    term *= -x2 / ((2*i+2)*(2*i+3));
    /* Vi tilføjer til termet næste term.
    x2 vil altid være det relevante at gange på da taylor rækken går op med 2 */
    }

    return svar;
   
}





/*
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

*/



