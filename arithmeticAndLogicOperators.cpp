//
// Created by Matsvei Kisin on 11.12.22.
//

#include "arithmeticAndLogicOperators.h"
int sum(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int mult(int a, int b){
    return a*b;
}

int division(int a, int b){
    return a/b;
}
int mod(int a, int b){
    return a%b;
}
int unaryPlus(int a){
    return a;
}

int unaryMinus(int a){
    return -a;
}

int bitwiseNot(int a){
    return ~a;
}

int bitwiseOr(int a, int b){
    return a|b;
}

int bitwiseAnd(int a, int b){
    return a&b;
}

int bitwiseExclusiveOr(int a, int b){
    return a^b;
}

int bitwiseNand(int a,int b){
    return ~(a&b);
}

int bitwiseNor(int a, int b){
    return ~(a|b);
}

int leftShift(int a,int b){
    return a<<b;
}

int rightShift(int a, int b){
    return a>>b;
}

bool negation(bool a){
    return !a;
}

bool conjunction(bool a, bool b){
    return a&&b;
}

bool disjunction(bool a, bool b){
    return a||b;
}

bool exclusiveOr(bool a, bool b){
    return a!=b;
}

bool conjunctionNegation(bool a, bool b){
    return !(a&&b);
}

bool disjunctionNegation(bool a, bool b){
    return !(a||b);
}
