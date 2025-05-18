#ifndef DOMINIO_H_INCLUDED
#define DOMINIO_H_INCLUDED

#include <string>
using std::string;

/**
 * @brief Classe que representa um CPF.
 */
class Cpf {
private:
    string valor;           ///< Valor do CPF.
    void validar(string);   ///< Valida o CPF fornecido.
public:

    /**
     * @brief Define o valor do CPF.
     * @param valor CPF no formato de string.
     */
    void setValor(string);

    /**
     * @brief Retorna o valor do CPF.
     * @return CPF como string.
     */
    string getValor() const;
};

/**
 * @brief Classe que representa um nome.
 */
class Nome {
private:
    string valor;           ///< Nome do usuário.
    void validar(string);   ///< Valida o nome fornecido.
public:
    void setValor(string);
    string getValor() const;
};

/**
 * @brief Classe que representa um código genérico.
 */
class Codigo {
private:
    string valor;
    void validar(string);
public:
    void setValor(string);
    string getValor() const;
};

/**
 * @brief Classe que representa o código de uma negociação.
 */
class CodigoNegociacao {
private:
    string valor;
    void validar(string);
public:
    void setValor(string);
    string getValor() const;
};

/**
 * @brief Classe que representa uma data.
 */
class Data {
private:
    string valor;
    void validar(string);
public:
    void setValor(string);
    string getValor() const;
};

/**
 * @brief Classe que representa o perfil de um investidor.
 */
class Perfil {
private:
    string valor;
    void validar(string);
public:
    void setValor(string);
    string getValor() const;
};

/**
 * @brief Classe que representa um valor monetário.
 */
class Dinheiro {
private:
    string valor;
    void validar(string);
public:
    void setValor(string);
    string getValor() const;
};

/**
 * @brief Classe que representa uma quantidade (ex: ações).
 */
class Quantidade {
private:
    string valor;
    void validar(string);
public:
    void setValor(string);
    string getValor() const;
};

/**
 * @brief Classe que representa uma senha.
 */
class Senha {
private:
    string valor;
    void validar(string);
public:
    void setValor(string);
    string getValor() const;
};

#endif // DOMINIO_H_INCLUDED
