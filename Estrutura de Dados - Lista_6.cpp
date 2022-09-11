/*
1.ª) Suponha a existência de uma pilha de inteiros “s” e uma fila de inteiros “q”. Desenhe a ilustração de s e q depois das seguintes operações: 

Push(s,3) 
Push(s,12) 
Enqueue(q,5) 
Enqueue(q,8) 
x=Pop(s) 
Push(s,2) 
Enqueue(q,x) 
Push(s,x) 
y=Top(s) 
Push(s,y)     
*/
 
/*
2.ª) Considerar o programa de exemplo sobre Filas (menu.cpp) e adicionar: 
a) Uma opção no menu que permita inverter o conteúdo da fila. 
b) Uma opção que retorne o número de elementos existentes na fila circular. 
c) O primeiro elemento da fila.
d) O último elemento da fila.
*/

#include<iostream> 
#include<stdlib.h> 
#include <Fila.h> 
#include <Pilha.h> 

using namespace std; 

int main() 
{ 
 system("CLS"); 
 int elem,op,x,i,y, cont = 0; 
 struct queue q; 
 struct Pilha P1; 
 IniPilha(&P1);  
 inicFila(&q);  /*Inicializa a fila*/ 
 op=0; 
 
 /*Loop principal: para sair escolher opcao 4*/ 
 while (op!=8) 
 { 
  op=0; 
  /*Desenhando o menu principal*/ 
  system("CLS"); 
  cout<<"                     Fila Circular  \n\n\n"; 
  cout<<"\n                (1) - Insere um elemento na Fila"; 
  cout<<"\n                (2) - Remove um elemento da Fila"; 
  cout<<"\n                (3) - Imprime a Fila"; 
  cout<<"\n                (4) - Inverter a Fila"; 
  cout<<"\n                (5) - Retorne o número de elementos existentes na fila circular"; 
  cout<<"\n                (6) - Mostrar primeiro elemento da fila"; 
  cout<<"\n                (7) - Mostrar último elemento da fila"; 
  cout<<"\n                (8) - Para SAIR"; 
  cout<<"\n                Digite sua opcao"; 
  cin>>op; 

  /*recebendo a opção até que seja fornecida uma válida*/ 
  while (op<1 || op>8) 
  { 
   cin>>op; 
  } 
 
  /*Escolha*/ 
  switch (op) 
  { 
   case 1: 
   if (filaCheia(&q)==1) 
   { 
    cout <<"A fila está cheia!!"; 
   } 
   else 
   { 
    system("CLS"); 
    cout<<"Entre com um valor : "; 
    cin>>elem; 
    insFila(&q,elem); 
    Push (&P1,elem); 
    cont = cont + 1; 
   } 
   break; 
  
   case 2: 
   if (filaVazia(&q)==1) 
   { 
    cout <<"A fila está vazia!!"; 
    system("PAUSE"); 
   } 
   else 
   { 
    x=remFila(&q); 
    cout <<"Valor removido " << x; 
    system("PAUSE"); 
   } 
   break; 
    
   case 3: 
   if (filaVazia(&q)==1) 
   { 
    cout <<"A fila está vazia!!"; 
    system("PAUSE"); 
   } 
   else 
   { 
    y=guardainicio(&q); /*armazena o índice do primeiro elemento da fila*/ 
    
    while (!filaVazia(&q)) 
    { 
     x=remFila(&q); 
     cout  << x << " "; 
    } 
    retornainicio(&q,y); /*retorna para o primeiro elemento da fila*/ 
    system("PAUSE"); 
   } 
   break; 
    
   case 4: 
   //Inverter a Fila 
   { 
    //desempilhar atÃ© que a Pilha fique vazia 
    while (!pilhavazia(&P1)) 
    { 
     x=Pop(&P1); 
     cout <<x<<endl; 
    } 
    system("PAUSE"); 
    break; 
   } 
    
   case 5: 
   //Retorne o número de elementos existentes na fila circular 
   { 
    cout << "Tem "<<cont<<" elementos na fila "<<endl; 
    system("PAUSE"); 
    break; 
   } 
  
   case 6: 
   //Mostrar primeiro elemento da fila 
   if (filaVazia(&q)==1) 
   { 
    cout <<"A fila está vazia!!"; 
    system("PAUSE"); 
   } 
   else 
   { 
    y=guardainicio(&q); /*armazena o índice do primeiro elemento da fila*/ 
    x=remFila(&q); 
    cout  << "Primeiro elemento: " << x << " "; 
    system("PAUSE"); 
    retornainicio(&q,y); /*retorna para o primeiro elemento da fila*/ 
    break; 
   } 
    
   case 7: 
   //Mostrar último elemento da fila 
   { 
    //desempilhar até que a Pilha fique vazia 
    //while (!pilhavazia(&P)){ 
    x=Top(&P1); 
    cout <<x; 
    system("PAUSE"); 
    break; 
   } 
    
   case 8: 
   break; 
  } 
 } 
return 0; 
} 
