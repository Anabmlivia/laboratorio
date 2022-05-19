#include <stdio.h>
#include <stdlib.h>

/*EXERCICIO1

int main()
{
     int x; //declara a variavel
     printf ("Digite um numero inteiro: ");
     scanf ("%d",&x); //guarda a variavel
     printf("O valor que voce digitou e: %d", x);

     return 0;
}
*/


//EXERCICIO2

/*int main ()
{
     float x;
     printf ("Digite um numero real: ");
     scanf ("%f", &x);
     printf ("O valor que voce digitou eh: %.2f", x);

     return 0;

}
*/

//EXERCICIO3

/*int main ()
{
     int x, y, z;
     printf ("Digite tres valores inteiros: ");
     scanf ("%d%d%d", &x,&y,&z);
     printf ("A soma dos valores eh:%d", x+y+z);

     return 0;
}
*/

//EXERCICIO4

/*int main ()
{
     float x;
     printf ("Digite um numero real: ");
     scanf ("%f", &x);
     printf (" O quadrado desse numero eh:%.2f", x*x);

     return 0;
}
*/

//EXERCICIO5

/*int main ()
{
     float x;
     printf ("Digite um numero real: ");
     scanf ("%f", &x);
     printf ("A quinta parte desse numero eh:%.2f", x/5);

     return 0;
}
*/

//EXERCICIO6

/*int main ()
{
     double x, f;
     printf ("Digite a temperatura em graus Celsius: ");
     scanf ("%lf", &x);
     f=x*(9.0/5.0)+32.0;
     printf ("A temperatura %.2lf em Celsius eh igual a %.2lf em
Fahrenheit", x,f);

     return 0;
}
*/


//EXERCICIO7

/*int main ()
{
    double f, c;
    printf ("Digite a temperatura em graus Fahrenheit: ");
    scanf ("%lf", &f);
    c=5.0*(f-32.0)/9.0;
    printf ("A temperatura %.2lf em Fahrenheit eh igual a %2.lf em Celsius", f, c);

    return 0;
}
*/

//EXERCICIO8

/*int main ()
 {
     double k, c;
     printf ("Digite a temperatura em graus Kelvin: ");
     scanf ("%lf", &k);
     c=k-273.15;
     printf ("A temperatura %2.lf em Kelvin eh igual a %2.lf em graus Celsius", k, c);

     return 0;
 }
 */

 //EXERCICIO9

 /*int main ()
 {
     double c, k;
     printf ("Digite a temperatura em graus Celsius: ");
     scanf ("%lf", &c);
     k=c+273.15;
     printf ("A temperatura %2.lf em Celsius eh igual a %2.lf em graus Kelvin", c, k);



     return 0;
 }
*/

//EXERCICIO10

/*int main ()
{
   double k, m;
   printf ("Digite uma velocidade em km/h: ");
   scanf ("%lf", &k);
   m=k/3.6;
   printf ("A velocidade %2.lf em km/h eh igual a %2.lf em m/s", k, m);

   return 0;
}
*/

//EXERCICIO11

/*int main ()
{
    double m, k;
    printf ("Digite uma velocidade em m/s: ");
    scanf ("%lf", &m);
    k=m*3.6;
    printf ("A velocidade %2.lf em m/s eh igual a %2.lf em Km/h", m, k);

    return 0;
}
*/


//EXERCICIO12


/*int main ()
{
    double m, k;
    printf ("Digite uma distancia em milhas: ");
    scanf ("%lf", &m);
    k=1.61*m;
    printf ("A distancia %2.lf em milhas eh igual a %2.lf em quilometros", m, k);


    return 0;
}
*/

//EXERCICIO13

/*int main ()
{
    double k, m;
    printf ("Digite uma distancia em quilometros: ");
    scanf ("%lf", &k);
    m=k/1.61;
    printf ("A distancia %2.lf em quilometros eh igual a %2.lf em milhas", k, m);

    return 0;
}
*/

//EXERCICIO14

