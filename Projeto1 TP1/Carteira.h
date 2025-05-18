/// @file Carteira.h
/// @brief Declaração da classe Carteira para controle de ordens associadas a uma conta de usuário.
/// @details Esta classe modela uma carteira de investimentos, vinculada a uma conta e contendo ordens.
/// Os requisitos envolvem encapsulamento dos atributos (código, nome, perfil e conta),
/// além de permitir o gerenciamento das ordens vinculadas à carteira.

#ifndef CARTEIRA_H_INCLUDED
#define CARTEIRA_H_INCLUDED

#include "Dominio.h"   ///< Define tipos como Codigo, Nome e Perfil.
#include "Conta.h"     ///< Declaração da classe Conta utilizada na associação com a Carteira.

#include <vector>      ///< Biblioteca padrão usada para armazenar uma lista de ordens.

using std::vector;

/// @class Ordem
/// @brief Classe forward declarada para representar ordens de compra/venda associadas à carteira.
class Ordem;

/// @class Carteira
/// @brief Representa uma carteira de investimentos de um usuário.
/// @details Armazena código, nome, perfil, ponteiro para a conta vinculada e lista de ordens.
class Carteira {
private:
    Codigo codigo;             ///< Código identificador da carteira.
    Nome nome;                 ///< Nome do titular da carteira.
    Perfil perfil;             ///< Perfil de investimento do usuário.
    Conta* conta;              ///< Ponteiro para a conta vinculada à carteira.
    vector<Ordem*> ordens;     ///< Lista de ponteiros para ordens associadas à carteira.

public:

    /// @brief Define o código da carteira.
    /// @param codigo Objeto do tipo Codigo a ser atribuído.
    void setCodigo(Codigo);

    /// @brief Retorna o código da carteira.
    /// @return Código da carteira.
    Codigo getCodigo() const;

    /// @brief Define o nome do titular da carteira.
    /// @param nome Objeto do tipo Nome a ser atribuído.
    void setNome(Nome);

    /// @brief Retorna o nome do titular da carteira.
    /// @return Nome do titular.
    Nome getNome() const;

    /// @brief Define o perfil de investimento da carteira.
    /// @param perfil Objeto do tipo Perfil a ser atribuído.
    void setPerfil(Perfil);

    /// @brief Retorna o perfil da carteira.
    /// @return Perfil de investimento.
    Perfil getPerfil() const;

    /// @brief Associa uma conta à carteira.
    /// @param conta Ponteiro para objeto do tipo Conta.
    void setConta(Conta*);

    /// @brief Retorna o ponteiro para a conta associada à carteira.
    /// @return Ponteiro para Conta.
    Conta* getConta() const;

    /// @brief Adiciona uma ordem à carteira.
    /// @param ordem Ponteiro para a ordem a ser adicionada.
    void adicionarOrdem(Ordem*);

    /// @brief Remove uma ordem da carteira.
    /// @param ordem Ponteiro para a ordem a ser removida.
    void removerOrdem(Ordem*);

    /// @brief Retorna a lista de ordens associadas à carteira.
    /// @return Vetor de ponteiros para Ordem.
    vector<Ordem*> getOrdens() const;
};

#endif // CARTEIRA_H_INCLUDED
