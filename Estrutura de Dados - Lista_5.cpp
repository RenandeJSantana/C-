/*
1.ª) Criar um programa em C++ que apresente as operações básicas da estrutura de dados Pilha, da seguinte maneira: 

Menu de opções 
1. Inserir um número inteiro na Pilha 
2. Remover um elemento da Pilha 
3. Mostrar o elemento do topo da Pilha 
4. Mostrar os elementos da Pilha 
5. Sair 

Obs.: Utilizar a instrução Switch para criar o menu. 
*/ 

#include <iostream> 
#include <Pilha.h> 
#include <stdlib.h> 

using namespace std; 

int main() 
{ 
struct Pilha P; 
struct Pilha P2; 
IniPilha(&P); 
IniPilha(&P2); 
int elem,op,x,i,y; 
op=0; 

/*Loop principal: para sair escolher opcao 5*/ 
while (op!=5) 
	{ 
	op=0; 
	/*Desenhando o menu principal*/ 
	system("CLS"); 
	cout<<"                     Pilha Circular  \n\n\n"; 
	cout<<"\n                (1) - Inserir um numero inteiro na Pilha"; 
	cout<<"\n                (2) - Remover um elemento da Pilha"; 
	cout<<"\n                (3) - Mostrar o elemento do topo da Pilha"; 
	cout<<"\n                (4) - Mostrar os elementos da Pilha"; 
	cout<<"\n                (5) - Para SAIR"; 
	cout<<"\n                Digite sua opcao: "; 
	cin>>op; 

	/*recebendo a opção até que seja fornecida uma válida*/ 
	while (op<1 || op>5) 
		{ 
		cin>>op; 
		} 

	/*Escolha*/ 
	switch (op) 
		{ 
		case 1: 

		if (pilhacheia(&P)==1) 
			{ 
			cout <<"A Pilha está cheia!!"; 
			} 
		else 
			{ 
			system("CLS"); 
			cout<<"Entre com um valor : "; 
			cin>>elem; 

			//iniPilha(&P,elem); 
			Push(&P,elem); 
			} 
		break; 
		
		case 2: 

		if (pilhavazia(&P)==1) 
			{ 
			cout <<"A Pilha esta vazia!!";
			cout << endl; 
			system("PAUSE"); 
			} 
		else 
			{ 
			x=Pop(&P); 
			cout <<"Valor removido " << x; 
			cout << endl;
			system("PAUSE"); 
			} 
		break; 

		case 3: 

		if (pilhavazia(&P)==-1) 
			{ 
			cout <<"A Pilha está vazia!!"; 
			system("PAUSE"); 
			} 
		else 
			{ 
			// y=Push(&P); /*armazena o índice do primeiro elemento da pilha*/ 
			// while (!pilhavazia(&P)) 
			//{ 
			y=Top(&P); 
			cout  << "O valor do topo eh " << y;
			cout << endl; 
			} 
		//y= Top(&P); /*retorna para o primeiro elemento da pilha*/ 
		system("PAUSE"); 
		break; 

		case 4: 

		P2=P;   

		while (!pilhavazia(&P2)) 
			{ 
			x=Pop(&P2); 
			cout <<x; 
			cout << endl;
			//int Pop(struct Pilha*ps) 
			//if (pilhacheia(&P2)==1) 
			//{ 
			//cout <<"A Pilha está cheia!!"; 
			//} 
			//else 
			//{ 
  			// while (!pilhavazia(&P2))
			//{ 
			//i=Pop(&P2); 
			//cout <<i;}  
			//cout<<"Exibe a Pilha : "; 
			//cout<< &P; 
			} 
		system ("Pause"); 
		break; 

		case 5: 

		break; 
		} 
	} 
return 0; 
} 
