#include <iostream>
#include "pilha.h"


using namespace std;

		pilha::pilha(){
			tamanho = 0;
			estrutura = new TipoItem[max_itens];
			
		}
		pilha::~pilha(){
			delete [] estrutura;
		}
		void pilha::ord(){
			for(int i = 0; i < tamanho; i++ ){
				for(int j = i-1; j< tamanho; j++){
					if(estrutura[j] > estrutura[j + 1]){
						TipoItem temp = estrutura[j];
						estrutura[j] = estrutura[j + 1];
						estrutura[j + 1] = temp;
					}
				}
			}
		}
		bool pilha::isFull(){
			return (tamanho == max_itens);
		}
		bool pilha::isEmpty(){
			return (tamanho == 0);
		}
		void pilha::push(TipoItem item){
			if(isFull()){
				cout << "A pillha esta cheia!\n";
				cout << "Nao e possivel inserir este elemento!\n";
			}else{
				estrutura[tamanho] = item;
				tamanho++;
			}
		}
		TipoItem pilha::pop(){
			if(isEmpty()){
				cout << "A pilha esta vazia!\n";
				cout << "Nao ha elementos para serem removidos!\n";
			}else{
				tamanho--;
				return estrutura[tamanho];
			}
		}
		void pilha::print(){
			cout << "Pilha: [";
			for(int i = 0; i < tamanho; i++){
				cout << estrutura[i] << " ";
			}
			cout << "]\n";
		}
		int pilha::getTamanho(){
			return tamanho;
			
		}
