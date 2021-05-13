
//  Implemente uma fila que gerencie uma fila de processos. 
//  Cada processo deve ter:
//  - um id único e sequencial, o comando a ser executado, o usuário, o tempo estimado de execução e a quantidade de memória necessária.

// Implementar métodos que:

// - liste a fila de processos;
// - mostre o total de tempo estimado para concluir a atual fila de processos

class Fila {
  private:
    struct elemento {
      int pid;
      string comando;
      string usuario;
      int tempo;
      int memoria;
      elemento *proximoElemento;
    };
    typedef elemento *PonteiroElemento;
    PonteiroElemento inicio;
    PonteiroElemento fim;
    int contPid;
  public:
    Fila();
    bool vazia();
    bool cheia();
    bool inserir(string auxComando, string auxUsuario, int auxTempo, int auxMemoria);
    bool remover(int &auxPid, string &auxComando, string &auxUsuario, int &auxTempo, int &auxMemoria);
    string listar();
    int tempoTotal();
};
