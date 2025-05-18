#ifndef CONTA_H_INCLUDED
#define CONTA_H_INCLUDED

#include "Dominio.h"

/// @brief Representa uma conta de usu�rio.
///
/// A classe Conta centraliza informa��es de acesso de um usu�rio, incluindo:
/// - CPF do titular (Cpf)
/// - Nome do titular (Nome)
/// - Senha de acesso (Senha)
///
/// Disponibiliza m�todos para definir e obter esses atributos.
class Conta{
private:
    Cpf cpf;      ///< CPF do usu�rio.
    Nome nome;    ///< Nome do usu�rio.
    Senha senha;  ///< Senha de acesso.

public:
    /// @brief Define o CPF do usu�rio.
    void setCpf(Cpf);

    /// @brief Retorna o CPF do usu�rio.
    Cpf getCpf() const;

    /// @brief Define o nome do usu�rio.
    void setNome(Nome);

    /// @brief Retorna o nome do usu�rio.
    Nome getNome() const;

    /// @brief Define a senha de acesso.
    void setSenha(Senha);

    /// @brief Retorna a senha de acesso.
    Senha getSenha() const;
};


#endif // CONTA_H_INCLUDED
