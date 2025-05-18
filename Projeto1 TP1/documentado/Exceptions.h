#ifndef EXCEPTIONS_H_INCLUDED
#define EXCEPTIONS_H_INCLUDED

#include <stdexcept>
#include <string>

using namespace std;

/**
 * @brief Exceção lançada para erros relacionados ao Código.
 */
class CodigoException : public invalid_argument {
public:
    /**
     * @brief Construtor da exceção.
     * @param msg Mensagem de erro.
     */
    CodigoException(const string& msg) : invalid_argument(msg) {}
};

/**
 * @brief Exceção lançada para erros relacionados ao Código de Negociação.
 */
class CodigoNegociacaoException : public invalid_argument {
public:
    CodigoNegociacaoException(const string& msg) : invalid_argument(msg) {}
};

/**
 * @brief Exceção lançada para erros relacionados ao CPF.
 */
class CpfException : public invalid_argument {
public:
    CpfException(const string& msg) : invalid_argument(msg) {}
};

/**
 * @brief Exceção lançada para erros relacionados à Data.
 */
class DataException : public invalid_argument {
public:
    DataException(const string& msg) : invalid_argument(msg) {}
};

/**
 * @brief Exceção lançada para erros relacionados ao Nome.
 */
class NomeException : public invalid_argument {
public:
    NomeException(const string& msg) : invalid_argument(msg) {}
};

/**
 * @brief Exceção lançada para erros relacionados ao Perfil.
 */
class PerfilException : public invalid_argument {
public:
    PerfilException(const string& msg) : invalid_argument(msg) {}
};

/**
 * @brief Exceção lançada para erros relacionados ao valor monetário (Dinheiro).
 */
class DinheiroException : public invalid_argument {
public:
    DinheiroException(const string& msg) : invalid_argument(msg) {}
};

/**
 * @brief Exceção lançada para erros relacionados à Quantidade.
 */
class QuantidadeException : public invalid_argument {
public:
    QuantidadeException(const string& msg) : invalid_argument(msg) {}
};

/**
 * @brief Exceção lançada para erros relacionados à Senha.
 */
class SenhaException : public invalid_argument {
public:
    SenhaException(const string& msg) : invalid_argument(msg) {}
};

#endif
