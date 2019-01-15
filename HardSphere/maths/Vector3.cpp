
#include<cmath>

#include"Vector3.hpp"


double Vector3::operator*(Vector3 v1)
{
	return(x*v1.x+y*v1.y+v1.z*z);
}



Vector3 Vector3::operator+(Vector3 v1)
{
	return Vector3(v1.x+x,v1.y+y,v1.z+z);

}


Vector3 Vector3::operator/(double s)
{
	return Vector3(this->x/(s),this->y/(s),this->z/(s));
}


Vector3 Vector3::operator-(Vector3 v)
{
  return ((*this)+(v*(-1.0)));
}
void Vector3::operator=(const Vector3 &v)
{
	x = v.x;
	y = v.y;
	z = v.z;

}

double Vector3::square()
{
	return((*this)*(*this));

}

Vector3 Vector3::operator*(double s)
{
	return Vector3(s*this->x,s*this->y,s*this->z);

}

double dot(Vector3 A, Vector3 B)
{
  return A.x*B.x+A.y*B.y+A.z*B.z;

}
Vector3 Vector3::V12(Vector3 V1, Vector3 V2)
{
	return V2-V1;
}
Vector3 unit(Vector3 V){
	return V/sqrt(V.square());
}
