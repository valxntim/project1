#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED
#include <stdexcept>
using namespace std;
///
/// @brief Padrao para representacao do Duracao
///
/// Regras de formato:
///
/// - Numero valido apenas inteiros: 30,60,90,120 ou 180.
///
class Duracao {
    private:
    int duracao;
    void validar(int duracao);
    public:
    ///
    /// Armazena o numero informado caso o mesmo seja valido
    ///
    /// Lanca excecao caso o numero informado seja invalido
    ///
    /// @param valor duracao
    ///
    /// @throw invalid_argument
    ///
    void setDuracao(int duracao);
    ///
    /// Retorna duracao
    ///
    /// @return duracao
    ///
    int getDuracao();
};
    inline int Duracao::getDuracao(){
        return duracao;
    }

///
/// @brief Padrao para representacao do codigo
///
/// Regras de formato:
///
/// - Formato DDDDDDX, D e digito (0-9), e X e digito verificador(informando algoritmo usado). Note que 000000 e um codigo invalido.
///
class Codigo {
    private:
    string codigo;
    void validar(string codigo);
    public:
    ///
    /// Armazena o codigo
    ///
    /// Lanca excecao caso o codigo esteja em formato invalido.
    ///
    /// @param string codigo
    ///
    /// @throw invalid_argument
    ///
    void setCodigo(string codigo);
    ///
    /// Retorna codigo
    ///
    /// @return codigo
    ///
    string getCodigo();
};
    inline string Codigo::getCodigo(){
        return codigo;
    }
///
/// @brief Padrao para representacao da cidade: Hong Kong, Bangkok, Macau, Singapura, Londres, Paris, Dubai, Delhi, Istambul, Kuala, Lumpur, Nova Iorque, Antalya, Mumbai, Shenzhen, Phuket
///
/// Regras de formato:
///
/// - Ser somente uma das cidades pre definidas
///
class Cidade {
    private:
    string cidade;
    void validar(string cidade);
    public:

    void setCidade(string cidade);
    ///
    /// Retorna cidade
    ///
    /// @return string cidade
    ///
    string getCidade();
};

inline string Cidade::getCidade(){
    return cidade;
}
///
/// @brief Padrao para representacao da data
///
/// Regras de formato:
///
/// - Data formato DD-MM-AA onde DD de 01 a 31, MM de 01 a 12 e AA de 21 a 99
/// Data considera anos bissextos e meses com 30 e 31 dias.
///
class Data {
    private:
    string data;
    bool bissexto;
    void validar(string data);
    public:
    ///
    /// Armazena a data
    ///
    /// Lanca excecao caso a data informada seja invalida.
    ///
    /// @param string data
    ///
    /// @throw invalid_argument
    ///

    void setData(string data);
    ///
    /// Retorna data
    ///
    /// @return string data
    ///
    string getData();
    bool isBissexto();
};

inline string Data::getData(){
    return data;
}
inline bool Data::isBissexto(){
    return bissexto;
  }
///
/// @brief Padrao para representacao da descricao
///
/// Regras de formato:
///
/// - Descricões aceitam 0 a 30 caracteres e nao sao aceitos nem espacos,nem pontos em sequencia.
///
class Descricao {
    private:
    string descricao;
    void validar(string descricao);
    public:
    ///
    /// Armazena o texto da descricao
    ///
    /// Lanca excecao caso o texto da descricao informado seja invalido.
    ///
    /// @param descricao descricao
    ///
    /// @throw invalid_argument
    ///
    void setDescricao(string descricao);
    ///
    /// Retorna descricao
    ///
    /// @return descricao
    ///
    string getDescricao();
};

inline string Descricao::getDescricao(){
    return descricao;
}
///
/// @brief Padrao para representacao do email
///
/// Regras de formato:
///
/// - Formato parte-local@dominio, onde o parte-local e composto por ate 64 caracteres e dominio e composto por ate 253 caracteres.
/// Valido apenas caracteres de A-Z, a-z, 0-9 ou ponto. Nao ha pontos em sequencia.
///
class Email {
    private:
    string email;
    void validar(string email);
    public:
    ///
    /// Armazena o email
    ///
    /// Lanca excecao caso o email esteja em formato invalido.
    ///
    /// @param string email
    ///
    /// @throw invalid_argument
    ///
    void setEmail(string email);
    ///
    /// Retorna email
    ///
    /// @return email
    ///
    string getEmail();
};

