#include "point.h"

int main(int argc, char const *argv[])
{
	/* code */
	point p(1,4);
	point p1(2,3);
	//point p2 = p.addPoints(p1);
	point p2 = p+p1;
	//p2.getPoint();
	cout<<p2;
	return 0;
}