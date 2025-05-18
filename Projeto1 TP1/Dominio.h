#ifndef DOMINIO_H_INCLUDED
#define DOMINIO_H_INCLUDED

#include <string>
using std::string;

/// @brief Classe que representa um CPF (Cadastro de Pessoa F�sica).
/// @details Respons�vel por armazenar e validar o valor de CPF.
class Cpf {
private:
    string valor; ///< Armazena o valor do CPF.

    /// @brief Valida o formato e os d�gitos do CPF.
    /// @param valor String contendo o CPF a ser validado.
    void validar(string);
public:
    /// @brief Ajusta o valor do CPF ap�s valida��o.
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

    /// @brief Valida o nome fornecido (letras e espa�os).
    /// @param valor Nome a ser validado.
    void validar(string);
public:
    /// @brief Ajusta o nome ap�s valida��o.
    /// @param valor Nome em formato de string.
    void setValor(string);

    /// @brief Retorna o nome armazenado.
    /// @return Nome como string.
    string getValor() const;
};

/// @brief Classe gen�rica para c�digos identificadores.
/// @details Pode ser utilizada para c�digos diversos.
class Codigo {
private:
    string valor; ///< Armazena o c�digo.

    /// @brief Valida o formato do c�digo.
    /// @param valor C�digo a ser validado.
    void validar(string);
public:
    /// @brief Ajusta o c�digo ap�s valida��o.
    /// @param valor C�digo em formato de string.
    void setValor(string);

    /// @brief Retorna o c�digo armazenado.
    /// @return C�digo como string.
    string getValor() const;
};

/// @brief Classe que representa um c�digo de negocia��o.
/// @details Espec�fico para sistemas financeiros.
class CodigoNegociacao {
private:
    string valor; ///< Armazena o c�digo de negocia��o.

    /// @brief Valida o c�digo de negocia��o.
    /// @param valor C�digo a ser validado.
    void validar(string);
public:
    /// @brief Ajusta o c�digo de negocia��o ap�s valida��o.
    /// @param valor C�digo em formato de string.
    void setValor(string valor);
    void setValor(string);

    /// @brief Retorna o c�digo de negocia��o armazenado.
    /// @return C�digo de negocia��o como string.
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
    /// @brief Ajusta a data ap�s valida��o.
    /// @param valor Data em formato de string.
    void setValor(string);

    /// @brief Retorna a data armazenada.
    /// @return Data como string.
    string getValor() const;
};

/// @brief Classe que representa um perfil de usu�rio.
/// @details Define categorias ou tipos de perfil.
class Perfil {
class Perfil {
private:
    string valor; ///< Armazena o perfil.

    /// @brief Valida o perfil fornecido.
    /// @param valor Perfil a ser validado.
    void validar(string);
public:
    /// @brief Ajusta o perfil ap�s valida��o.
    /// @param valor Perfil em formato de string.
    void setValor(string);

    /// @brief Retorna o perfil armazenado.
    /// @return Perfil como string.
    string getValor() const;
};

/// @brief Classe que representa valores monet�rios.
/// @details Armazena e valida formatos de dinheiro.
class Dinheiro {
private:
    string valor; ///< Armazena o valor monet�rio.

    /// @brief Valida o formato monet�rio (ex: "123.45").
    /// @param valor Quantia a ser validada.
    void validar(string);
public:
    /// @brief Ajusta o valor monet�rio ap�s valida��o.
    /// @param valor Quantia em formato de string.
    void setValor(string);

    /// @brief Retorna o valor monet�rio armazenado.
    /// @return Valor como string.
    string getValor() const;
};

/// @brief Classe que representa uma quantidade.
/// @details Usada para quantidades de itens ou unidades.
class Quantidade {
private:
    string valor; ///< Armazena a quantidade.

    /// @brief Valida o formato num�rico da quantidade.
    /// @param valor Quantidade a ser validada.
    void validar(string);
public:
    /// @brief Ajusta a quantidade ap�s valida��o.
    /// @param valor Quantidade em formato de string.
    void setValor(string);

    /// @brief Retorna a quantidade armazenada.
    /// @return Quantidade como string.
    string getValor() const;
};

/// @brief Classe que representa uma senha de acesso.
/// @details Armazena e valida pol�ticas de senha.
class Senha {
private:
    string valor; ///< Armazena a senha.

    /// @brief Valida a senha conforme crit�rios de seguran�a.
    /// @param valor Senha a ser validada.
    void validar(string);
public:
    /// @brief Ajusta a senha ap�s valida��o.
    /// @param valor Senha em formato de string.
    void setValor(string);

    /// @brief Retorna a senha armazenada (geralmente n�o exposta).
    /// @return Senha como string.
    string getValor() const;
};

#endif // DOMINIO_H_INCLUDED
