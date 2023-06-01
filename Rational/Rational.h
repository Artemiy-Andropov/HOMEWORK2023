#pragma once
#include <iostream>

class Rational
{
	int m_num;
	int m_den;

public:

	/*
	*@brief Конструктор
	*/
	Rational();

	/*
	*@brief Конструктор с параметрами
	*@param Числитель(int)
	*@param Знаминатель(int)
	*/
	Rational(int num, int den);

	/*
	*@brief Конструктор копирования
	*@param Константная ссылка на объект класса "Rational"
	*/
	Rational(const Rational &obj);

	/*
	*@brief Оператор =
	*@param Константная ссылка на объект класса "Rational"
	*@return Объект класса "Rational"
	*/
	Rational operator=(const Rational& obj);

	/*
	*@brief Оператор += с объектом класса "Rational"
	*@param Константная ссылка на объект класса "Rational"
	*@return Объект класса "Rational"
	*/
	Rational operator+=(const Rational& obj);

	/*
	*@brief Оператор += c целым числом
	*@param Целое число
	*@return Объект класса "Rational"
	*/
	Rational operator+=(int number_);
	
	/*
	*@brief Бинарный оператор +
	*@param Константная ссылка на объект класса "Rational"
	*@param Константная ссылка на объект класса "Rational"
	*@return Объект класса "Rational"
	*/
	friend Rational operator+(const Rational& obj_1, const Rational& obj_2);

	/*
	*@brief Оператор -= с объектом класса "Rational"
	*@param Константная ссылка на объект класса "Rational"
	*@return Объект класса "Rational"
	*/
	Rational operator-=(const Rational& obj);

	/*
	*@brief Оператор -= c целым числом
	*@param Целое число
	*@return Объект класса "Rational"
	*/
	Rational operator-=(int number_);

	/*
	*@brief Бинарный оператор -
	*@param Константная ссылка на объект класса "Rational"
	*@param Константная ссылка на объект класса "Rational"
	*@return Объект класса "Rational"
	*/
	friend Rational operator-(const Rational& obj_1, const Rational& obj_2);

	/*
	*@brief Оператор *= с объектом класса "Rational"
	*@param Константная ссылка на объект класса "Rational"
	*@return Объект класса "Rational"
	*/
	Rational operator*=(const Rational& obj);

	/*
	*@brief Оператор *= c целым числом
	*@param Целое число
	*@return Объект класса "Rational"
	*/
	Rational operator*=(int number_);

	/*
	*@brief Бинарный оператор *
	*@param Константная ссылка на объект класса "Rational"
	*@param Константная ссылка на объект класса "Rational"
	*@return Объект класса "Rational"
	*/
	friend Rational operator*(const Rational& obj_1, const Rational& obj_2);

	/*
	*@brief Оператор /= с объектом класса "Rational"
	*@param Константная ссылка на объект класса "Rational"
	*@return Объект класса "Rational"
	*/
	Rational operator/=(const Rational& obj);

	/*
	*@brief Оператор /= c целым числом
	*@param Целое число
	*@return Объект класса "Rational"
	*/
	Rational operator/=(int number_);

	/*
	*@brief Бинарный оператор /
	*@param Константная ссылка на объект класса "Rational"
	*@param Константная ссылка на объект класса "Rational"
	*@return Объект класса "Rational"
	*/
	friend Rational operator/(const Rational& obj_1, const Rational& obj_2);

	/*
	*@brief Унарный оператор +
	*@param Константная ссылка на объект класса "Rational"
	*@return Константая ссылка на объект класса "Rational"
	*/
	friend const Rational& operator+(const Rational& i);

	/*
	*@brief Унарный оператор -
	*@param Константная ссылка на объект класса "Rational"
	*@return Объект класса "Rational"
	*/
	friend Rational operator-(const Rational& i);

	/*
	*@brief Получение числителя
	*@param Константная ссылка на объект класса "Rational"
	*@return Целое число
	*/
	int Numerator(const Rational& obj);

	/*
	*@brief Получение знаминателя
	*@param Константная ссылка на объект класса "Rational"
	*@return Целое число
	*/
	int Denominator(const Rational& obj);

	/*
	*@brief Оператор ==
	*@param Константная ссылка на объект класса "Rational"
	*@param Константная ссылка на объект класса "Rational"
	*@return True или False
	*/
	friend bool operator==(const Rational& obj_1, const Rational& obj_2);

	/*
	*@brief Оператор !=
	*@param Константная ссылка на объект класса "Rational"
	*@param Константная ссылка на объект класса "Rational"
	*@return True или False
	*/
	friend bool operator!=(const Rational& obj_1, const Rational& obj_2);

	/*
	*@brief Перегрузка оператора << для класса "Rational"
	*@param Ссылка на поток вывода
	*@param Объект класса "Rational"
	*@return Ссылка на поток вывода
	*/
	friend std::ostream& operator<<(std::ostream& out, const Rational& obj);
};