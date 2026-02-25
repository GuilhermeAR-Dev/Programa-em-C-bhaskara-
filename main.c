/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,delta,x1,x2, real,ima;
    //float são numeros variaveis = numeros com virgulas e negativos 
    printf("faremos um processo de achar as raizes de uma equação\n do 2º grau ");
    printf ("f(x) = a.x² +bx +c para isso indeique os valores\n");
    scanf ("%f",&a);
    // scanf e para ler os dados digitados colocado no programa
    printf("valor de b:");
    scanf ("%f",&b);
    printf("valor de c:");
    scanf ("%f",&c);
    delta = pow(b,2)-4*a*c;
    if(delta>=0){
        //if literalmente e "se"
                printf ("%f\n", delta);
                x1 = (-b+sqrt(delta))/(2*a);
                x2 = (-b+sqrt(delta))/(2*a);
                printf ("x1 = %f\n", x1);
                printf ("x2 = %f\n", x2);
              
    }
    else{
        // else = senão
        delta = -delta;
        real = -b/(2*a);
        ima = (sqrt (delta)/(2*a));
        printf ("X1 = %f + %f.i", real,ima);
        printf ("X2 = %f - %f.i", real,ima);
        
        printf("delta deu negativo : %f\n", delta);
        
        }

    return 0;
}