/// @file Carteira.h
/// @brief Declara��o da classe Carteira para controle de ordens associadas a uma conta de usu�rio.
/// @details Esta classe modela uma carteira de investimentos, vinculada a uma conta e contendo ordens.
/// Os requisitos envolvem encapsulamento dos atributos (c�digo, nome, perfil e conta),
/// al�m de permitir o gerenciamento das ordens vinculadas � carteira.

#ifndef CARTEIRA_H_INCLUDED
#define CARTEIRA_H_INCLUDED

#include "Dominio.h"   ///< Define tipos como Codigo, Nome e Perfil.
#include "Conta.h"     ///< Declara��o da classe Conta utilizada na associa��o com a Carteira.

#include <vector>      ///< Biblioteca padr�o usada para armazenar uma lista de ordens.

using std::vector;

/// @class Ordem
/// @brief Classe forward declarada para representar ordens de compra/venda associadas � carteira.
class Ordem;

/// @class Carteira
/// @brief Representa uma carteira de investimentos de um usu�rio.
/// @details Armazena c�digo, nome, perfil, ponteiro para a conta vinculada e lista de ordens.
class Carteira {
private:
    Codigo codigo;             ///< C�digo identificador da carteira.
    Nome nome;                 ///< Nome do titular da carteira.
    Perfil perfil;             ///< Perfil de investimento do usu�rio.
    Conta* conta;              ///< Ponteiro para a conta vinculada � carteira.
    vector<Ordem*> ordens;     ///< Lista de ponteiros para ordens associadas � carteira.

public:

    /// @brief Define o c�digo da carteira.
    /// @param codigo Objeto do tipo Codigo a ser atribu�do.
    void setCodigo(Codigo);

    /// @brief Retorna o c�digo da carteira.
    /// @return C�digo da carteira.
    Codigo getCodigo() const;

    /// @brief Define o nome do titular da carteira.
    /// @param nome Objeto do tipo Nome a ser atribu�do.
    void setNome(Nome);

    /// @brief Retorna o nome do titular da carteira.
    /// @return Nome do titular.
    Nome getNome() const;

    /// @brief Define o perfil de investimento da carteira.
    /// @param perfil Objeto do tipo Perfil a ser atribu�do.
    void setPerfil(Perfil);

    /// @brief Retorna o perfil da carteira.
    /// @return Perfil de investimento.
    Perfil getPerfil() const;

    /// @brief Associa uma conta � carteira.
    /// @param conta Ponteiro para objeto do tipo Conta.
    void setConta(Conta*);

    /// @brief Retorna o ponteiro para a conta associada � carteira.
    /// @return Ponteiro para Conta.
    Conta* getConta() const;

    /// @brief Adiciona uma ordem � carteira.
    /// @param ordem Ponteiro para a ordem a ser adicionada.
    void adicionarOrdem(Ordem*);

    /// @brief Remove uma ordem da carteira.
    /// @param ordem Ponteiro para a ordem a ser removida.
    void removerOrdem(Ordem*);

    /// @brief Retorna a lista de ordens associadas � carteira.
    /// @return Vetor de ponteiros para Ordem.
    vector<Ordem*> getOrdens() const;
};

#endif // CARTEIRA_H_INCLUDED
