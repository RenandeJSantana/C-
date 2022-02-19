// 1.ª) Faça um programa que leia dois valores e informe a média entre eles. (use float como tipo de dado). 

#include <iostream>
#include<stdlib.h>
using namespace std; 

int main() 
{ 
 float v1, v2, m; 
 system("CLS"); 
 cout<< "Valor 1:";
 cin >>v1; 
 cout <<"Valor 2:"; 
 cin>>v2; 
 m=(v1+v2)/2; 
 cout <<"Media=" << m << endl; 
 system("PAUSE"); // opcional
 return EXIT_SUCCESS; //pode ser return 0;
}

// 2.ª) Faça um programa que leia uma temperatura em graus Centígrados e apresente-a convertida em graus Fahrenheit. A fórmula de conversão é: F = (9 * C + 160) / 5, onde F é a temperatura em Fahrenheit e C em graus Centígrados.

#include <iostream>
#include <stdlib.h>
using namespace std; 

int main() 
{ 
 float C, F; 
 cout<< "Insira o valor da temperatura em graus Centigrados: ";
 cin >>C; 
 F = (9 * C + 160)/5; 
 cout <<"A temperatura em Fahrenheit eh = " << F << endl; 
 return EXIT_SUCCESS;
}

// 3.ª) Calcular e apresentar o valor do volume de uma lata de óleo, utilizando a fórmula: VOLUME = 3.14159 * R2 * ALTURA.

#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std; 

int main() 
{ 
 float r, h, V; 
 cout<< "Insira o valor do raio da lata de oleo: ";
 cin >>r; 
 cout<< "Insira o valor da altura da lata de oleo: ";
 cin >>h; 
 V = 3.14159 * pow(r,2) * h; 
 cout <<"O volume da lata de oleo eh = " << V << endl; 
 return EXIT_SUCCESS;
}

// 4.ª) Faça um programa que leia 5 valores e informe o valor do maior. 

#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std; 

int main() 
{ 
 float n1, n2, n3, n4, n5; 
 cout << "Insira 5 numeros: ";    cin >> n1 >> n2 >> n3 >> n4 >> n5;
 
 if(n1 >= n2 && n1 >= n3 && n1>= n4 && n1>= n5){
    cout << "O maior numero =  " << n1;    
	}
 if(n2 >= n1 && n2 >= n3 && n2>= n4 && n2>= n5){
    cout << "O maior numero =  " << n2;    
	}
 if(n3 >= n1 && n3 >= n2 && n3 >= n4 && n3>= n5){     
    cout << "O maior numero =  " << n3;   
	}		    
 if(n4>= n1 && n4>= n2 && n4>= n3 && n4>= n5){
    cout << "O maior numero =  " << n4;
 	}	   
 if(n5>= n1 && n5>= n2 && n5>= n3 && n5>= n4){
    cout << "O maior numero =  " << n5;
 	}	
return EXIT_SUCCESS;
}

// 5.ª) Apresentar todos os valores numéricos inteiros ímpares situados na faixa de 0 a 20.

#include <iostream>
#include <stdlib.h>

using namespace std; 

int main() 
{
 int i=1;
 while (i<=20)
 {
     if(i%2){
    cout << i << endl;
    }
     i++;
 }
 return 0;
}

// 6.ª) Faça um programa que apresente o total da soma obtido dos cem primeiros números inteiros. (1+2+3+4+......+100)

#include <iostream>
#include <stdlib.h>

using namespace std; 

int main() 
{
 int i=1, soma = 0;
 while (i<=100)
 {
    soma = soma + i;
     i++;
 }
 cout << soma << endl;
 return 0;
}

// 7.ª) Faça um programa que apresente a série de Fibonacci até o décimo quinto termo. A série é formada pela seqüência: 1,1,2,3,5,8,13,21,34,....,etc.

#include <iostream>
#include <stdlib.h>

using namespace std; 

int main() 
{
 int i=1, soma=0, fb1=1, fb2=0 ;
 while (i<=15)
 { 
    soma = fb1 + fb2;
    fb1 = fb2;
    fb2 = soma;
    cout << soma << endl;
    i++;
 }
 return 0;
}

// 8.a.) . Faça um programa que leia 15 valores e informe o valor da diferença entre a média e o maior valor.

#include <iostream>
#include<stdlib.h>
#include<cstdlib>
 
using namespace std; 

int main() 
{ 
 int i, vl[15], med, soma, calc1=0, maior=0;
 for (i=0;i<15;i++){
     cout << "Insira o " << i + 1 << "o valor: "; cin >> vl[i];
     soma = calc1 + vl[i];
     calc1 = calc1 + vl[i];
     
     if(vl[i]>maior)
     maior = vl[i];
}
med = soma/i;
cout <<"Media eh igual a =" << med << endl;
cout <<"O maior numero eh =" << maior << endl;
cout <<"A diferenca entre eles eh =" << maior-med << endl;
return EXIT_SUCCESS;
}

