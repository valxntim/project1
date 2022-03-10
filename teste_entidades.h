#ifndef TESTES_ENTIDADES_H_INCLUDED
#define TESTES_ENTIDADES_H_INCLUDED

#include "entidades.h"

using namespace std;

/// @brief Teste de unidade da classe usuario


class TUUsuario {
private:
    // Valores validos para testar a entidade
    const string VALOR_VALIDO_NOME = "Quedabliw";
    const string VALOR_VALIDO_EMAIL = "fquedabliw@dominio";
    const string VALOR_VALIDO_SENHA = "abD123";

    // Referencia para o objeto a ser testado
    Usuario *usuario;

    // Estado do teste
    int estado;

    // Metodos para efetuar o teste
    void setUp();
    void tearDown();
    void testarCenario();
public:
    // Constantes para reportar o resultado do teste
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    // Metodo para executar o teste
    int run();
};

/// @brief Teste de unidade da classe excursao


class TUExcursao {
private:
    // Valores validos para testar a entidade
    const string VALOR_VALIDO_CODIGO = "1234561";
    const string VALOR_VALIDO_TITULO = "Casa na praia.";
    const string VALOR_VALIDO_ENDERECO = "Hawaii";
    const static int VALOR_VALIDO_NOTA = 5;
    const string VALOR_VALIDO_CIDADE = "Macau";
    const string VALOR_VALIDO_DESCRICAO = "Comi miojo hoje.";
    const static int VALOR_VALIDO_DURACAO = 180;

    // Referencia para o objeto a ser testado
    Excursao *excursao;

    // Estado do teste
    int estado;

    // Metodos para efetuar o teste
    void setUp();
    void tearDown();
    void testarCenario();
public:
    // Constantes para reportar o resultado do teste
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    // Metodo para executar o teste
    int run();
};

/// @brief Teste de unidade da classe avaliacao


class TUAvaliacao {
private:
    // Valores validos para testar a entidade
    const string VALOR_VALIDO_CODIGO = "1234561";
    const static int VALOR_VALIDO_NOTA = 5;
    const string VALOR_VALIDO_DESCRICAO = "Te quero nua e crua,verdade.";

    // Referencia para o objeto a ser testado
    Avaliacao *avaliacao;

    // Estado do teste
    int estado;

    // Metodos para efetuar o teste
    void setUp();
    void tearDown();
    void testarCenario();
public:
    // Constantes para reportar o resultado do teste
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    // Metodo para executar o teste
    int run();
};

/// @brief Teste de unidade da classe sessao


class TUSessao {
private:
    // Valores validos para testar a entidade
    const string VALOR_VALIDO_CODIGO = "1234561";
    const string VALOR_VALIDO_HORARIO = "13:30";
    const string VALOR_VALIDO_DATA = "22-02-2022";
    const string VALOR_VALIDO_IDIOMA = "Espanhol";


    // Referencia para o objeto a ser testado
    Sessao *sessao;

    // Estado do teste
    int estado;

    // Metodos para efetuar o teste
    void setUp();
    void tearDown();
    void testarCenario();
public:
    // Constantes para reportar o resultado do teste
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    // Metodo para executar o teste
    int run();
};

#endif
