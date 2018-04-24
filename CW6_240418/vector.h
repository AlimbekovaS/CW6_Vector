#pragma once
class vector
{
private:
	int cur_size;
	int buf_size;
	double *els;
public:
	// cons-s
	vector();
	vector(int size);
	vector(const vector &obj); // konstructor kopirovania
	
	int size()const// dlia raboty s conststantnumi obj
	{
		return cur_size;
	}

	//operators
	vector operator=(const vector &obj); //prisvaivanie
	double & operator[](int index);
	//methods
	double & push_back(double e);
	double & at(int index);
	bool operator==(vector obj);
	~vector() { delete[]els; }
};