#ifndef CONTA_H_INCLUDED
#define CONTA_H_INCLUDED

#include "Dominio.h"

/**
 * @brief Classe que representa uma conta de usuário no sistema.
 *
 * A classe Conta armazena os dados pessoais do usuário: CPF, nome e senha.
 */
class Conta{
private:

    Cpf cpf;     ///< CPF do titular da conta.
    Nome nome;   ///< Nome do titular da conta.
    Senha senha; ///< Senha de acesso à conta.

public:

    /**
     * @brief Define o CPF do titular da conta.
     * @param cpf CPF a ser atribuído.
     */
    void setCpf(Cpf);

     /**
     * @brief Retorna o CPF do titular da conta.
     * @return CPF atual.
     */
    Cpf getCpf() const;

    /**
     * @brief Define o nome do titular da conta.
     * @param nome Nome a ser atribuído.
     */
    void setNome(Nome);

    /**
     * @brief Retorna o nome do titular da conta.
     * @return Nome atual.
     */
    Nome getNome() const;

    /**
     * @brief Define a senha da conta.
     * @param senha Senha a ser atribuída.
     */
    void setSenha(Senha);

    /**
     * @brief Retorna a senha da conta.
     * @return Senha atual.
     */
    Senha getSenha() const;
};


#endif // CONTA_H_INCLUDED
