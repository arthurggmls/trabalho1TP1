#ifndef EXCEPTIONS_H_INCLUDED
#define EXCEPTIONS_H_INCLUDED

#include <stdexcept>
#include <string>

using namespace std;

/// @file Exceptions.h
/// @brief Exce��es espec�ficas para erros de valida��o de dom�nios.
///
/// Cont�m classes derivadas de invalid_argument que representam
/// erros de formato ou valor inv�lido para diferentes tipos de dom�nio,
/// como CPF, c�digos, datas, perfis, valores monet�rios, quantidades e senhas.

class CodigoException : public invalid_argument {
public:
    CodigoException(const string& msg) : invalid_argument(msg) {}
};

class CodigoNegociacaoException : public invalid_argument {
public:
    CodigoNegociacaoException(const string& msg) : invalid_argument(msg) {}
};

class CpfException : public invalid_argument {
public:
    CpfException(const string& msg) : invalid_argument(msg) {}
};

class DataException : public invalid_argument {
public:
    DataException(const string& msg) : invalid_argument(msg) {}
};

class NomeException : public invalid_argument {
public:
    NomeException(const string& msg) : invalid_argument(msg) {}
};

class PerfilException : public invalid_argument {
public:
    PerfilException(const string& msg) : invalid_argument(msg) {}
};

class DinheiroException : public invalid_argument {
public:
    DinheiroException(const string& msg) : invalid_argument(msg) {}
};

class QuantidadeException : public invalid_argument {
public:
    QuantidadeException(const string& msg) : invalid_argument(msg) {}
};

class SenhaException : public invalid_argument {
public:
    SenhaException(const string& msg) : invalid_argument(msg) {}
};

#endif
