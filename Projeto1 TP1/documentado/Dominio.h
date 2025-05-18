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
    string valor;           ///< Nome do usu�rio.
    void validar(string);   ///< Valida o nome fornecido.
public:
    void setValor(string);
    string getValor() const;
};

/**
 * @brief Classe que representa um c�digo gen�rico.
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
 * @brief Classe que representa o c�digo de uma negocia��o.
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
 * @brief Classe que representa um valor monet�rio.
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
 * @brief Classe que representa uma quantidade (ex: a��es).
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
