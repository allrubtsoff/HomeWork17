
#include <iostream>

class MyClass
{
private:
	int a;
public:
	int GetA()
	{
		return a;
	}

	void SetA(int b)
	{
		a = b;
	}

};

class Vector
{
public:
	Vector() : x(5), y(5), z(5)
	{}
	Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
	{}
	
	void Show()
	{
		std::cout << '\n' << x << ' ' << y << ' ' << z;
	}
private:
	double x = 0;
	double y = 0;
	double z = 0;
};
int main()
{
	MyClass temp;
	temp.SetA(7);
	Vector v;
	v.Show();
    std::cout << "\n" << temp.GetA();

}
