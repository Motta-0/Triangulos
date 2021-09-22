#include <iostream>
#include <string>
#include <math.h>

using namespace std;


class Triangulos
{
    private:
    float BASE,ALTURA,PERIMETRO,AREA,Hipo;

    public:

    //static float Comparar_area;

    //Construtor
    Triangulos(float B, float Al)
    {
        BASE = B;
        ALTURA = Al;
    }

    //Contrutor 2
    Triangulos(float B , float Al, float A)
    {
      BASE=B;
      ALTURA=Al;
      AREA=A;
    }

    float perimetro( float B, float Al, float Hipo)
    {
      float P;
        P = B+Al+Hipo;

        return (P);
    }

    float area( float B, float Al)
        {
          float A;
        A = (B*Al)/2;

      return(A);
    }

    float hipotenusa(float B, float Al)
    {
        Hipo = sqrt((pow(B,2) + pow(Al,2)));

        return(Hipo);
    }

    static float Comparar_area(float A1, float A2)
    {
        if(A1 > A2)
            cout << " do primeiro " << A1 << "uA\n\n";
        else
            cout << " do segundo " << A2 << "uA\n\n";
    }

};
