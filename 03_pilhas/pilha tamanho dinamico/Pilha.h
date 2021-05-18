
class Pilha {
    private:
        int topo;
        int capacidade;
        int *conteudo;
    public:
        void redefinir(int tamanho);
        Pilha(int tamanho);
        bool estaVazia();
        bool estaCheia();
        bool empilhar(int valor);
        int desempilhar();
        int retornaTopo();
};
