/*
1.ª) Mostre a situação da pilha P, inicialmente vazia, após a execução de cada uma das operações a seguir:  

Push(P,a); 
Push(P,b);  
Push(P,c);  
Push(P,Top(P)); 
Push(P,Pop(P));  
Pop(P); Push(P,e); 
Pop(P); 
 
Operação 	Estado 	Resultado 
---------- 	    P: [ ] 	        ----------- 
Push(P,a) 	    P: [ a ] 	      ----------- 
Push(P,b) 	    P: [ b,a ] 	    ----------- 
Push(P,c) 	    P: [ c,b,a ]  	----------- 
Push(P,Top(P)) 	P: [ c,c,b,a ] 	c 
Push(P,Pop(P)) 	P: [ c,c,b,a ] 	c 
Pop(P)        	P: [ c,b,a ]  	c 
Push(P,e)     	P: [ e,c,b,a ] 	----------- 
Pop(P) 	        P: [ c,b,a ]   	e 
*/

// 2.ª) Codifique um programa em C++ que reverta uma série de números até que 999 seja digitado. Teste o seu programa com a série 1,3,5,7,9,2,4,6,8. 
 
#include <iostream>
#include <Pilha.h>
  
using namespace std;
 
int main()
{
struct Pilha P;
IniPilha(&P);
int i,x;
  
while(i!=999)
  {
  cout <<"Digite um numero:" <<endl;
  cin >> i;
  Push (&P,i);
  }

Pop (&P);
cout << "Sequencia Desempilhada";
cout << endl;
    
while (!pilhavazia(&P))
  {
  x=Pop(&P);
  cout <<x;
  cout << endl;
  }
}

//3.ª) Codifique um programa em C++ que transforme um número decimal em um número octal. (Dividir por 8)

#include<iostream>
#include <PILHA.H>
#include <stdlib.h>
 
using namespace std;
 
int main()
{
struct Pilha P1;
IniPilha(&P1);
int x,z,w;
cout << "Digite um numero inteiro decimal:" <<endl;
cin >> x;
z = x % 8; //resto da divisão?
w = x / 8; //inteiro da divisão?
Push(&P1,z); //empilha o resto?

while (w != 0)    //inteiro da divisão?
	{
	x = w;
 	z = x % 8;
 	w = x / 8;
	Push(&P1, z);
    }
 
while (! pilhavazia(&P1))
	{
	x = Pop(&P1);
	cout << x ;
	}
 
cout << endl;
system("PAUSE");
return 0;
}

//4.ª) Codifique um programa em C++ que transforme um número decimal em um número hexadecimal. Dica: Se o resto for 10,11,12, 13, 14 ou 15, imprima, respectivamente, A,B,C,D,E ou F. (Dividir por 16 e transformar números em letras)
 
#include<iostream>
#include <PILHA.H> 
#include <stdlib.h>  
 
using namespace std;
 
int main()
{
struct Pilha P1;
IniPilha(&P1); 
int x,z,w;
cout << "Digite um numero inteiro decimal:" <<endl;
cin >> x;
z = x % 16; //resto da divisão?
w = x / 16; //inteiro da divisão?
Push(&P1,z); //empilha o resto?
 
while(w!= 0)    //inteiro da divisão?
	{
	x = w;
	z = x % 16;
	w = x / 16;
	Push(&P1,z); //empilha o resto?
	}
 
while (!pilhavazia(&P1))
	{
	x = Pop(&P1);
	if( x==15)cout << "F";
	else if(x==14)cout << "E" ;
	else if(x==13)cout << "D";
	else if(x==12)cout << "C" ;
	else if(x==11)cout << "B" ;
	else if(x==10)cout << "A" ;
	else cout<< x ;
	}
 
cout << endl;
system("PAUSE");
return 0;
}

//5.ª) Codifique um programa em C++ que leia uma palavra e a imprima de forma invertida. Por exemplo: exercício, deverá ser impresso: oicícrexe.
//ler um palavra e exibi-la de forma invertida

#include <iostream>
#include <Pilha.h>
 
using namespace std;
 
int main()
{
struct Pilha P;
IniPilha(&P);
char palavra[10];
int t;  //tamanho da palavra (qtos caracteres ela tem?)
int i;  //contador do laço
char x;  //armazena apenas 1 caracter
cout<< "Digite uma palavra: ";
//gets(palavra);   //entrada de dados
cin>>palavra;
t= strlen(palavra);  //strlen conta a qtde caracteres
//empilhar os caracteres através do laço for
for (i=0;i<t;i++)
	{
	Push(&P,palavra[i]);
	}
 
cout << endl;
cout << "A palavra " << palavra << " invertida = " ;

//desempilhar até que a Pilha fique vazia
while (!pilhavazia(&P))
	{
	x=Pop(&P);
	cout <<x;
	}
 
cout << endl;
return 0;
}

/*
6.ª) Uma string é considerada palíndroma se ela pode ser lida da esquerda para a direita ou da direita para a esquerda com o mesmo significado. 
Neste caso, não podemos considerar acentuações, letras maiúsculas ou minúsculas, os espaços e os caracteres especiais. 
A seguir estão alguns exemplos:
Radar
Subi no Onibus
Go dog
Faça um programa em C++ para verificar se uma expressão é ou não palíndroma.
*/
 
 
#include<iostream>
#include <PILHA.H> 
#include <stdlib.h>  
 
using namespace std;
 
int main()
{
struct Pilha P1;
IniPilha(&P1); 
char palavra [30];
int t;  //tamanho da palavra (qtos caracteres ela tem?)
int i;  //contador do laço
char x;  //armazena apenas 1 caracter
//char z [30]; // palavra invertida
string z;
cout<< "Digite uma palavra: ";
//gets(palavra);   //entrada de dados
cin>>palavra;
t= strlen(palavra);  //strlen conta a qtde caracteres
 
//empilhar os caracteres através do laço for
for (i=0;i<t;i++)
	{
	Push(&P1,palavra[i]);
	}

int c=0;
cout << endl;
cout << "Palavra = " << palavra << " Invertida = " ;

//desempilhar até que a Pilha fique vazia
while (!pilhavazia(&P1))
	{
	x=Pop(&P1);
	//if(x==palavra[i]){
 
	//i++;
	//cout << "E uma palindroma" <<endl;
	//}
	//else
	//        {
	//        cout << "Nao e palindroma"<<endl;
	//        }
	cout <<x;
	//z[c] = x;
	//c++;
	z +=x;
	}

cout << endl;                
cout << endl;
std:: string str(palavra);
 
if(palavra==z)
	{
	cout << "E uma palindroma" <<endl;
	}
else
	{
	cout << "Nao e palindroma"<<endl;
	}
 
return 0;
}
