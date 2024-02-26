#include <iostream>
#include "pilha.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	pilha pilha1;
	TipoItem item;
	int opcao;
	
	cout << "Program ordenador e gerador de pilha\n";
	
	do{
		cout << "Digite 0 para sair do programa!\n";
		cout<< "Digite 1 para inserir um elemento!\n";
		cout << "Digite 2 para remover um elemento!\n";
		cout << "Digite 3 para ordenar a pilha!\n";
		cout << "Digite 4 para imprimir a pilha!\n";
		
		cin >> opcao;
		
		if(opcao == 1){
			cout << "Digite o elemento a ser inserido: \n";
			cin >> item;
			
			pilha1.push(item);
		}else if(opcao == 2){
			item = pilha1.pop();
		}else if(opcao == 3){
			pilha1.ord();
			cout << "Pilha ordenada: \n";
		}else if(opcao == 4){
			pilha1.print();
		}
	}while(opcao != 0);
	
	return 0;
}
