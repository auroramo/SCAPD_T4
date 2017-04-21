#include <math.h>

double a=3.14; double b=6.34; double c=-3.03;
long i;

void main() {
    producto(); producto(); producto();
    division(); division();
} 

producto() {
    for (i=0; i<50000000; i++) c=a*b;
}

division() {
    for (i=0; i<30000000; i++) c=a/b;
}