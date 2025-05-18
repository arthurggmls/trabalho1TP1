#ifndef CONTA_H_INCLUDED
#define CONTA_H_INCLUDED

#include "Dominio.h"

/// @brief Representa uma conta de usuário.
///
/// A classe Conta centraliza informações de acesso de um usuário, incluindo:
/// - CPF do titular (Cpf)
/// - Nome do titular (Nome)
/// - Senha de acesso (Senha)
///
/// Disponibiliza métodos para definir e obter esses atributos.
class Conta{
private:
    Cpf cpf;      ///< CPF do usuário.
    Nome nome;    ///< Nome do usuário.
    Senha senha;  ///< Senha de acesso.

public:
    /// @brief Define o CPF do usuário.
    void setCpf(Cpf);

    /// @brief Retorna o CPF do usuário.
    Cpf getCpf() const;

    /// @brief Define o nome do usuário.
    void setNome(Nome);

    /// @brief Retorna o nome do usuário.
    Nome getNome() const;

    /// @brief Define a senha de acesso.
    void setSenha(Senha);

    /// @brief Retorna a senha de acesso.
    Senha getSenha() const;
};


#endif // CONTA_H_INCLUDED