inline string Email::getEmail(){
    return email;
}
///
/// @brief Padrao para representacao do endereco
///
/// Regras de formato:
///
/// - Texto de 5 a 20 caracteres podendo ser letras (A-Z e a-z), digito (0-9), ou careactere especial, portanto que nao seka o primeiro ou o ultimo. Nao sao aceitos nem espacos,nem pontos em sequencia.
/// - Nao ha espacos ou pontos que ocorram em sequencia.
class Endereco {
    private:
    string endereco;
    void validar(string endereco);
    public:
    ///
    /// Armazena o endereco
    ///
    /// Lanca excecao caso o endereco informado seja invalido
    ///
    /// @param string endereco
    ///
    /// @throw invalid_argument
    ///
    void setEndereco(string endereco);
    ///
    /// Retorna endereco
    ///
    /// @return endereco
    ///
    string getEndereco();
};

inline string Endereco::getEndereco(){
    return endereco;
}
///
/// @brief Padrao para representacao do Horario
///
/// Regras de formato:
///
/// - Horario formato HH:MM, sendo HH de 0 a 23, e MM de 00 a 59.
///
class Horario {
    private:
    string horario;
    void validar(string horario);
    public:
    ///
    /// Armazena o Horario
    ///
    /// Lanca excecao caso o horario informado seja invalido
    ///
    /// @param string horario
    ///
    /// @throw invalid_argument
    ///
    void setHorario(string horario);
    ///
    /// Retorna horario
    ///
    /// @return horario
    ///
    string getHorario();
};

inline string Horario::getHorario(){
    return horario;
}
///
/// @brief Padrao para representacao do idioma
///
/// Regras de formato:
///
/// - Idioma sendo estes:Ingles, Chines, Mandarim, Hindi, Espanhol, Frances, Arabe, Bengali, Russo, Portugues ou Indonesio.
/// Desconsiderado a acentuacao
///
class Idioma {
    private:
    string idioma;
    void validar(string idioma);
    public:

    void setIdioma(string idioma);
    ///
    /// Retorna valor
    ///
    /// @return valor
    ///
    string getIdioma();
};

inline string Idioma::getIdioma(){
    return idioma;
}
///
/// @brief Padrao para representacao do nome
///
/// Regras de formato:
///
/// - Nome de 5 a 20 caracteres podendo ser letras de A-Z maiusculas e minusculas, ponto ou espaco.
/// Pontos precedem letra, nao ha espacos ou pontos em sequencia e a primeira letra de cada termo e maiuscula.
///
class Nome {
    private:
    string nome;
    void validar(string nome);
    public:
    ///
    /// Armazena o nome
    ///
    /// Lanca excecao caso o nome informado seja invalido.
    ///
    /// @param string valor
    ///
    /// @throw invalid_argument
    ///

    void setNome(string nome);
    ///
    /// Retorna valor
    ///
    /// @return valor
    ///
    string getNome();
};

inline string Nome::getNome(){
    return nome;
}
///
/// @brief Padrao para representacao do Duracao
///
/// Regras de formato:
///
/// - Numero valido apenas inteiros: 0,1,2,3,4 e 5.
///
class Nota {
    private:
    int nota;
    void validar(int nota);
    public:
    ///
    /// Armazena o numero informado caso o mesmo seja valido
    ///
    /// Lanca excecao caso o numero informado seja invalido
    ///
    /// @param valor duracao
    ///
    /// @throw invalid_argument
    ///
    void setNota(int nota);
    ///
    /// Retorna valor
    ///
    /// @return valor
    ///
    int getNota();
};

inline int Nota::getNota(){
    return nota;
}
    /// @brief Declaracao de classe de senha
    /// Armazena a senha
    ///
    /// Lanca excecao caso a senha esteja em formato invalido
    ///
    /// @param string senha
    ///
    /// @throw invalid_argument
    ///
class Senha {
    private:
    string senha;
    void validar(string senha);
    public:

    void setSenha(string senha);
    ///
    /// Retorna valor
    ///
    /// @return valor
    ///
    string getSenha();
};
///
/// @brief Padrao para representacao do email
///
/// Regras de formato:
///
/// - Formato nome@dominio, onde o nome e composto por ate 10 caracteres e dominio e composto por ate 20 caracteres.
/// Valido apenas caracteres de A-Z, a-z, 0-9 ou ponto. Nao ha pontos em sequencia.
///
inline string Senha::getSenha(){
    return senha;
}
///
/// @brief Padrao para representacao do endereco
///
/// Regras de formato:
///
/// - Texto de 5 a 20 caracteres. Nao sao aceitos nem espacos,nem pontos em sequencia.
/// - Nao ha espacos ou pontos que ocorram em sequencia.
class Titulo {
    private:
    string titulo;
    void validar(string titulo);
    public:
   ///
    /// Armazena o titulo
    ///
    /// Lanca excecao caso o titulo informado seja invalido
    ///
    void setTitulo(string titulo);
    ///
    /// Retorna valor
    ///
    /// @return valor
    ///
    string getTitulo();
};

inline string Titulo::getTitulo(){
    return titulo;
}

#endif
