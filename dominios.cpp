#include "dominios.h"
#include <regex>  // criar expressoes para validar formatos de entrada
#include <iostream>
using namespace std;
//Definicoes de metodos da classe Duracao
void Duracao::validar(int duracao){
    // valor no formato valido retorna true, caso contrario false
    if(duracao != 30 && duracao != 60 && duracao != 90 && duracao != 120 && duracao != 180){
        throw invalid_argument("Valor invalido: Duracao");
    }
}
void Duracao::setDuracao(int duracao){
    validar(duracao);
    this->duracao = duracao;
}
//Definicoes de metodos da classe Nota
void Nota::validar(int nota){
    // nota no formato valido retorna true, caso contrario false
    if(nota < 0 || nota > 5){
        throw invalid_argument("Valor invalido: Nota");
    }
}
void Nota::setNota(int nota){
    validar(nota);
    this->nota = nota;
}
//Definicoes de metodos da classe Idioma
void Idioma::validar(string idioma){
    // idioma no formato valido retorna true, caso contrario false
    if(idioma != "Ingles" && idioma != "Chines" && idioma != "Mandarim" && idioma != "Hindi" && idioma != "Espanhol" && idioma != "Frances" && idioma != "Arabe" && idioma != "Bengali" && idioma != "Russo" && idioma != "Portugues" && idioma != "Indonesio"){
        throw invalid_argument("Valor invalido: Duracao");
    }
}
void Idioma::setIdioma(string idioma){
    validar(idioma);
    this->idioma = idioma;
}
//Definicoes de metodos da classe Codigo
void Codigo::validar(string codigo){
    int n = codigo.size();
    if(n != 7){
        throw invalid_argument("Valor invalido: Codigo sem tamanho 7");
    }
    // expressao regular para verificar o formato do Codigo

    int s = 0;
    for(int i = 0 ; i<codigo.size()-1; i++){
            s +=  codigo[i] - '0';
            if (codigo[i]< '0' or codigo[i]> '9'){
                throw invalid_argument("Valor invalido código possui letras");
            }

    }
    if (codigo[6] != s%10 + '0'){
        throw invalid_argument("Valor  invalido : identificador incorreto");
    }

    if(codigo == "0000000"){
        throw invalid_argument("Valor invalido: Codigo NAO PODE SER 000000");
    }
};

void Codigo::setCodigo(string codigo){
    validar(codigo);
    this->codigo = codigo;
}
//Definicoes de metodos da classe Senha
void Senha::validar(string senha){
    int n = senha.size();
    //verificar o tamanho da senha
    if(n != 6){
        throw invalid_argument("Valor invalido: Senha nao tem tamanho 6");
    }
    int counter=0;
    //verificar se repetiu caractere
    for (int j=0;j<senha.size();j++)
    {
        for(int i=0;i<senha.size();i++)
        {
            if(senha[i]==senha[j])
            {
                counter++;
            }
        }
    }
    if (counter!=senha.size()){
        throw invalid_argument("Valor invalido: Senha, repetiu caractere");
    }
    // expressao regular para verificar o formato da senha
    regex teste_modelo("^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)[a-zA-Z\\d]{6,}$");
    // senha no formato valido retorna true, caso contrario false
    if(!regex_match(senha, teste_modelo)){
        throw invalid_argument("Valor invalido: Senha, faltou requisito ");
}
}
void Senha::setSenha(string senha){
    validar(senha);
    this->senha = senha;
}
//Definicoes de metodos da classe Cidade
void Cidade::validar(string cidade){
    if(cidade != "Hong Kong" && cidade != "Bangkok" && cidade != "Macau" && cidade != "Singapura" && cidade != "Londres" && cidade != "Paris" && cidade != "Dubai" && cidade != "Delhi" && cidade != "Istambul" && cidade != "Kuala Lumpur" && cidade != "Nova Iorque" && cidade != "Antalya" && cidade != "Mubai" && cidade != "Shenzhen" && cidade != "Pluket"){
        throw invalid_argument("Valor invalido: Cidade");
    }
}

void Cidade::setCidade(string cidade){
    validar(cidade);
    this->cidade = cidade;
}
//Definicoes de metodos da classe Nome
void Nome::validar(string nome){
    // expressao regular para verificar o formato do nome
    regex nome_modelo("([A-Z][A-Za-z]*\\.? ?)+");
    const int minimo = 5, maximo = 20;
    bool tamanho_valido = (nome.length() >= minimo && nome.length() <= maximo) ? true : false;
     // nome no formato valido retorna true, caso contrario false
    if(!regex_match(nome, nome_modelo) || !tamanho_valido)
        throw invalid_argument("Valor invalido: Nome, apenas 5 a 20 caracteres entre A-Z e a-z, ponto ou espaco.");
}

