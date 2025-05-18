#ifndef ORDEM_H_INCLUDED
#define ORDEM_H_INCLUDED

#include "Dominio.h"
#include "Carteira.h"

/// @file Ordem.h
/// @brief Define a classe Ordem para representar opera��es de compra/venda de ativos.
///
/// A classe Ordem agrupa os dados essenciais de uma transa��o, incluindo:
/// - Identificador da ordem (Codigo)
/// - C�digo de negocia��o do ativo (CodigoNegociacao)
/// - Data da execu��o (Data)
/// - Pre�o por unidade (Dinheiro)
/// - Quantidade negociada (Quantidade)
/// - Refer�ncia � carteira associada (Carteira*)
///
/// Disponibiliza m�todos para configurar e consultar cada atributo.
class Ordem{
private:

    Codigo codigo;
    CodigoNegociacao codigoNegociacao;
    Data data;
    Dinheiro preco;
    Quantidade quantidade;
    Carteira* carteira;

public:
    /// @brief Define o identificador da ordem.
    void setCodigo(Codigo);
    /// @brief Obt�m o identificador da ordem.
    Codigo getCodigo() const;

    /// @brief Define o c�digo de negocia��o do ativo.
    void setCodigoNegociacao(CodigoNegociacao);
    /// @brief Obt�m o c�digo de negocia��o do ativo.
    CodigoNegociacao getCodigoNegociacao() const;

    /// @brief Define a data de execu��o da ordem.
    void setData(Data);
    /// @brief Obt�m a data de execu��o da ordem.
    Data getData() const;

    /// @brief Define o pre�o unit�rio.
    void setPreco(Dinheiro);
    /// @brief Obt�m o pre�o unit�rio.
    Dinheiro getPreco() const;

    /// @brief Define a quantidade negociada.
    void setQuantidade(Quantidade);
    /// @brief Obt�m a quantidade negociada.
    Quantidade getQuantidade() const;

    /// @brief Define a carteira associada � ordem.
    void setCarteira(Carteira*);
    /// @brief Obt�m a carteira associada � ordem.
    Carteira* getCarteira() const;
};



#endif // ORDEM_H_INCLUDED
