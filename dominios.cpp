#include "dominios.h"
#include <regex>
#include <iostream>
using namespace std;

void Duracao::validar(int valor){
    if(valor != 30 && valor != 60 && valor != 90 && valor != 120 && valor != 180){
        throw invalid_argument("Valor invalido: Duracao");
    }
}
void Duracao::setDuracao(int valor){
    validar(valor);
    this->valor = valor;
}

void Nota::validar(int valor){
    if(valor < 0 || valor > 5){
        throw invalid_argument("Valor invalido: Nota");
    }
}
void Nota::setNota(int valor){
    validar(valor);
    this->valor = valor;
}

void Idioma::validar(string valor){
    if(valor != "Ingles" && valor != "Chines" && valor != "Mandarim" && valor != "Hindi" && valor != "Espanhol" && valor != "Frances" && valor != "Arabe" && valor != "Bengali" && valor != "Russo" && valor != "Portugues" && valor != "Indonesio"){
        throw invalid_argument("Valor invalido: Duracao");
    }
}
void Idioma::setIdioma(string valor){
    validar(valor);
    this->valor = valor;
}

void Codigo::validar(string valor){
    int n = valor.size();
    if(n != 7){
        throw invalid_argument("Valor invalido: Codigo sem tamanho 7");
    }
    regex codigo_modelo("[\\d]{6}[a-zA-z]");
    if(!regex_match(valor, codigo_modelo)){
        throw invalid_argument("Valor invalido: Codigo sem modelo suportado");
    }
};

void Codigo::setCodigo(string valor){
    validar(valor);
    this->valor = valor;
}
void Senha::validar(string valor){
    int n = valor.size();
    if(n != 6){
        throw invalid_argument("Valor invalido: Senha nao tem tamanho 6");
    }
    int counter=0;
    for (int j=0;j<valor.size();j++)
    {
        for(int i=0;i<valor.size();i++)
        {
            if(valor[i]==valor[j])
            {
                counter++;
            }
        }
    }
    if (counter!=valor.size()){
        throw invalid_argument("Valor invalido: Senha, repetiu caractere");
    }
    regex teste_modelo("^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)[a-zA-Z\\d]{6,}$");
    if(!regex_match(valor, teste_modelo)){
        throw invalid_argument("Valor invalido: Senha, faltou requisito ");
}
void Senha::setSenha(string valor){
    validar(valor);
    this->valor = valor;
}
void Cidade::validar(string valor){
    if(valor != "Hong Kong" && valor != "Bangkok" && valor != "Macau" && valor != "Singapura" && valor != "Londres" && valor != "Paris" && valor != "Dubai" && valor != "Delhi" && valor != "Istambul" && valor != "Kuala Lumpur" && valor != "Nova Iorque" && valor != "Antalya" && valor != "Mubai" && valor != "Shenzhen" && valor != "Pluket"){
        throw invalid_argument("Valor invalido: Cidade");
    }
}
void Cidade::SetCidade(string valor){
    validar(valor);
    this->valor = valor;
}
