class Lista {
    private:
        struct elemento {
            int idHotel;
            int idAnalise;
            string analise;
            vector<string> palavras;
            elemento *proximoElemento;
        };
        typedef elemento *PonteiroElemento;
        PonteiroElemento inicio;
        int contador;
    public:
        Lista();
        bool vazia();
        bool cheia();
        bool inserir(int posicao, int auxIdHotel, int auxIdAnalise, string auxAnalise, vector<string> &auxPalavras);
        bool remover(int posicao, int &auxIdHotel, int &auxIdAnalise, string &auxAnalise, vector<string> &auxPalavras);
        //implementar
        string listar();
        int tamanho();
        bool inserirPalavra(int posicao, string auxPalavra);
        void listarPalavras(int posicao);
    private:
        bool setaPosicao(int posicao, PonteiroElemento &atual);
};