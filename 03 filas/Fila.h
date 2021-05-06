
class Fila {
    private:
        struct elemento {
            int valor;
            elemento *proximoElemento; // ligação próximo nó
        };
        typedef elemento *PonteiroElemento;
        PonteiroElemento inicio;
        PonteiroElemento fim;
    public:
        Fila();
        bool vazia();
        bool cheia();
        bool inserir(int x);
        bool remover(int &x);
};