/*int main ()
{
    double g, r;
    printf ("Digite um angulo em graus: ");
    scanf ("%lf", &g);
    r=g*3.141592/180;
    printf ("O angulo %2.lf em graus eh igual a %2.lf covertido em radianos", g, r);

    return 0;
}
*/

//EXERCICIO15

/*int main ()
{
    float r, g;
    printf ("Digite um angulo em radianos: ");
    scanf ("%f", &r);
    g=r*180/3.141592;
    printf ("O angulo %2.lf em radianos eh igual a %2.lf em graus", r, g);


    return 0;
}
*/

//EXERCICIO16

/*int main ()
{
    float p, c;
    printf ("Digite um comprimento em polegadas: ");
    scanf ("%f", &p);
    c=p*2.54;
    printf ("0 valor %2.lf em polegadas eh igual a %2.lf em centimetros", p, c);

    return 0;
}
*/

//EXERCÍCIO17

/* Int main ()
{  float c,p;
   printf ("Digite um comprimento em centímetros: ");
   scanf ("%f", &c);
   p=c/2.54;
   printf ("O valor %2.lf em centímetros eh igual a %2.lf em polegadas", c, p);

   return 0;
}
*/

//EXERCÍCIO18

/*int main ()
{  double m, l;
   printf ("Digite um valor em metros cúbicos: ");
   scanf ("%lf", &m);
   l=1000*m;
   printf ("O valor %2.lf em metros cúbicos eh igual %2.lf em litros" m, l);

return 0;
}
*/

//EXERCÍCIO19

/*int main ()
{  double l,m;
   printf ("Digite um valor em litros: ");
   scanf ("%lf", &l);
   m=l/1000;
   printf ("O valor %2.lf em litros eh igual a %2.lf em metros cubicos", l, m);

   return 0;
}
*/

//EXERCÍCIO20

/*int main ()
{  double k, l;
   printf ("Digite um valor de massa em quilogramas: ");
   scanf ("%lf", &k);
   l=k/0.45;
   printf ("O valor %2.lf em quilogramas eh igual a %2.lf em libras", k, l);

   return 0;
}
*/

//EXERCÍCIO21

/* int main ()
{  double l, k;
   printf ("Digite um valor de massa em libras: ");
   scanf ("%lf", &l);
   k=l*0,45;
   printf ("O valor %2.lf em libras eh igual a %2.lf em quilogramas", l, k);

   return 0;
}
*/

//EXERCÍCIO22

/* int main ()
{  double j, m;
   printf ("Digite um valor de comprimento em jardas: ");
   scanf ("%lf", &j)
   m= 0.91*J,
   printf ("O valor %2.lf em jardas eh igual a %2.lf em metros", j, m);

   return 0;
}
*/

//EXERCÍCIO23

/*int main ()
{  double m, j;
   printf ("Digite um valor de comprimento em metros: ");
   scanf ("%lf", &m);
   j=m/0.91;
   printf ("O valor %2.lf em metros eh igual a %2.lf em jardas", m, j);

   return 0;
}
*/

//EXERCÍCIO24

/* int main ()
{  double m, a;
   printf ("Digite um valor em metros quadrados: ");
   scanf ("lf", &m);
   a= m* 0.000247
   printf ("O valor %2.lf em metros quadrados eh igual a %2.lf em acres", m, a);

   return 0;
}
*/

//EXERCÍCIO25

/* int main ()
{  double a, m;
   printf ("Digite um valor de área em acres: ");
   scanf ("%lf", &a);
   m = a*4048.58
   printf ("O valor de area %2.lf em acres eh igual a %2.lf em metros", a, m);

   return 0;
}
*/

//EXERCÍCIO26

/* int main ()
{ double m, h;
  printf ("Digite um valor de area em metros quadrados: ");
  scanf ("%lf", &m);
  h= m*0.0001
  printf ("O valor de area %2.lf em metros quadrados eh igual a %2.lf em hectares");

   return 0;
}
*/

//EXERCÍCIO27

