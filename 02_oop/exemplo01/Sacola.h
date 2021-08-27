#define MAX 5

class Sacola { 
    private:
        int capacidade;
        int dados[MAX];
        int contador;
    public:
        Sacola();
        bool vazia();
        bool cheia();
        bool inserir(int x);
        bool ocorrencia(int x);
        bool remover(int x);
};
