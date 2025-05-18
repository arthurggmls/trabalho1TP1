#ifndef CARTEIRA_H_INCLUDED
#define CARTEIRA_H_INCLUDED

#include "Dominio.h"
#include "Conta.h"

#include <vector>

using std::vector;

class Ordem;

/**
 * @brief Classe que representa uma carteira de investimentos de um usuário.
 *
 * A classe Carteira armazena informações pessoais do investidor, como código,
 * nome e perfil, além da associação com uma conta bancária e uma lista de ordens.
 */
class Carteira {
private:
    Codigo codigo;          ///< Código identificador da carteira.
    Nome nome;              ///< Nome do titular da carteira.
    Perfil perfil;          ///< Perfil de investidor.
    Conta* conta;           ///< Ponteiro para a conta associada à carteira.
    vector<Ordem*> ordens;  ///< Vetor de ponteiros para ordens de investimento.

public:

    /**
     * @brief Define o código da carteira.
     * @param codigo Código a ser atribuído.
     */
    void setCodigo(Codigo);

    /**
     * @brief Retorna o código da carteira.
     * @return Código da carteira.
     */
    Codigo getCodigo() const;

    /**
     * @brief Define o nome do titular da carteira.
     * @param nome Nome a ser atribuído.
     */
    void setNome(Nome);

    /**
     * @brief Retorna o nome do titular da carteira.
     * @return Nome do titular.
     */
    Nome getNome() const;

    /**
     * @brief Define o perfil do investidor.
     * @param perfil Perfil a ser atribuído.
     */
    void setPerfil(Perfil);

    /**
     * @brief Retorna o perfil do investidor.
     * @return Perfil do investidor.
     */
    Perfil getPerfil() const;

    /**
     * @brief Define a conta associada à carteira.
     * @param conta Ponteiro para a conta.
     */
    void setConta(Conta*);

    /**
     * @brief Retorna o ponteiro para a conta associada.
     * @return Ponteiro para Conta.
     */
    Conta* getConta() const;

    /**
     * @brief Adiciona uma ordem à carteira.
     * @param ordem Ponteiro para a ordem a ser adicionada.
     */
    void adicionarOrdem(Ordem*);

    /**
     * @brief Remove uma ordem da carteira.
     * @param ordem Ponteiro para a ordem a ser removida.
     */
    void removerOrdem(Ordem*);

    /**
     * @brief Retorna todas as ordens associadas à carteira.
     * @return Vetor de ponteiros para Ordens.
     */
    vector<Ordem*> getOrdens() const;
};


#endif // CARTEIRA_H_INCLUDED
