//
// Created by Matsvei Kisin on 29.12.22.
//
#include <cmath>
#include "scientificFunctions.h"

double pow(double x, int y){
    double res=1;
    if(y==0) return 1;
    else if (y>0){
        for (int i=0; i<y;i++){
            res*=x;
        }
        return res;
    } else{
        for (int i=0; i<(-y);i++){
            res*=x;
        }
        return 1/res;
    }
}
double factorial(double n){
    double res=1;
    for(int i=1;i<n;i++){
        res*=n;
    }
    return res;
}

double sum(double a, double b) {return a+b;}

double sub(double a, double b) {return a-b;}

double mult(double a, double b) {return a*b;}

double division(double a, double b) {return a/b;}

double mySqrt (double a){ return sqrt(a);}

double myLog (double a){return log(a);}

double myLog10 (double a){return log10(a);}

double myExp (double a) { return exp(a);}

double myCeil (double a){return ceil(a);}

double myFloor (double a){return floor(a);}

double myAbs (double a){return abs(a);}

double mySin (double a){return sin(a);}

double myCos (double a){return cos(a);}

double myTan (double a){return tan(a);}