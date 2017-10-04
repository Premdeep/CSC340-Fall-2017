#include <iostream>
using namespace std;
	
class point{
private:
	int x;
	int y;
public:
	point();
	point(int a, int b);
	//friend ostream& operator<<(ostream& out, const point& rhs) ;
	void getPoint() const;
	void setPoint(int a, int b);
	int getx();
	int gety();
	//point operator+(const point& rhs) const;
	//point operator+(const point)
};

point operator+(point first, point sec);

ostream& operator<<(ostream& out,const point& rhs);