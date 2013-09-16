#include <iostream>
#include <math.h>
using namespace std;

/* This program solves the general one-dimensional Poisson equation.
Using Dirichlet boundry condition, rewriting it to a set of linear equations.*/

// Deffining variables.

int main() {

    int n;
    cout <<"Give an integer: ";
    cin >> n;
    double a[n];
    int i;

    for (i=0; i < n; i++) {
        a[i] = i;
        cout <<"Values " << a[i] << endl;
    }

}
