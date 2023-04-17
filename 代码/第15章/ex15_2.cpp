/*
‘ÀÀ„∑˚÷ÿ‘ÿ 
*/

#include <iostream>
using namespace std;
class Vector{
	public:
		Vector(){ x = 0; y =0;
		}
		Vector(double xx, double yy){ x = xx; y =yy;
	    }
	    Vector operator + (Vector v2);
	    void display();
	private:
		double x;
		double y;
};

Vector Vector::operator + (Vector v2){
	Vector v;
	v.x = x + v2.x;
	v.y = y + v2.y;
	return v;
}

void Vector::display(){
	cout<<"("<< x <<","<< y <<")"<<endl;
}

int main()
{
	Vector vec1(3,4), vec2(5,-10), vec3;
	vec3 = vec1 + vec2;
	cout<<"vec1 = "; vec1.display();
	cout<<"vec2 = "; vec2.display();
	cout<<"vec1 + vec2 = "; vec3.display();
	return 0;
}
