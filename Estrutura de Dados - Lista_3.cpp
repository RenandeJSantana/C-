// 1ª) Criar um programa que permita a entrada de um número inteiro e retorne o seu dobro, através de uma função

#include <cstdlib>
#include <iostream>

using namespace std;

int dobro (int x);

int main(){
	int v;
	system("CLS");
	cout << "Digite o valor:";
	cin>> v;
	cout << "Dobro = " << dobro(v) << endl;
	system("PAUSE");
	return 0;
}

int dobro (int x)
{
	return(x*2);
}

// 2ª) Criar um programa que receba 4 notas e calcule a média aritmética, através de uma função.

#include <cstdlib>
#include <iostream>

using namespace std;

float media (float a, float b, float c, float d);

int main(){
	float p, s, t, q;
	system("CLS");
	cout << "Digite as quatro notas: ";
	cin>> p >> s >> t >> q;
	cout << "A media e = " << media(p,s,t,q) << endl;
	system("PAUSE");
	return 0;
}

float media (float a, float b, float c, float d){
	return((a+b+c+d)/4);
}

// 3ª) Criar um programa que receba 2 valores e calcule o produto através de uma função que retorna valores.

#include <cstdlib>
#include <iostream>

using namespace std;

int produto (int a, int b);

int main(){
	int p, s;
	system("CLS");
	cout << "Digite dois valores para serem multiplicados: ";
	cin>> p >> s;
	cout << "O produto desses valores e = " << produto(p,s) << endl;
	system("PAUSE");
	return 0;
}

int produto (int a, int b)
{
	return(a*b);
}

// 4ª) Criar um programa que receba um grau e o converta para radianos através de uma função.
// Fórmula:  radiano = grau * pi / 180

#include <cstdlib>
#include <iostream>

using namespace std;

float radiano (int a), pi = 3.1415;

int main(){
	int p;
	system("CLS");
	cout << "Digite o angulo: ";
	cin>> p ;
	cout << "O radiano e = " << radiano(p) << endl;
	system("PAUSE");
	return 0;
}

float radiano (int a)
{
	return((a*pi) / 180);
}

/*
5ª) Criar um programa que mostre qual o maior valor entre dois números, 
utilizando uma função do tipo void (que não retorna valores).
*/

#include <cstdlib>
#include <iostream>

using namespace std;

void comp (int a, int b);

int main(){
	int p, s;
	system("CLS");
	cout << "Digite dois valores: ";
	cin>> p >> s;
	comp (p,s);
	system("PAUSE");
	return 0;
}

void comp (int a, int b)
{
	if (a>b)
	{
		cout << "O maior e = " << a << endl;
	} 
	else 
	{
		cout << "O maior e = " << b << endl;	
	}
}

/*
6ª)Criar um programa que receba um número que corresponda a um mês do 1º trimestre e  
escreva o mês correspondente; caso o usuário digite o número fora do intervalo 
 deverá aparecer inválido, mas utilizando uma função do tipo void.
*/
 
#include <cstdlib>
#include <iostream>

using namespace std;

void mes (int a);

int main(){
	int p;
	system("CLS");
	cout << "Escolha um mes do primeiro trimestre (numero): ";
	cin>> p;
	mes (p);
	system("PAUSE");
	return 0;
}

void mes (int a)
{
	if (a==1)
	{
		cout << "O mes eh Janeiro" << endl;
	} 
	if (a==2)
	{
		cout << "O mes eh Fevereiro" << endl;
	}
	if (a==3)
	{
		cout << "O mes eh Marco" << endl;
	}
	if (a!=1 && a!=2 && a!=3)
	{
		cout << "Valor invalido" << endl;	
	}
}

/*
7ª)Criar um programa que retorne o fatorial de um número,  
usando uma função que receba um valor e retorne o fatorial desse valor.
Fatorial de 5 = 5 x 4 x 3 x 2 x 1 = 120
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int fatorial (int a), i, fat=1;

int main(){
	int p;
	system("CLS");
	cout << "Digite um valor: ";
	cin>> p;
	cout << "O fatorial desse valor e = " << fatorial(p) << endl;
	system("PAUSE");
	return 0;
}

int fatorial (int a)
{
	i = a;
	while (i>0)
	{
		fat = fat * i;
		i--;	
	}
	return fat;
}

// 8ª) Criar um programa que verifique se um número é primo ou não, através de uma função. Número primo é divisível somente por 1 e por ele mesmo.

#include <iostream>
using namespace std;

int main ()
{
	int n, primo(int p);
	cout<<"Digite um numero:";
	cin >>n;
	primo (n);
}

int primo (int p)
{
	int i, div=0;
	for(i=2;i<=p/2;i++)
	{
		if(p%i==0)
		{
			div++;
			break;
		}
	}
	if(div==0)
	{
		cout<<"O numero "<<p<<" eh primo"<<endl;
	}
	else
	{
		cout<<"O numero "<<p<<" nao eh primo"<<endl;
		return 0;
	}
}
