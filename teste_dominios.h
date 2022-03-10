#define TESTES_DOMINIOS_H_INCLUDED
#define TESTES_DOMINIOS_H_INCLUDED
#include "dominios.h"

using namespace std;

/// @brief Declaracao de classe de teste de unidade do dominio Duracao


class TUDuracao {

private:

    const static int VALOR_VALIDO   = 60;
    const static int VALOR_INVALIDO = 150;

    Duracao *duracao;

    int estado;


    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

/// @brief Declaracao de classe de teste de unidade do dominio codigo



class TUCodigo {

private:

    const string VALOR_VALIDO   = "123465A";
    const string VALOR_INVALIDO = "000000f";


    Codigo *codigo;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

/// @brief Declaracao de classe de teste de unidade do dominio Cidade.



class TUCidade {

private:

    const string VALOR_VALIDO   = "Singapura";
    const string VALOR_INVALIDO = "Brazil";


    Cidade *cidade;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

/// @brief Declaracao de classe de teste de unidade do dominio Descricao.



class TUDescricao {

private:

    const string VALOR_VALIDO   = "Singapura. ccPK . F OPA. . FE";
    const string VALOR_INVALIDO = "Brazilzilzilzilzilzilzilzilzil";


    Descricao *descricao;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

/// @brief Declaracao de classe de teste de unidade do dominio Data.



class TUData{

private:

    const string VALOR_VALIDO   = "30/08/1998";
    const string VALOR_INVALIDO = "30/02/2022";


    Data *data;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

/// @brief Declaracao de classe de teste de unidade do dominio Email.




class TUEmail{

private:

    const string VALOR_VALIDO   = "Vxlentim.reiDELAS.passoorodomesmo.xD.SEPREPARA!#$%¨&&*^~@gmail.COM.hotmail.msn.orkut.facebook.twitter.wpp.heron.fernando.TemQueDarCerto06-br";
    const string VALOR_INVALIDO = "valentim@gmail..com";


    Email *email;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

/// @brief Declaracao de classe de teste de unidade do dominio Endereco.



class TUEndereco{

private:

    const string VALOR_VALIDO   = "Adriele Riacho Fundo 2";
    const string VALOR_INVALIDO = "comida..opaa";


    Endereco *endereco;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

/// @brief Declaracao de classe de teste de unidade do dominio Horario.



class TUHorario{

private:

    const string VALOR_VALIDO   = "23:59";
    const string VALOR_INVALIDO = "00:00";


    Horario *horario;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};



/// @brief Declaracao de classe de teste de unidade do dominio Idioma.


class TUIdioma{

private:

    const string VALOR_VALIDO   = "Mandarim";
    const string VALOR_INVALIDO = "mandarim";


    Idioma *idioma;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

/// @brief Declaracao de classe de teste de unidade do dominio Nome.



class TUNome{

private:

    const string VALOR_VALIDO   = "Mandarim. Ou Heron.";
    const string VALOR_INVALIDO = "Mel";


    Nome *nome;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

/// @brief Declaracao de classe de teste de unidade do dominio Nota.


class TUNota{

private:

    const static int VALOR_VALIDO   = 5;
    const static int  VALOR_INVALIDO = 10;


    Nota *nota;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

/// @brief Declaracao de classe de teste de unidade do dominio Senha.

class TUSenha{

private:

    const string VALOR_VALIDO   = "Ab5CD6";
    const string VALOR_INVALIDO = "A12345";


    Senha *senha;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

/// @brief Declaracao de classe de teste de unidade do dominio Titulo.



class TUTitulo{

private:

    const string VALOR_VALIDO   = "Ab5 . . CD6";
    const string VALOR_INVALIDO = "A1234  5";


    Titulo *titulo;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};
