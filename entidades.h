#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED
#include "dominios.h"
#include <string>

using namespace std;

///
/// @brief Padrao para representacao do usuario
///
/// Regras de formato:
///
/// - Usuario contem nome, email, senha.
///
// Classe Usuario

class Usuario {
private:
    Nome nome;
    Email email;
    Senha senha;
public:
    ///
    /// Metodo set armazena o nome
    ///
    // Metodos do atributo nome
    void setNome(const Nome &nome);
    ///
    /// Retorna o nome
    ///
    Nome getNome() const;
    ///
    /// Metodo ''set'' armazena o email
    ///
    // Metodos do atributo email
    void setEmail(const Email &email);
    ///
    /// Retorna o email
    ///
    Email getEmail() const;
    ///
    /// Guarda a senha
    ///
    // Metodos do atributo senha
    void setSenha(const Senha &senha);
    ///
    /// Retorna a senha
    ///
    Senha getSenha() const;
};
inline void Usuario::setNome(const Nome &nome){
    this->nome = nome;
}

inline Nome Usuario::getNome() const{
    return nome;
}
inline void Usuario::setEmail(const Email &email){
    this->email = email;
}

inline Email Usuario::getEmail() const{
    return email;
}

inline void Usuario::setSenha(const Senha &senha){
    this->senha = senha;
}

inline Senha Usuario::getSenha() const{
    return senha;
}

///
/// @brief Padrao para representacao de avaliacao
/// Regras de formato:
/// Avaliacao contem nota, codigo e descricao.
///
// Classe Avaliacao

class Avaliacao {
private:
    Nota nota;
    Codigo codigo;
    Descricao descricao;
public:
    ///
    /// Armazena a nota
    ///
    // Metodos do atributo nota
    void setNota(const Nota &nota);
    ///
    /// Retorna a nota
    ///
    Nota getNota() const;
    ///
    /// Armazena o codigo
    ///
    // Metodos do atributo codigo
    void setCodigo(const Codigo &codigo);
    ///
    /// Retorna o codigo
    ///
    Codigo getCodigo() const;
    ///
    /// Armazena a descricao
    ///
    // Metodos do atributo descricao
    void setDescricao(const Descricao &descricao);
    ///
    /// Retorna a descricao
    ///
    Descricao getDescricao() const;
};

inline void Avaliacao::setNota(const Nota &nota){
    this->nota = nota;
}

inline Nota Avaliacao::getNota() const{
    return nota;
}
inline void Avaliacao::setCodigo(const Codigo &codigo){
    this->codigo = codigo;
}

inline Codigo Avaliacao::getCodigo() const{
    return codigo;
}

inline void Avaliacao::setDescricao(const Descricao &descricao){
    this->descricao = descricao;
}

inline Descricao Avaliacao::getDescricao() const{
    return descricao;
}

///
/// @brief Padrao para representacao de avaliacao
/// Regras de formato:
///
///   Excursao contem nota, codigo, descricao, titulo,  cidade, endereco, duracao.
///
class Excursao {
private:
    Nota nota;
    Codigo codigo;
    Descricao descricao;
    Titulo titulo;
    Cidade cidade;
    Endereco endereco;
    Duracao duracao;
public:
    ///
    /// Armazena a nota
    ///
    // Metodos do atributo nota
    void setNota(const Nota &nota);
    ///
    /// Retorna a nota
    ///
    Nota getNota() const;
    ///
    /// Armazena a codigo
    ///
    // Metodos do atributo codigo
    void setCodigo(const Codigo &codigo);
    ///
    /// Retorna codigo
    ///
    Codigo getCodigo() const;
    ///
    ///  Armazena a descricao
    ///
    //   Metodos do atributo descricao
    void setDescricao(const Descricao &descricao);
    ///
    /// Retorna a descricao
    ///
    Descricao getDescricao() const;
    ///
    /// Armazena o titulo
    ///
    // Metodos do atributo titulo
    void setTitulo(const Titulo &titulo);
    ///
    /// Retorna o titulo
    ///
    Titulo getTitulo() const;
    ///
    /// Armazena a cidade
    ///
    // Metodos do atributo cidade
    void setCidade(const Cidade &cidade);
    ///
    /// Retorna a cidade
    ///
    Cidade getCidade() const;
    ///
    /// Armazena o endereco
    ///
    // Metodos do atributo endereco
    void setEndereco(const Endereco &endereco);
    ///
    /// Retorna o endereco
    Endereco getEndereco() const;
    ///
    /// Armazena a duracao
    ///
    // Metodos do atributo duracao
    void setDuracao(const Duracao &duracao);
    ///
    /// Retorna a duracao
    ///
    Duracao getDuracao() const;
};

inline void Excursao::setNota(const Nota &nota){
    this->nota = nota;
}

inline Nota Excursao::getNota() const{
    return nota;
}
inline void Excursao::setCodigo(const Codigo &codigo){
    this->codigo = codigo;
}

inline Codigo Excursao::getCodigo() const{
    return codigo;
}

inline void Excursao::setDescricao(const Descricao &descricao){
    this->descricao = descricao;
}

inline Descricao Excursao::getDescricao() const{
    return descricao;
}

inline void Excursao::setTitulo(const Titulo &titulo){
    this->titulo = titulo;
}

inline Titulo Excursao::getTitulo() const{
    return titulo;
}
inline void Excursao::setCidade(const Cidade &cidade){
    this->cidade = cidade;
}

inline Cidade Excursao::getCidade() const{
    return cidade;
}

inline void Excursao::setEndereco(const Endereco &endereco){
    this->endereco = endereco;
}

inline Endereco Excursao::getEndereco() const{
    return endereco;
}

inline void Excursao::setDuracao(const Duracao &duracao){
    this->duracao = duracao;
}

inline Duracao Excursao::getDuracao() const{
    return duracao;
}
/// @brief Padrao para representacao de avaliacao
class Sessao {
private:
    Data data;
    Codigo codigo;
    Horario horario;
    Idioma idioma;
public:
    ///
    /// Armazena a nota
    ///
    // Metodos do atributo nota
    void setData(const Data &data);
    ///
    /// Retorna a data
    ///
    Data getData() const;
    ///
    /// Armazena o codigo
    ///
    // Metodos do atributo codigo
    void setCodigo(const Codigo &codigo);
    ///
    /// Retorna o codigo
    ///
    Codigo getCodigo() const;
    ///
    /// Armazena a horario
    ///
    // Metodos do atributo descricao
    void setHorario(const Horario &horario);
    ///
    /// Retorna a horario
    ///
    Horario getHorario() const;
    ///
    /// Amarzena o idioma
    ///
    void setIdioma(const Idioma &idioma);
    ///
    /// Retorna o idioma
    ///
    Idioma getIdioma() const;
};

inline void Sessao::setData(const Data &data){
    this->data = data;
}

inline Data Sessao::getData() const{
    return data;
}
inline void Sessao::setCodigo(const Codigo &codigo){
    this->codigo = codigo;
}

inline Codigo Sessao::getCodigo() const{
    return codigo;
}

inline void Sessao::setHorario(const Horario &horario){
    this->horario = horario;
}

inline Horario Sessao::getHorario() const{
    return horario;
}
inline void Sessao::setIdioma(const Idioma &idioma){
    this->idioma = idioma;
}

inline Idioma Sessao::getIdioma() const{
    return idioma;
}
#endif
