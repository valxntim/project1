#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED
#include <stdexcept>
using namespace std;

class Duracao {
    private:
    int valor;
    void validar(int valor);
    public:
    void setDuracao(int valor);
    int getDuracao();
};
    inline int Duracao::getDuracao(){
        return valor;
    }

class Codigo {
    private:
    string valor;
    void validar(string valor);
    public:
    void setCodigo(string valor);
    string getCodigo();
};
    inline string Codigo::getCodigo(){
        return valor;
    }

class Cidade {
    private:
    string valor;
    void validar(string valor);
    public:

    void setCidade(string valor);
    string getCidade();
};

inline string Cidade::getCidade(){
    return valor;
}

class Data {
    private:
    string valor;
    void validar(string valor);
    public:

    void setData(string valor);
    string getData();
};

inline string Data::getData(){
    return valor;
}

class Descricao {
    private:
    string valor;
    void validar(string valor);
    public:

    void setDescricao(string valor);
    string getDescricao();
};

inline string Descricao::getDescricao(){
    return valor;
}

class Email {
    private:
    string valor;
    void validar(string valor);
    public:

    void setEmail(string valor);
    string getEmail();
};

inline string Email::getEmail(){
    return valor;
}

class Endereco {
    private:
    string valor;
    void validar(string valor);
    public:

    void setEndereco(string valor);
    string getEndereco();
};

inline string Endereco::getEndereco(){
    return valor;
}
class Horario {
    private:
    string valor;
    void validar(string valor);
    public:

    void setHorario(string valor);
    string getHorario();
};

inline string Horario::getHorario(){
    return valor;
}

class Idioma {
    private:
    string valor;
    void validar(string valor);
    public:

    void setIdioma(string valor);
    string getIdioma();
};

inline string Idioma::getIdioma(){
    return valor;
}

class Nome {
    private:
    string valor;
    void validar(string valor);
    public:

    void setNome(string valor);
    string getNome();
};

inline string Nome::getNome(){
    return valor;
}

class Nota {
    private:
    int valor;
    void validar(int valor);
    public:

    void setNota(int valor);
    int getNota();
};

inline int Nota::getNota(){
    return valor;
}

class Senha {
    private:
    string valor;
    void validar(string valor);
    public:

    void setSenha(string valor);
    string getSenha();
};

inline string Senha::getSenha(){
    return valor;
}

class Titulo {
    private:
    string valor;
    void validar(string valor);
    public:

    void setTitulo(string valor);
    string getTitulo();
};

inline string Titulo::getTitulo(){
    return valor;
}

#endif
