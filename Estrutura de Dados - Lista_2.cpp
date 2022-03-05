/*
1.ª) Dados dois números naturais A e B, calcular o MDC entre A e B através do processo e exemplo: 
• Para A=80 e B=112:
1. Dividir o número maior pelo menor: 112 dividido por 80 -> quociente 1 e resto 32;
2. Não dando resto zero, dividir o divisor pelo resto da divisão anterior: 80 dividido por 32 -> quociente 2 e resto 16;
3. Prosseguir com as divisões até obter resto zero.
32 dividido por 16 ->quociente 2 e resto 0.
Portanto, o MDC(80,112) = 16.
*/

#include <iostream> 
#include <cstdlib> 

using namespace std; 

int main() 

{
    int a,b,mdc,maior,menor,resto=100;
    cout<< "Insira o valor de a: ";
    cin>>a;
    cout<<  "Insira o valor de b: ";
    cin>>b;
    
    if (a>b) 
    {
    maior=a;
    menor=b;
    }
    else
    {
    maior=b;
    menor=a;
    }
    while (resto!=0)
    {
    mdc = menor;
    resto = maior%menor;
    maior = menor;
    menor = resto;
    }
    cout << "O MDC(" << a <<","<< b << "): " << mdc;
}

/*
2.ª) Dado um número real X e um número natural K, calcular a potência X elevado a K através de produtos sucessivos.
x^k = x.x.x.x. ...... x
Obs: independente do valor de k, para x=0 ou 1 o resultado é imediato, isto é, 0 e 1.
*/

#include <iostream> 
#include <cstdlib>
#include <cmath> 

using namespace std; 

int main() 

{
    int k;
    float x, r;
    
    cout<< "Insira o valor de x: ";
    cin>>x;
    cout<<  "Insira o valor de k: ";
    cin>>k;
    
    r=pow(x,k);
    
    cout<<r<<endl;
    return EXIT_SUCCESS;
}

/*
3.ª) Efetuar o cálculo da quantidade de litros de combustível gastos em uma viagem, utilizando-se um automóvel que faz “x” km/l. Para obter o cálculo, o usuário deverá 
fornecer o tempo gasto na viagem e a velocidade média durante a mesma. Desta forma será possível obter a distância percorrida com a fórmula: DISTÂNCIA= TEMPO * 
VELOCIDADE (utilizar uma função). Tendo o valor da distância, basta calcular a quantidade de litros de combustível utilizada na viagem com a fórmula: 
LITROS_USADOS=DISTÂNCIA / “x” (através de função). O programa deverá apresentar os valores da velocidade média, tempo gasto na viagem, a distância percorrida e a 
quantidade de litros utilizada na viagem.
*/

#include <iostream> 
#include <cstdlib>
#include <cmath> 

using namespace std; 
 
int main() 

{
  float comb, dist,temp,vel,combUse;

    cout<< "Insira o valor de Km/l: ";
    cin>>comb;
    cout<<  "Insira o valor de tempo gasto em horas: ";
    cin>>temp;
    cout<<  "Insira o valor da velocidade media: ";
    cin>>vel;
    
    dist=temp*vel;
    combUse= dist/comb;
    
    cout<< "Velocidade media: "<< vel<< " km/h"<<endl;
    cout<< "Tempo gasto na viagem: " <<temp<<" h"<<endl;
    cout<< "Distancia percorrida: "<<dist<<" km"<<endl;
    cout<< "Quantidade de Litros utilizado: "<<combUse<<" l"<<endl;
    
    return EXIT_SUCCESS;
}
