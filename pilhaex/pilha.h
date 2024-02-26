typedef int TipoItem;
const int max_itens = 100;


class pilha{
	private:
		int tamanho;
		TipoItem* estrutura;
		
		
	public:
		pilha();
		~pilha();
		void ord();
		bool isFull();
		bool isEmpty();
		void push(TipoItem item);
		TipoItem pop();
		void print();
		int getTamanho();
};
