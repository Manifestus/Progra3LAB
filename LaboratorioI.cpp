#include<iostream>

using namespace std;
using std::cout;
using std::cin;
using std::endl;

int Factorial(int);

int main(int argc, char const *argv[])
{

	int opc=0;
	int resp;
	int NumeroFactorial = 0;
	int NumeroResFactorial = 0;
	int NumeroFinalFactorial = 0;
	int NumeroStatico=0;
	cout<<"Ingrese su opcion: "<<endl;
	cout<<"1. Factorial"<<endl;
	cout<<"2. Divisores"<<endl;
	
		while(NumeroFactorial <= 10000)
		{

			while( 0 <= 1 )
				{
					NumeroStatico = NumeroFactorial;
					NumeroResFactorial = NumeroFactorial%10;
					NumeroFinalFactorial = NumeroFinalFactorial +  Factorial(NumeroResFactorial);
					NumeroFactorial /= 10;

				}

				if(NumeroFinalFactorial == NumeroStatico)
				{
					cout<<NumeroStatico;
				}
						
				NumeroFactorial++;
		}
				
	}




int Factorial(int Numero)
{
	if(Numero == 0 || Numero == 1)
	{
		return 1;

	} else
	{
		return Numero * Factorial(Numero - 1);
	}
}



