#include "vector.h"
vector::vector()
{
	cur_size = 0;
	buf_size = 0;
	els = nullptr;
}
vector::vector(int size)
{
	cur_size=size;
	buf_size=size;
	els=new double[size];
	for (int i = 0;i < size;i++)
	{
		els[i] = 0.0;
	}
}
vector::vector(const vector &obj) // konstructor kopirovania
{
	this->cur_size = obj.size();
	this->buf_size = obj.size();
	this->els = new double[this->size()];
	for (int i = 0;i < this->size(); i++)
	{
		this->els[i] = obj.els[i];
	}
}
vector vector::operator=(const vector &obj) // operator prisvaivania
{
	this->cur_size = obj.size();
	this->buf_size = obj.size();
	this->els = new double[this->size()];
	for (int i = 0;i < this->size(); i++)
	{
		this->els[i] = obj.els[i];
	}
	return *this;
}

double & vector::push_back(double e)
{
	if (buf_size == 0)
	{
		buf_size = 2;
		els = new double[buf_size];
	}
	else
	{
		if (cur_size >= buf_size)
		{
			buf_size *= 2;
			double *tmp;
			tmp = new double[buf_size];
			for (int i = 0;i < size();i++)
			{
				tmp[i] = els[i];
			}
				delete[]els;
				els = tmp;
		}
	}
	els[cur_size++] = e;
	return els[cur_size - 1];
}

double & vector::at(int index)
{
	if (index<0 || index>size())
		return els[index];
	else
		return els[index];
}

double & vector::operator[](int index)
{
	return els[index];
}
bool vector:: operator==(vector obj)
{
	if (size() != obj.size())
		return false;
	else {
		for (int i = 0;i < size();i++)
			if (els[i] != obj.els[i])
				return false;
		  }
	return true;
}