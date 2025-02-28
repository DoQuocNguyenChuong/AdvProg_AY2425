#include <iostream>
#include <string>
#include <cmath>

using std::string;
using std::cout;
using std::endl;
using std::stod;


double mySin(double x);
double myCos(double x);
double mySqrt(double x);

/***
    Args:
        x (double): a number
    Returns:
        double: cosine of x
***/
double gt(int n){
	double tich=1;
	for(int i=1;i<=n;i++){
		tich*=i;
	}
	return tich;
}
double mu(double x,int n){
	double tich=1;
	for(int i=0;i<n;i++){
		tich*=x;
	}
	return tich;
}
double myCos(double x)
{
    int n=100;
    double cos=1;
    for(int i=1;i<=n;i++){
    	cos+=((mu(-1,i)/gt(2*i))*mu(x,2*i));
	}
	return cos;
}

/***
    Args:
        x (double): a number
    Returns:
        double: sine of x
***/
double mySin(double x)
{
    int n=100;
    double sin=0;
    for(int i=0;i<=n;i++){
    	sin+=((mu(-1,i)/gt(2*i+1))*mu(x,2*i+1));
	}
	return sin;
}


/***
    Args:
        x (double): a number
    Returns:
        double: square root of x
***/
double mySqrt(double x) {
    if (x < 0) {
        cout << "Invalid argument" << endl;
        exit(1);
    }
    double a=10,b=-20;
    while(a!=(-b)){
        b=0.5*(b+x/b);
        a=0.5*(a+x/a);
    }
    return a;
}
