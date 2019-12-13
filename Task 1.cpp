#include<iostream>
using namespace std;
class Polygon
{
	protected:
		int width;
		int height;
		public:
			Polygon()
			{
				width=0;
				height=0;
			}
			polygon(int w, int h)
			{
				width=w;
				height=h;
			}
};
class output
{
	public:
	void print(int a)
	{
		cout<<a<<endl;
	}
};
class rectangle:Polygon, output
{
	public:
	rectangle(int w, int h)
	{
		polygon(w,h);
	}
	int a;
	int area()
	{
		a=width*height;
		return a;
	}
};
class triangle:Polygon, output
{
	public:
	triangle(int w,int h)
	{
		polygon(w,h);
	}
	int a;
	int area()
	{
		a=width*height;
		a=a/2;
		return a;
	}
};
int main()
{
	int x;
	rectangle obj(2,3);
	x=obj.area();
	cout<<"Rectangle area: ";
	output o;
	o.print(x);
	triangle obj1(4,5);
	x=obj1.area();
	cout<<"triangle area: ";
	output o1;
	o1.print(x);
}