void Nome::setNome(string nome){
    validar(nome);
    this->nome = nome;
}
//Definicoes de metodos da classe Titulo
void Titulo::validar(string titulo) {
    bool bTituloValida = false;
    if ((titulo >= "a" && titulo <= "z") || (titulo >= "A" && titulo <= "Z")){
        if (titulo.length() >= 5 && titulo.length() <= 20) {  //
            if (titulo.find("..") != std::string::npos || titulo.find("  ") != std::string::npos) {
                bTituloValida = false;
            } else {
                bTituloValida = true;
            }
        }
    }
    if (bTituloValida == false) {
        throw invalid_argument("TITULO-> Argumento invalido.");}
}
void Titulo::setTitulo(string titulo){
    validar(titulo);
    this->titulo = titulo;
}


void Data::validar(string data){
    string dd = "(0[1-9]|[1-2][0-9]|3[0-1])";
    string mm = "(0[1-9]|[1][0-2])";
    string aa = "([2-9][0-9]{3})";
    regex stile_data(dd+"\\-"+mm+"\\-"+aa);
    bool data_valida = regex_match(data, stile_data);
    if(data_valida){
        int dia = stoi(data.substr(0, 2));
        int mes = stoi(data.substr(3, 2));
        int ano = stoi(data.substr(6, 4));
        int mesescom31[] = {1, 3, 5, 7, 8, 10, 12};
        int max = 30;

        if(mes == 2)
            max = (ano % 4 == 0)? 29 : 28;
        else{
            for(auto & mes31 : mesescom31){
                if(mes == mes31)
                    max = 31;
            }
        }

        if(dia > max)
            data_valida = false;
    }

    if(!data_valida)
        throw invalid_argument("Data incorreta, por favor utilize apenas o formato DD-MM-AA");
}

void Data::setData(string data){
    validar(data);
    int ano = stoi(data.substr(6, 2));

    this->bissexto = (ano % 4 == 0)? true: false;
    this->data = data;
}
//Definicoes de metodos da classe Descricao
void Descricao::validar(string descricao){
    bool bTituloValida = false;
    //validando o tamanho e se tem pontos e espaços duplos
        if (descricao.length() >= 0 && descricao.length() <= 30) {  //
            if (descricao.find("..") != std::string::npos || descricao.find("  ") != std::string::npos) {
                bTituloValida = false;
            } else {
                bTituloValida = true;
            }
        }
        if (bTituloValida == false) {
            throw invalid_argument("Descricao-> Argumento invalido.");}
}
void Descricao::setDescricao(string descricao){
    validar(descricao);
    this->descricao = descricao;
}
//Definicoes de metodos da classe Endereco
void Endereco::validar(string endereco){
    bool bTituloValida = false;
    //validando o tamanho e se tem pontos e espaços duplos
        if (endereco.length() >= 0 && endereco.length() <= 20) {  //
            if (endereco.find("..") != std::string::npos || endereco.find("  ") != std::string::npos) {
                bTituloValida = false;
            } else {
                bTituloValida = true;
            }
        }
        if (bTituloValida == false) {
            throw invalid_argument("Endereco-> Argumento invalido.");}
}
void Endereco::setEndereco(string endereco){
    validar(endereco);
    this->endereco = endereco;
  }
void Email::validar(string email){
    regex model_email("[A-Za-z0-9\\!\\#\\$\\%\\&\\'\\*\\+\\-\\/\\=\\?\\^\\_\\`\\{\\|\\}\\~]{1,64}\\@[A-Za-z0-9\\.\\-]{1,253}");
    if(!regex_match(email, model_email))
        throw invalid_argument("Email incorreto, por favor insira apenas caracteres alfanumericos ou ponto no formato 'parte-local@dominio'");
    string dominio = email.substr(email.find('@')+1);
    string iniciodominio =  email.substr(0, email.find('@'));

     if(iniciodominio[0] == '.' or iniciodominio[iniciodominio.size()-1] == '.'  or iniciodominio.find("..")!= string::npos){
        throw invalid_argument("Pontos em sequencia ou inicio/final de parte-local");
    }

    if(dominio[0] == '.' or dominio[dominio.size()-1] == '.'  or dominio.find("..")!= string::npos){
        throw invalid_argument("Pontos em sequencia ou inicio/final de dominio");
    }
}

void Email::setEmail(string email){
    validar(email);
    this->email = email;
}
void Horario::validar(string horario){
    regex stile_hora("([01]?[0-9]|2[0-3]):[0-5][0-9]");

    if(!regex_match(horario, stile_hora))
    throw invalid_argument("Horário incorreto, por favor insira apenas número no formato HH:MM ");
}

void Horario::setHorario(string horario){
    validar(horario);
    this->horario = horario;
}
