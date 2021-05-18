class Pilha {
	private:
		int topo;
		int capacidade;
		int *conteudo;
	public:
		bool redefinir(int tamanho);
		Pilha(int tamanho);
		~Pilha();
		bool estaVazia();
		bool estaCheia();
		bool empilhar(int valor);
		int desempilhar();
		int retornaTopo();
};
