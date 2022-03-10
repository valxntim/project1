#include "teste_entidades.h"
// Definicoes de metodos para testes da entidade Usuario

void TUUsuario::setUp(){
    usuario = new Usuario();
    estado = SUCESSO;
}

void TUUsuario::tearDown(){
    delete usuario;
}
void TUUsuario::testarCenario(){
    // Dominios necessarios
    Nome nome;
    Email email;
    Senha senha;
    // Armazenando os valores armazenados
    nome.setNome(VALOR_VALIDO_NOME);
    email.setEmail(VALOR_VALIDO_EMAIL);
    senha.setSenha(VALOR_VALIDO_SENHA);
    // Verificando os valores armazenados
    usuario->setNome(nome);
    usuario->setEmail(email);
    usuario->setSenha(senha);

    if(usuario->getNome().getNome() != VALOR_VALIDO_NOME)
        estado = FALHA;
    if(usuario->getEmail().getEmail() != VALOR_VALIDO_EMAIL)
        estado = FALHA;
    if(usuario->getSenha().getSenha() != VALOR_VALIDO_SENHA)
        estado = FALHA;
}

int TUUsuario::run(){
    setUp();
    testarCenario();
    tearDown();
    return estado;
}
    // Definicoes de metodos para testes da entidade Avaliacao
void TUAvaliacao::setUp(){
    avaliacao = new Avaliacao();
    estado = SUCESSO;
}

void TUAvaliacao::tearDown(){
    delete avaliacao;
}
void TUAvaliacao::testarCenario(){
    // Dominios necessarios
    Codigo codigo;
    Nota nota;
    Descricao descricao;
    // Inicializando os dominios
    codigo.setCodigo(VALOR_VALIDO_CODIGO);
    nota.setNota(VALOR_VALIDO_NOTA);
    descricao.setDescricao(VALOR_VALIDO_DESCRICAO);
    // Armazenando os dados da Avaliacao
    avaliacao->setCodigo(codigo);
    avaliacao->setNota(nota);
    avaliacao->setDescricao(descricao);
    // Verificando os valores armazenados
    if(avaliacao->getCodigo().getCodigo() != VALOR_VALIDO_CODIGO)
        estado = FALHA;
    if(avaliacao->getNota().getNota() != VALOR_VALIDO_NOTA)
        estado = FALHA;
    if(avaliacao->getDescricao().getDescricao() != VALOR_VALIDO_DESCRICAO)
        estado = FALHA;
}

int TUAvaliacao::run(){
    setUp();
    testarCenario();
    tearDown();
    return estado;
}
// Definicoes de metodos para testes da entidade Excursao

void TUExcursao::setUp(){
    excursao = new Excursao();
    estado = SUCESSO;
}

void TUExcursao::tearDown(){
    delete excursao;
}
void TUExcursao::testarCenario(){
    // Dominios necessarios
    Codigo codigo;
    Titulo titulo;
    Nota nota;
    Cidade cidade;
    Duracao duracao;
    Descricao descricao;
    Endereco endereco;
       // Inicializando os dominios
    codigo.setCodigo(VALOR_VALIDO_CODIGO);
    titulo.setTitulo(VALOR_VALIDO_TITULO);
    nota.setNota(VALOR_VALIDO_NOTA);
    cidade.setCidade(VALOR_VALIDO_CIDADE);
    duracao.setDuracao(VALOR_VALIDO_DURACAO);
    descricao.setDescricao(VALOR_VALIDO_DESCRICAO);
    endereco.setEndereco(VALOR_VALIDO_ENDERECO);
    // Armazenando os dados de Excursao
    excursao->setCodigo(codigo);
    excursao->setTitulo(titulo);
    excursao->setNota(nota);
    excursao->setCidade(cidade);
    excursao->setDuracao(duracao);
    excursao->setDescricao(descricao);
    excursao->setEndereco(endereco);
    // Verificando os valores armazenados
    if(excursao->getCodigo().getCodigo() != VALOR_VALIDO_CODIGO)
        estado = FALHA;
    if(excursao->getTitulo().getTitulo() != VALOR_VALIDO_TITULO)
        estado = FALHA;
    if(excursao->getNota().getNota() != VALOR_VALIDO_NOTA)
        estado = FALHA;
    if(excursao->getCidade().getCidade() != VALOR_VALIDO_CIDADE)
        estado = FALHA;
    if(excursao->getDuracao().getDuracao() != VALOR_VALIDO_DURACAO)
        estado = FALHA;
    if(excursao->getDescricao().getDescricao() != VALOR_VALIDO_DESCRICAO)
        estado = FALHA;
    if(excursao->getEndereco().getEndereco() != VALOR_VALIDO_ENDERECO)
        estado = FALHA;
}

int TUExcursao::run(){
    setUp();
    testarCenario();
    tearDown();
    return estado;
}
// Definicoes de metodos para testes da entidade Sessao

void TUSessao::setUp(){
    sessao = new Sessao();
    estado = SUCESSO;
}

void TUSessao::tearDown(){
    delete sessao;
}
void TUSessao::testarCenario(){
    // Dominios necessarios
    Codigo codigo;
    Data data;
    Horario horario;
    Idioma idioma;
    // Inicializando os dominios
    codigo.setCodigo(VALOR_VALIDO_CODIGO);
    data.setData(VALOR_VALIDO_DATA);
    horario.setHorario(VALOR_VALIDO_HORARIO);
    idioma.setIdioma(VALOR_VALIDO_IDIOMA);
    // Armazenando os dados de Sessao
    sessao->setCodigo(codigo);
    sessao->setData(data);
    sessao->setHorario(horario);
    sessao->setIdioma(idioma);
    // Verificando os valores armazenados

    if(sessao->getCodigo().getCodigo() != VALOR_VALIDO_CODIGO)
        estado = FALHA;
    if(sessao->getData().getData() != VALOR_VALIDO_DATA)
        estado = FALHA;
    if(sessao->getHorario().getHorario() != VALOR_VALIDO_HORARIO)
        estado = FALHA;
    if(sessao->getIdioma().getIdioma() != VALOR_VALIDO_IDIOMA)
        estado = FALHA;
  }
int TUSessao::run(){
    setUp();
    testarCenario();
    tearDown();
    return estado;
}
