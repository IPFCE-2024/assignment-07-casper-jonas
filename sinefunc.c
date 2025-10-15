#include <stdio.h>
#include <math.h>
#include <assert.h>


double taylor_sine(double x, int n) {
    double svar = 0.0; // vores resultat. starter ved nul
    double term = x; //første term er bare lig x
    double x2 = x * x;

    assert(n >= 0);

    for (int i = 0; i < n; i++) { //Vi kører for loopet indtil at i (antal gange kørt) er lig n.

    svar += term; //tilføjer nuværende resultat (første term er x)
    // næste term (som vi så skal tilføje til svar)

    term *= -x2 / ((2*i+2)*(2*i+3));
    /* Vi tilføjer til termet næste term.
    x2 vil altid være det relevante at gange på da taylor rækken går op med 2 */
    }

    return svar;
   
}

int main() { //til at tjekke koden, skal skrives i en seperat hvor at vi bruger library
    double x;
    int n;

    printf("Indtast x: ");
    scanf("%lf", &x); //lf fordi double
    printf("Indtast antal termer n: ");
    scanf("%d", &n); //d fordi int

    double result = taylor_sine(x, n); //kalder funktion

    printf("\nsin(%.6f) ≈ %.10f (med %d termer)\n", x, result, n); //her er 10f, 6f, antal digits i svar.

    return 0;
}
