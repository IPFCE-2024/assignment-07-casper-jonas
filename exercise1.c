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
double taylor_sine(double x, int n) {
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

/*int main() { //til at tjekke koden, skal skrives i en seperat hvor at vi bruger library
    double x;
    int n;


    printf("Indtast x: ");
    scanf("%lf", &x); //lf fordi double
    printf("Indtast antal termer n: ");
    scanf("%d", &n); //d fordi int

    double result = taylor_sine(x, n); //kalder funktion
    double reel_result = sin(x);
    double difference = fabs(result - reel_result);

    printf("\n Taylor-sin(%g, %d)            = %.10f\n", x, n, result); 
    printf("\n Reele resultat til sin(%g)       = %.10f\n", x, reel_result);
    printf("\nForskellen mellem Talyor og reele = %.10f\n", difference);
    printf("\n");
    return 0;
}
    */

//TEST 1: med x = 2 og n = 5
/* 
Taylor-sin(2, 5)            = 0.9093474427

Reele resultat til sin(2)       = 0.9092974268

Forskellen mellem Talyor og reele = 0.0000500159
*/


//TEST 2: med x = 3 og n = 10 
/* 
Taylor-sin(3, 10)            = 0.1411200079

Reele resultat til sin(3)       = 0.1411200081

Forskellen mellem Talyor og reele = 0.0000000002

*/

//TEST 3: med x = 3.14 og n = 10
/* 
Taylor-sin(3.14, 10)            = 0.0015926524

Reele resultat til sin(3.14)       = 0.0015926529

Forskellen mellem Talyor og reele = 0.0000000005
*/





//svar på spørgsmål C:

//Jo flere termer (n) vi bruger i Taylor-rækken, desto mere præcis bliver vores tilnærmelse af sin(x).
//Dette skyldes, at Taylor-rækken konvergerer mod den faktiske værdi af funktionen, når antallet af termer øges.
//For små værdier af n kan tilnærmelsen være ret unøjagtig, især for større værdier af x.
//Når n øges, bliver forskellen mellem Taylor-tilnærmelsen og den faktiske værdi af sin(x) mindre, hvilket resulterer i en mere nøjagtig beregning.

//ved intervalllet "[-pi & pi]" vil Taylor-rækken generelt give en god tilnærmelse af sin(x), især når n er tilstrækkeligt stort.
//hvis vores X-værdi ligger tæt på 0, vil Taylor-rækken konvergere hurtigere, og vi vil opnå en nøjagtig tilnærmelse med færre termer

/*
Taylor-sin(3.14, 5)                = 0.0084798306

Reele resultat til sin(3.14)       = 0.0015926529

Forskellen mellem Talyor og reele  = 0.0068871777
*/

/*
Taylor-sin(-3.14, 5)                = -0.0084798306

Reele resultat til sin(-3.14)       = -0.0015926529

Forskellen mellem Talyor og reele   = 0.0068871777
*/
