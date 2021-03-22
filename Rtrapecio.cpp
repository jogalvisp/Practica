#include <iostream>
#include <cmath>

double trapecio (double f, double a, double b, double n);

int main(int argc, char *argv[])
{
    double f = std::atof(argv[1]);
    double a = std::atof(argv[2]);
    double b = std::atof(argv[3]);
    double n = std::atof(argv[4]);
    double z = 0;
    z = trapecio(f, a, b, n);
    std::cout << z << std::endl;
    return 0;
}


double trapecio (double f, double a, double b, double n){
  double x = (b-a)/n;
  std::cout << "Ancho de los subintervalos: " << x << "\n";
  return x;
}