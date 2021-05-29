class ListaPalavras {
    private:
        struct elemento {
            string palavra;
            elemento *proximoElemento;
        };
        typedef elemento *PonteiroElemento;
        PonteiroElemento inicio;
        int contador;
    public:
        ListaPalavras();
        bool vazia();
        bool cheia();
        bool inserir(int posicao, string auxPalavra);
        bool remover(int posicao, string &auxPalavra);
        //implementar
        string listar(int qtd);
        int tamanho();
        bool inserirFinal(string auxPalavra);
        bool estaNaLista(string auxPalavra);
    private:
        bool setaPosicao(int posicao, PonteiroElemento &atual);
};