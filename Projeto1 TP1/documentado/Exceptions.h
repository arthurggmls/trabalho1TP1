#ifndef EXCEPTIONS_H_INCLUDED
#define EXCEPTIONS_H_INCLUDED

#include <stdexcept>
#include <string>

using namespace std;

/**
 * @brief Exce��o lan�ada para erros relacionados ao C�digo.
 */
class CodigoException : public invalid_argument {
public:
    /**
     * @brief Construtor da exce��o.
     * @param msg Mensagem de erro.
     */
    CodigoException(const string& msg) : invalid_argument(msg) {}
};

/**
 * @brief Exce��o lan�ada para erros relacionados ao C�digo de Negocia��o.
 */
class CodigoNegociacaoException : public invalid_argument {
public:
    CodigoNegociacaoException(const string& msg) : invalid_argument(msg) {}
};

/**
 * @brief Exce��o lan�ada para erros relacionados ao CPF.
 */
class CpfException : public invalid_argument {
public:
    CpfException(const string& msg) : invalid_argument(msg) {}
};

/**
 * @brief Exce��o lan�ada para erros relacionados � Data.
 */
class DataException : public invalid_argument {
public:
    DataException(const string& msg) : invalid_argument(msg) {}
};

/**
 * @brief Exce��o lan�ada para erros relacionados ao Nome.
 */
class NomeException : public invalid_argument {
public:
    NomeException(const string& msg) : invalid_argument(msg) {}
};

/**
 * @brief Exce��o lan�ada para erros relacionados ao Perfil.
 */
class PerfilException : public invalid_argument {
public:
    PerfilException(const string& msg) : invalid_argument(msg) {}
};

/**
 * @brief Exce��o lan�ada para erros relacionados ao valor monet�rio (Dinheiro).
 */
class DinheiroException : public invalid_argument {
public:
    DinheiroException(const string& msg) : invalid_argument(msg) {}
};

/**
 * @brief Exce��o lan�ada para erros relacionados � Quantidade.
 */
class QuantidadeException : public invalid_argument {
public:
    QuantidadeException(const string& msg) : invalid_argument(msg) {}
};

/**
 * @brief Exce��o lan�ada para erros relacionados � Senha.
 */
class SenhaException : public invalid_argument {
public:
    SenhaException(const string& msg) : invalid_argument(msg) {}
};

#endif
