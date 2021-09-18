class PilhaChar {
    private:
        struct noPilha {
            char valor;
            noPilha *proximoNo; // ligação próximo nó
        };
        typedef noPilha *PonteiroPilha;
        PonteiroPilha topo;
    public:
        PilhaChar();
        bool vazia();
        bool empilhar(char x);
        bool desempilhar(char &x);
        int retornaTopo();
};
