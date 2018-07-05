#include <exception>
#include <stdexcept>
using std::exception;
/**
	*@brief Classe de exceção Argumentos errados.
	*@details Verifica se a string dada pelo usuário é válida ou não.
	*@return Texto.
*/
class ArgumentosErrados:public exception{
public:
	const char* what(){
		return "O valor informado está errado, os valores possíveis são: 1,2,3 ou 4! Será jogado o valor 1 ataque básico!";
	}
};