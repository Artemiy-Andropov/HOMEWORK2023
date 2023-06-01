#include <iostream>
#include "Rational.h"
#include "Exception.h"
#include <numeric>

Rational::Rational()
{
	m_num = 0;
	m_den = 1;
}

Rational::Rational(int num, int den)
{
	m_num = num;
	if (den != 0)
		m_den = den;
	else
		throw ArrayException("Error in constructor with parameters. Invalid input. The denominator is 0.", 1);
}

Rational::Rational(const Rational& obj)
{
	m_num = obj.m_num;
	m_den = obj.m_den;
}

Rational Rational::operator=(const Rational& obj)
{
	m_num = obj.m_num;
	m_den = obj.m_den;
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Rational& obj)
{
	out << obj.m_num << "/" << obj.m_den;
	return out;
}

Rational Rational::operator+=(const Rational& obj)
{
	int mult_1 = m_den;
	int mult_2 = obj.m_den;

	int copy_num = obj.m_num;

	m_num = (m_num * mult_2) + (copy_num * mult_1);
	m_den = (m_den * mult_2);

	int div = std::gcd(m_num, m_den);

	if (div == 1 || div == 0)
		return *this;
	else
	{
		m_num /= div;
		m_den /= div;
		return *this;
	}
}

Rational Rational::operator+=(int number_)
{
	m_num = m_num + (number_ * m_den);

	int div = std::gcd(m_num, m_den);

	if (div == 1 || div == 0)
		return *this;
	else
	{
		m_num /= div;
		m_den /= div;
		return *this;
	}
}

Rational operator+(const Rational& obj_1, const Rational& obj_2)
{
	int mult_1 = obj_1.m_den;
	int mult_2 = obj_2.m_den;

	int copy_num = obj_2.m_num;

	int num_, den_;

	num_ = (obj_1.m_num * mult_2) + (copy_num * mult_1);
	den_ = (obj_1.m_den * mult_2);

	int div = std::gcd(num_, den_);

	if (div == 1 || div == 0)
	{
		Rational answer(num_, den_);
		return answer;
	}
	else
	{
		num_ /= div;
		den_ /= div;
		Rational answer(num_, den_);
		return answer;
	}
}

Rational Rational::operator-=(const Rational& obj)
{
	int mult_1 = m_den;
	int mult_2 = obj.m_den;

	int copy_num = obj.m_num;

	m_num = (m_num * mult_2) - (copy_num * mult_1);
	m_den = (m_den * mult_2);

	int div = std::gcd(m_num, m_den);

	if (div == 1 || div == 0)
		return *this;
	else
	{
		m_num /= div;
		m_den /= div;
		return *this;
	}
}

Rational Rational::operator-=(int number_)
{
	m_num = m_num - (number_ * m_den);

	int div = std::gcd(m_num, m_den);

	if (div == 1 || div == 0)
		return *this;
	else
	{
		m_num /= div;
		m_den /= div;
		return *this;
	}
}

Rational operator-(const Rational& obj_1, const Rational& obj_2)
{
	int mult_1 = obj_1.m_den;
	int mult_2 = obj_2.m_den;

	int copy_num = obj_2.m_num;

	int num_, den_;

	num_ = (obj_1.m_num * mult_2) - (copy_num * mult_1);
	den_ = (obj_1.m_den * mult_2);

	int div = std::gcd(num_, den_);

	if (div == 1 || div == 0)
	{
		Rational answer(num_, den_);
		return answer;
	}
	else
	{
		num_ /= div;
		den_ /= div;
		Rational answer(num_, den_);
		return answer;
	}
}

Rational Rational::operator*=(const Rational& obj)
{
	m_num *= obj.m_num;
	m_den *= obj.m_den;

	int div = std::gcd(m_num, m_den);

	if (div == 1 || div == 0)
		return *this;
	else
	{
		m_num /= div;
		m_den /= div;
		return *this;
	}
}

