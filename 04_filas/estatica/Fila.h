#define MAX 5

class Fila {
    private:
        int contador;
        int capacidade = MAX;
        int elementos[MAX];
    public:
        Fila();
        bool inserir(int x);
        bool remover(int &x);
        bool vazia();
        bool cheia();
};
