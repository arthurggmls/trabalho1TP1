#ifndef ORDEM_H_INCLUDED
#define ORDEM_H_INCLUDED

#include "Dominio.h"
#include "Carteira.h"

/// @file Ordem.h
/// @brief Define a classe Ordem para representar operações de compra/venda de ativos.
///
/// A classe Ordem agrupa os dados essenciais de uma transação, incluindo:
/// - Identificador da ordem (Codigo)
/// - Código de negociação do ativo (CodigoNegociacao)
/// - Data da execução (Data)
/// - Preço por unidade (Dinheiro)
/// - Quantidade negociada (Quantidade)
/// - Referência à carteira associada (Carteira*)
///
/// Disponibiliza métodos para configurar e consultar cada atributo.
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
    /// @brief Obtém o identificador da ordem.
    Codigo getCodigo() const;

    /// @brief Define o código de negociação do ativo.
    void setCodigoNegociacao(CodigoNegociacao);
    /// @brief Obtém o código de negociação do ativo.
    CodigoNegociacao getCodigoNegociacao() const;

    /// @brief Define a data de execução da ordem.
    void setData(Data);
    /// @brief Obtém a data de execução da ordem.
    Data getData() const;

    /// @brief Define o preço unitário.
    void setPreco(Dinheiro);
    /// @brief Obtém o preço unitário.
    Dinheiro getPreco() const;

    /// @brief Define a quantidade negociada.
    void setQuantidade(Quantidade);
    /// @brief Obtém a quantidade negociada.
    Quantidade getQuantidade() const;

    /// @brief Define a carteira associada à ordem.
    void setCarteira(Carteira*);
    /// @brief Obtém a carteira associada à ordem.
    Carteira* getCarteira() const;
};



#endif // ORDEM_H_INCLUDED