Rational Rational::operator*=(int number_)
{
	m_num = m_num * number_;

	int div = std::gcd(m_num, m_den);

	if (div == 1 || div == 0)
		return *this;
	else
	{
		m_num /= div;
		m_den /= div;
		return *this;
	}
}

Rational operator*(const Rational& obj_1, const Rational& obj_2)
{
	int num_ = obj_1.m_num * obj_2.m_num;
	int den_ = obj_1.m_den * obj_2.m_den;

	int div = std::gcd(num_, den_);

	if (div == 1 || div == 0)
	{
		Rational answer(num_, den_);
		return answer;
	}
	else
	{
		num_ /= div;
		den_ /= div;
		Rational answer(num_, den_);
		return answer;
	}
}

Rational Rational::operator/=(const Rational& obj)
{
	m_num *= obj.m_den;
	m_den *= obj.m_num;

	int div = std::gcd(m_num, m_den);

	if (div == 1)
		return *this;
	else if (div == 0)
	{
		if (m_den == 0)
			throw ArrayException("Error in division function on class object 'Rational'. Invalid input. The denominator is 0.", 1);
		else
			return *this;
	}
	else
	{
		m_num /= div;
		m_den /= div;
		return *this;
	}
}

Rational Rational::operator/=(int number_)
{
	if(number_ == 0)
		throw ArrayException("Error in division function on int. Invalid input. The number is 0.", 1);

	m_num = m_num / number_;

	int div = std::gcd(m_num, m_den);

	if (div == 1 || div == 0)
		return *this;
	else
	{
		m_num /= div;
		m_den /= div;
		return *this;
	}
}

Rational operator/(const Rational& obj_1, const Rational& obj_2)
{
	int num_ = obj_1.m_num * obj_2.m_den;
	int den_ = obj_1.m_den * obj_2.m_num;

	int div = std::gcd(num_, den_);

	if (div == 1)
	{
		Rational answer(num_, den_);
		return answer;
	}
	else if (div == 0)
	{
		if (den_ == 0)
			throw ArrayException("Error in division function on class object 'Rational'. Invalid input. The denominator is 0.", 1);
		else
		{
			Rational answer(num_, den_);
			return answer;
		}
	}
	else
	{
		num_ /= div;
		den_ /= div;
		Rational answer(num_, den_);
		return answer;
	}
}

const Rational& operator+(const Rational& i)
{
	return i;
}

Rational operator-(const Rational& i)
{
	int num_ = i.m_num * -1;
	int den_ = i.m_den;
	Rational answer(num_,den_);
	return answer;
}

int Rational::Numerator(const Rational& obj)
{
	int div = std::gcd(obj.m_num, obj.m_den);
	int number_;

	if (div == 1 || div == 0)
		return obj.m_num;
	else
	{
		number_ = obj.m_num / div;
		return number_;
	}
}

int Rational::Denominator(const Rational& obj)
{
	int div = std::gcd(obj.m_num, obj.m_den);
	int number_;
	
	if (div == 1 || div == 0)
		return obj.m_den;
	else
	{
		number_ = obj.m_den / div;
		return number_;
	}
}

bool operator==(const Rational& obj_1, const Rational& obj_2)
{
	int div_1 = std::gcd(obj_1.m_num, obj_1.m_den);
	int div_2 = std::gcd(obj_2.m_num, obj_2.m_den);

	int num_1 = obj_1.m_num;
	int num_2 = obj_2.m_num;

	int den_1 = obj_1.m_den;
	int den_2 = obj_2.m_den;

	if (div_1 == 0 && div_2 == 0)
		return true;
	else
	{
		if(div_1 == 0)
			return false;
		if(div_2 == 0)
			return false;
		
		num_1 /= div_1;
		den_1 /= div_1;
		num_2 /= div_2;
		den_2 /= div_2;

		if(num_1 != num_2)
			return false;
		if(den_1 != den_2)
			return false;
	}
	return true;
}

bool operator!=(const Rational& obj_1, const Rational& obj_2)
{
	return !(obj_1 == obj_2);
}