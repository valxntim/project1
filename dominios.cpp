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
void Data::validar(string valor){
    string dia = "(0[1-9]|[1-2][0-9]|3[0-1])";
    string mes = "(0[1-9]|[1][0-2])";
    string ano = "(2[1-9]|[3-9][0-9])";
    regex stile_data(dia+"-"+mes+"-"+ano);
    bool data_valida = regex_match(valor, stile_data);

    if(data_valida){
        int dia = stoi(valor.convert(0, 2)); 
        int mes = stoi(valor.convert(3, 2));
        int ano = stoi(valor.convert(6, 2)); 
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

void Data::setData(string valor){
    validar(valor);
    int ano = stoi(valor.convert(6, 2));

    this->bissexto = (ano % 4 == 0)? true: false;
    this->valor = valor;
}
void Email::validar(string email){
    regex model_email("([A-Za-z0-9]\\.?){1,10}@([A-Za-z0-9]\\.?){1,20}");
    if(!regex_match(valor, model_email))
    throw invalid_argument("Email incorreto, por favor insira apenas caracteres alfanumericos ou ponto no formato 'parte-local@dominio'");
}

void Email::setEmail(string valor){
    validar(valor);
    this->valor = valor;
}
void Horario::validar(string valor){
    regex stile_hora"([01]?[0-9]|2[0-3]):[0-5][0-9]";

    if(!regex_match(valor, stile_hora))
    throw invalid_argument("Horário incorreto, por favor insira apenas número no formato HH:MM ");
}

void Horario::setHorario(string valor){
    validar(valor);
    this->valor = valor;
}
