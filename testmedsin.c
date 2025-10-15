#include <math.h>
#include <stdio.h>
#include "taylor_sine.h"
#include <assert.h>
#include "exercise1.h"



int main () {
    double x; //definere x og n
    int n;

    printf("Indtast x: "); //scan input
    scanf("%lf", &x); //lf fordi double
    printf("Indtast antal termer n: ");
    scanf("%d", &n); //d fordi int

    assert(n >= 0); //prækonditiongc

    double approksimering = taylor_sine(x, n); //kald på taylor sine funktion
    double akkurat = sin(x); //kald på sin funktion

    printf("sin(x) er akkurat = %.10f\n", akkurat); //skriv sin resultat
    printf("sin(x) er approks = %.10f\n", approksimering); //skriv approks resultat

    return 0;
}

/*
Det vi kan se i koden, med forskellige test, er at jo lavere x er, jo nemmere bliver det at aproksimere det med et ikke ekstremt højt antal rækker.
Eksempel: x = 10, n = 100 giver præcist resultat.
Men også: x = 2, n = 5 perfekt resultat
Men højere x:
x = 20, n = 20 giver en fejl på flere tusinder.

*/