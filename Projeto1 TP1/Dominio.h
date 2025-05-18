#ifndef DOMINIO_H_INCLUDED
#define DOMINIO_H_INCLUDED

#include <string>
using std::string;

/// @brief Classe que representa um CPF (Cadastro de Pessoa Física).
/// @details Responsável por armazenar e validar o valor de CPF.
class Cpf {
private:
    string valor; ///< Armazena o valor do CPF.

    /// @brief Valida o formato e os dígitos do CPF.
    /// @param valor String contendo o CPF a ser validado.
    void validar(string);
public:
    /// @brief Ajusta o valor do CPF após validação.
    /// @param valor CPF em formato de string.
    void setValor(string);

    /// @brief Retorna o CPF armazenado.
    /// @return Valor do CPF como string.
    string getValor() const;
};

/// @brief Classe que representa um nome.
/// @details Armazena e valida um nome de pessoa.
class Nome {
private:
    string valor; ///< Armazena o nome.

    /// @brief Valida o nome fornecido (letras e espaços).
    /// @param valor Nome a ser validado.
    void validar(string);
public:
    /// @brief Ajusta o nome após validação.
    /// @param valor Nome em formato de string.
    void setValor(string);

    /// @brief Retorna o nome armazenado.
    /// @return Nome como string.
    string getValor() const;
};

/// @brief Classe genérica para códigos identificadores.
/// @details Pode ser utilizada para códigos diversos.
class Codigo {
private:
    string valor; ///< Armazena o código.

    /// @brief Valida o formato do código.
    /// @param valor Código a ser validado.
    void validar(string);
public:
    /// @brief Ajusta o código após validação.
    /// @param valor Código em formato de string.
    void setValor(string);

    /// @brief Retorna o código armazenado.
    /// @return Código como string.
    string getValor() const;
};

/// @brief Classe que representa um código de negociação.
/// @details Específico para sistemas financeiros.
class CodigoNegociacao {
private:
    string valor; ///< Armazena o código de negociação.

    /// @brief Valida o código de negociação.
    /// @param valor Código a ser validado.
    void validar(string);
public:
    /// @brief Ajusta o código de negociação após validação.
    /// @param valor Código em formato de string.
    void setValor(string valor);
    void setValor(string);

    /// @brief Retorna o código de negociação armazenado.
    /// @return Código de negociação como string.
    string getValor() const;
};

/// @brief Classe que representa uma data.
/// @details Armazena e valida datas em formato aceito.
class Data {
private:
    string valor; ///< Armazena a data.

    /// @brief Valida o formato (DD/MM/AAAA) e valores.
    /// @param valor Data a ser validada.
    void validar(string);
public:
    /// @brief Ajusta a data após validação.
    /// @param valor Data em formato de string.
    void setValor(string);

    /// @brief Retorna a data armazenada.
    /// @return Data como string.
    string getValor() const;
};

/// @brief Classe que representa um perfil de usuário.
/// @details Define categorias ou tipos de perfil.
class Perfil {
class Perfil {
private:
    string valor; ///< Armazena o perfil.

    /// @brief Valida o perfil fornecido.
    /// @param valor Perfil a ser validado.
    void validar(string);
public:
    /// @brief Ajusta o perfil após validação.
    /// @param valor Perfil em formato de string.
    void setValor(string);

    /// @brief Retorna o perfil armazenado.
    /// @return Perfil como string.
    string getValor() const;
};

/// @brief Classe que representa valores monetários.
/// @details Armazena e valida formatos de dinheiro.
class Dinheiro {
private:
    string valor; ///< Armazena o valor monetário.

    /// @brief Valida o formato monetário (ex: "123.45").
    /// @param valor Quantia a ser validada.
    void validar(string);
public:
    /// @brief Ajusta o valor monetário após validação.
    /// @param valor Quantia em formato de string.
    void setValor(string);

    /// @brief Retorna o valor monetário armazenado.
    /// @return Valor como string.
    string getValor() const;
};

/// @brief Classe que representa uma quantidade.
/// @details Usada para quantidades de itens ou unidades.
class Quantidade {
private:
    string valor; ///< Armazena a quantidade.

    /// @brief Valida o formato numérico da quantidade.
    /// @param valor Quantidade a ser validada.
    void validar(string);
public:
    /// @brief Ajusta a quantidade após validação.
    /// @param valor Quantidade em formato de string.
    void setValor(string);

    /// @brief Retorna a quantidade armazenada.
    /// @return Quantidade como string.
    string getValor() const;
};

/// @brief Classe que representa uma senha de acesso.
/// @details Armazena e valida políticas de senha.
class Senha {
private:
    string valor; ///< Armazena a senha.

    /// @brief Valida a senha conforme critérios de segurança.
    /// @param valor Senha a ser validada.
    void validar(string);
public:
    /// @brief Ajusta a senha após validação.
    /// @param valor Senha em formato de string.
    void setValor(string);

    /// @brief Retorna a senha armazenada (geralmente não exposta).
    /// @return Senha como string.
    string getValor() const;
};

#endif // DOMINIO_H_INCLUDED
