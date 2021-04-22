

class Pilha {
    private:
        struct noPilha {
            int valor;
            noPilha *proximoNo; // ligação próximo nó
        };
        typedef noPilha *PonteiroPilha;
        PonteiroPilha topo;
    public:
        Pilha();
        ~Pilha();
        bool estaVazia();
        bool empilhar(int x);
        bool desempilhar(int &x);
        int retornaTopo();
};
