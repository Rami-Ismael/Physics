#include <iostream>
#include <math.h>
using namespace std;
double getCos(double radian){
    if (abs(cos(radian))<0.00001)
        return 0;
    else
        return cos(radian);
}
double getSin(double radian){
    if (abs(sin(radian))<0.00001)
        return 0;
    else
        return sin(radian);
}

double DegreeToRadian(long degree){
    double PI = 3.14159265;
    return (degree*PI)/180.0;
}
long pythogeran(double a, double degreeOfA,double b, double degreeOfB){
    double ax = (a*getCos(DegreeToRadian(degreeOfA)));
   // cout<<ax<<endl;
    double ay = (a*getSin(DegreeToRadian(degreeOfA)));
   // cout<<ay<<endl;
    double bx = (b*getCos(DegreeToRadian(degreeOfB)));
  //  cout<<bx<<endl;
    double by =  (b*getSin(DegreeToRadian(degreeOfB)));
 //   cout<<by<<endl;
  //  cout<<cos(DegreeToRadian(degreeOfB))<<endl;
    double x = (ax+bx)*(ax+bx);
    double y = (ay+by)*(ay+by);
    return sqrt(x+y);
}
float DotProduct(float i, float f,float I,float J);
float Work(float force, float x1, float x2);
int main() {
  /**  std::cout << "Hello, World!" << std::endl;
    //this method will ask you 3 as parameter get pythorgean
    double a = 32;
    double b =42;
    double degreeOfA;
    double degreeOfB;
    cout<<"What is side A"<<endl;
    cin>>a;
    cout<<"What is the degree of A"<<endl;
    cin>>degreeOfA;
    cout<<"What is a side B"<<endl;
    cin>>b;
    cout<<"What the angle of side of B"<<endl;
    cin>>degreeOfB;
    //the cos should be zero
    cout<<pythogeran(a,degreeOfA,b,degreeOfB)<<endl;
    */
    // this method will be force ask for a regular i and j questio
    //this mehtod will hold i and j and take a dot porduct
    DotProduct(32,-42,-9.5,-3.7);
    return 0;
}
float DotProduct(float i, float j, float I,float J){
    //the algebra definition will the dot
    // prdouct is equal to the summation
    // of each quitote magnitude of the two in the dimension
    cout<<(i*I)+(j*J)<<endl;
    return (i*I)+(j*J);
}