/*int main ()
{
    double h, m;
    printf ("Digite um valor de area em hectares: ");
    scanf ("%lf", &h);
    m=h*10000;
    printf ("O valor de area %2.lf em hectares eh igual a %2.lf em metros quadrados", h, m);

    return 0;
}
*/

//EXERCICIO28

/*int main ()
{
    float valor1, valor2, valor3, r;
    printf ("Digite o valor 1: ");
    scanf ("%f", &valor1);
    printf ("Digite o valor 2: ");
    scanf ("%f", &valor2);
    printf ("Digite o valor 3: ");
    scanf ("%f", &valor3);
    r=valor1+valor2+valor3*valor1+valor2+valor3;
    printf ("A soma dos quadrados dos tres valores eh igual a %2.lf", r);

    return 0;
}
*/

//EXERCICIO29

/*int main ()
{
    float nota1, nota2, nota3, nota4, r;
    printf ("Digite sua nota 1: ");
    scanf ("%f", &nota1);
    printf ("Digite sua nota 2: ");
    scanf ("%f", &nota2);
    printf ("Digite sua nota 3: ");
    scanf ("%f", &nota3);
    printf ("Digite sua nota 4: ");
    scanf ("%f", &nota4);

    r=(nota1+nota2+nota3+nota4)/4;

    printf ("O resultado final eh %2.lf", r);

    return 0;
}
*/

//EXERCICIO30

/*int main ()
{
    float r, d;
    printf ("Digite um valor em real: ");
    scanf ("%f", &r);
    d=r*4.98;
    printf ("O valor %2.lf em real eh igual a %2.lf em dolares", r, d);

    return 0;
}
*/

//EXERCICIO31

/*int main ()
{
  int x;

  printf ("Digite um numero inteiro: ");
  scanf ("%d", &x);
  printf ("O antecessor de %d eh igual a %d\n", x, (x-1));
  printf("O sucessor   de %d eh igual a %d ", x, (x+1));

return 0;
}
*/

//EXERCICIO32

/*int main ()
{
 int x, t, d;
printf ("Digite um número inteiro: ");
scanf ("%d", &x);
t=1+x*3;
d=
printf ("%d %d", t, d);

return 0;
}
*/

//EXERCÍCIO33

/*int main ()
{
float l, a;
printf ("Digite o tamanho do lado do quadrado: ");
scanf("%f",&l);
a = l*l;
printf("A area eh igual a %2.lf", a);

return 0;
}
*/

//EXERCÍCIO34

/*int main ()
{
 float r, a;
  printf ("Digite o valor do raio de um circulo: ");
  scanf ("%f", &r);

  a=3.141592*(r*r);

  printf ("A area do circulo eh %2.lf", a);

return 0;
}
*/

//EXERCÍCIO35

/*int main ()
{
  float a1, b2, h;
    printf ("Digite o valor do cateto a:\n");
    scanf ("%f", &a1);
    printf ("Digite o valor do cateto b:\n");
    scanf ("%f", &b2);

  h=((a1* a1) + (b2* b2));

    printf ("A hipotenusa dos valores eh = %.2f " , h);

    return 0;
}
*/

//EXERCICIO36

/*int main ()
{
    float a, r, v;
    printf ("Digite a altura de um cilindro: \n");
    scanf ("%f", &a);
    printf ("Digite o raio de um cilindro: ");
    scanf ("%f", &r);
    v=3.141592*(r*r)*a;
    printf ("O volume do cilindro eh %2.lf", v);

    return 0;
}
*/

//EXERCICIO37

/*int main ()
{
  int v, d, f;
    printf ("Digite o valor de um produto: ");
    scanf ("%d", &v);

    d=v*0.12;
    f=v-d;

    printf ("O valor com desconto eh %d", f);

    return 0;
}
*/

//EXERCICIO38

/*int main ()
{
    float s, d, f;
    printf ("Digite seu salario: ");
    scanf ("%f", &s);

    d=s*0.25;
    f=s+d;

    printf ("Seu salario com aumento eh: %2.lf", f);

    return 0;

}
*/

