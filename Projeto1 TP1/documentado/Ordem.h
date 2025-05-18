#ifndef ORDEM_H_INCLUDED
#define ORDEM_H_INCLUDED

#include "Dominio.h"
#include "Carteira.h"

/**
 * @brief Classe que representa uma ordem de investimento.
 *
 * A classe Ordem cont�m informa��es sobre uma opera��o de compra ou venda,
 * incluindo c�digo de identifica��o, c�digo de negocia��o, data, pre�o, quantidade
 * e a carteira � qual est� associada.
 */
class Ordem{
private:

    Codigo codigo;                      ///< C�digo identificador da ordem.
    CodigoNegociacao codigoNegociacao;  ///< C�digo da negocia��o associada.
    Data data;                          ///< Data da ordem.
    Dinheiro preco;                     ///< Pre�o por unidade.
    Quantidade quantidade;              ///< Quantidade de ativos.
    Carteira* carteira;                 ///< Ponteiro para a carteira associada.

public:

    /**
     * @brief Define o c�digo da ordem.
     * @param codigo C�digo a ser atribu�do.
     */
    void setCodigo(Codigo);

    /**
     * @brief Retorna o c�digo da ordem.
     * @return C�digo atual.
     */
    Codigo getCodigo() const;

    /**
     * @brief Define o c�digo de negocia��o.
     * @param codigoNegociacao C�digo de negocia��o a ser atribu�do.
     */
    void setCodigoNegociacao(CodigoNegociacao);

    /**
     * @brief Retorna o c�digo de negocia��o.
     * @return C�digo de negocia��o atual.
     */
    CodigoNegociacao getCodigoNegociacao() const;

    /**
     * @brief Define a data da ordem.
     * @param data Data a ser atribu�da.
     */
    void setData(Data);

    /**
     * @brief Retorna a data da ordem.
     * @return Data atual.
     */
    Data getData() const;

    /**
     * @brief Define o pre�o por unidade.
     * @param preco Valor monet�rio da ordem.
     */
    void setPreco(Dinheiro);

    /**
     * @brief Retorna o pre�o da ordem.
     * @return Pre�o atual.
     */
    Dinheiro getPreco() const;

    /**
     * @brief Define a quantidade de ativos.
     * @param quantidade Quantidade a ser atribu�da.
     */
    void setQuantidade(Quantidade);

    /**
     * @brief Retorna a quantidade de ativos.
     * @return Quantidade atual.
     */
    Quantidade getQuantidade() const;

    /**
     * @brief Define a carteira associada � ordem.
     * @param carteira Ponteiro para a carteira.
     */
    void setCarteira(Carteira*);

     /**
     * @brief Retorna a carteira associada � ordem.
     * @return Ponteiro para a carteira.
     */
    Carteira* getCarteira() const;


};



#endif // ORDEM_H_INCLUDED
