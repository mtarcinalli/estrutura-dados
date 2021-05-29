class Fila {
    private:
        struct elemento {
            string nome;
            int conta;
            elemento *proximoElemento; // ligação próximo nó
        };
        typedef elemento *PonteiroElemento;
        PonteiroElemento inicio;
        PonteiroElemento fim;
    public:
        Fila();
        bool vazia();
        bool cheia();
        bool inserir(string x, int y);
        bool remover(string &x, int &y);
        string listar();
        int tamanho();
};
