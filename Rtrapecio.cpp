#include <iostream>
#include <cmath>

double trapecio (double a, double b, double n); //función que aplica el método del trapecio
double funcion (double k); //función que define f(x)

int main(int argc, char *argv[])
{
    //double f = std::atof(argv[1]);
    double a = std::atof(argv[1]); // lee el límite de integración inferior
    double b = std::atof(argv[2]); //lee el límite de integración superior
    double n = std::atof(argv[3]); //lee el número de subintervalos
    double z = 0;
    z = trapecio(a, b, n); // z tiene el valor de la integral numérica
    std::cout << "Área bajo la curva: " << z << std::endl; // imprime el valor de la integral
    return 0;
}

double funcion (double k){
  double l = std::sqrt(k); //define la función x^2
  return l; //devuelve el valor de la función
}

double trapecio (double a, double b, double n){
  double x = (b-a)/n; //define el Ancho de los subintervalos
  double area = 0; //define una variable con el valor de área, y le pone uun valor inicial de 0
  std::cout << "Ancho de los subintervalos: " << x << "\n"; // imprime el Ancho de cada subintervalo
  for(double ii = a; ii<=b; ii+=x) // el for permite realizar el cálculo del área de los trapecios en cada subintervalo
  {
    double hmin = funcion(ii); // altura mínima
    double hmax = funcion(ii+x); // altura máxima
    area += ((hmin+hmax)*x)/2; // cálculo del área del trapecio y actualización del valor del área
  }
  return area; // devuelve el valor final del área
}