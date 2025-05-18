#ifndef ORDEM_H_INCLUDED
#define ORDEM_H_INCLUDED

#include "Dominio.h"
#include "Carteira.h"

/**
 * @brief Classe que representa uma ordem de investimento.
 *
 * A classe Ordem contém informações sobre uma operação de compra ou venda,
 * incluindo código de identificação, código de negociação, data, preço, quantidade
 * e a carteira à qual está associada.
 */
class Ordem{
private:

    Codigo codigo;                      ///< Código identificador da ordem.
    CodigoNegociacao codigoNegociacao;  ///< Código da negociação associada.
    Data data;                          ///< Data da ordem.
    Dinheiro preco;                     ///< Preço por unidade.
    Quantidade quantidade;              ///< Quantidade de ativos.
    Carteira* carteira;                 ///< Ponteiro para a carteira associada.

public:

    /**
     * @brief Define o código da ordem.
     * @param codigo Código a ser atribuído.
     */
    void setCodigo(Codigo);

    /**
     * @brief Retorna o código da ordem.
     * @return Código atual.
     */
    Codigo getCodigo() const;

    /**
     * @brief Define o código de negociação.
     * @param codigoNegociacao Código de negociação a ser atribuído.
     */
    void setCodigoNegociacao(CodigoNegociacao);

    /**
     * @brief Retorna o código de negociação.
     * @return Código de negociação atual.
     */
    CodigoNegociacao getCodigoNegociacao() const;

    /**
     * @brief Define a data da ordem.
     * @param data Data a ser atribuída.
     */
    void setData(Data);

    /**
     * @brief Retorna a data da ordem.
     * @return Data atual.
     */
    Data getData() const;

    /**
     * @brief Define o preço por unidade.
     * @param preco Valor monetário da ordem.
     */
    void setPreco(Dinheiro);

    /**
     * @brief Retorna o preço da ordem.
     * @return Preço atual.
     */
    Dinheiro getPreco() const;

    /**
     * @brief Define a quantidade de ativos.
     * @param quantidade Quantidade a ser atribuída.
     */
    void setQuantidade(Quantidade);

    /**
     * @brief Retorna a quantidade de ativos.
     * @return Quantidade atual.
     */
    Quantidade getQuantidade() const;

    /**
     * @brief Define a carteira associada à ordem.
     * @param carteira Ponteiro para a carteira.
     */
    void setCarteira(Carteira*);

     /**
     * @brief Retorna a carteira associada à ordem.
     * @return Ponteiro para a carteira.
     */
    Carteira* getCarteira() const;


};



#endif // ORDEM_H_INCLUDED
