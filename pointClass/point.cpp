#include "point.h"

point::point(){
	x = 0;
	y = 0;
}

point::point(int a, int b):x(a),y(b){

// 	 x = a;
// 	 y = b;
 }

void point::getPoint() const{
	//(0, 0)
	// x++;
	// y++;
	cout<<"("<<x<<","<<y<<")";
}

void point::setPoint(int a, int b){
	x = a;
	y = b;
}

int point::getx(){
	return x;
}

int point::gety(){
	return y;
}

// point point::operator+(const point& rhs) const{

// 	point temp;
// 	temp.setPoint(x+rhs.x, y+rhs.y);
// 	return temp;

// }


point operator+(point first, point sec){
	point temp;
	int a = (first.getx()+sec.getx());
	int b = (first.gety()+sec.gety());
	temp.setPoint(a,b);
	return temp;
}

ostream& operator<<(ostream& out, const point& rhs){
	rhs.getPoint();
	//out<<rhs.x<<" "<<rhs.y;
	out<<endl;
	return out;
}




