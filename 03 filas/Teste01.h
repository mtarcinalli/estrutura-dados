#include <cxxtest/TestSuite.h>
#include "Fila.cpp"

class MyTestSuite1 : public CxxTest::TestSuite
{
public:
    void testaVazia(void)
    {
        Fila fila01;
        int y;
        
        TS_ASSERT(fila01.vazia() == true);
        TS_ASSERT(fila01.cheia() == false);

        TS_ASSERT(fila01.inserir(1) == true);
        TS_ASSERT(fila01.vazia() == false);
        TS_ASSERT(fila01.cheia() == false);

        TS_ASSERT(fila01.inserir(2) == true);
        TS_ASSERT(fila01.vazia() == false);
        TS_ASSERT(fila01.cheia() == false);

        TS_ASSERT(fila01.remover(y) == true);
        TS_ASSERT(y == 1);
        TS_ASSERT(fila01.vazia() == false);
        TS_ASSERT(fila01.cheia() == false);

        TS_ASSERT(fila01.remover(y) == true);
        TS_ASSERT(y == 2);
        TS_ASSERT(fila01.vazia() == true);
        TS_ASSERT(fila01.cheia() == false);

        fila01.remover(y);
        TS_ASSERT(fila01.vazia() == true);
        TS_ASSERT(fila01.cheia() == false);
    }
    
    void testaInserir(void)
    {
        Fila fila01;
        int y;
        

        TS_ASSERT(fila01.inserir(1) == true);

        TS_ASSERT(fila01.inserir(2) == true);

        TS_ASSERT(fila01.remover(y) == true);
        TS_ASSERT(y == 1);

        TS_ASSERT(fila01.remover(y) == true);
        TS_ASSERT(y == 2);

        TS_ASSERT(fila01.remover(y) == false);
        
    }
    
    
};

