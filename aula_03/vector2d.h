#ifndef MATH_VECTOR_H //basicamente ignora o código se já foi definido
//se comunica com o pre-processor
#define MATH_VECTOR_H

namespace math{

class Vector2D { //cria um tipo chamado Vector2D
	//no C++, um struct e uma class são praticamente o mesmo
public: //tudo o que está em public pode ser visto quando se chama o tipo
//da variável
//private torna o que é por ela incluída não visivel quando se chama o tipo
	Vector2D(double x, double y);
	Vector2D() = default; //construtor padrão Vector2D() é um construtor que não exige argumentos
	//o construtor igualado a default significa que há uma associação das variáveis aos valores padrão
	//selecionados depois
	Vector2D(const Vector2D &) = default; //cria uma cópia e inicia com os mesmos valores
	//, ou seja, simplesmente gera outro vetor com valores x = 0 e y = 0, que
	//foram os valores setados como default

	double x() const; //igualar a const significa que o retorno não é mudado
	//em strings, por exemplo, o método size() não altera a string nem pode ser
	//forçadamente modificado
    double y() const;

    //os seguintes métodos alteram o estado do objeto, por isso não se igualm a const
    Vector2D& invert(); 
    Vector2D& multiply(double);
    Vector2D& sum(const Vector2D &);

private:
    double x_{0}, y_{0}; //os valores nos parenteses são os inicializadores dos membros
};

Vector2D inverted(Vector2D);
Vector2D sum(Vector2D, const Vector2D &);
Vector2D multiply(Vector2D, double);

}

#endif
