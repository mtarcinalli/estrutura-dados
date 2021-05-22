class Lista {
    private:
        struct elemento {
            int idHotel;
            int idAnalise;
            string analise;
            elemento *proximoElemento;
        };
        typedef elemento *PonteiroElemento;
        PonteiroElemento inicio;
        int contador;
    public:
        Lista();
        bool vazia();
        bool cheia();
        bool inserir(int posicao, int auxIdHotel, int auxIdAnalise, string auxAnalise);
        bool remover(int posicao, int &auxIdHotel, int &auxIdAnalise, string &auxAnalise);
        //implementar
        string listar();
        int tamanho();
    private:
        bool setaPosicao(int posicao, PonteiroElemento &atual);
};