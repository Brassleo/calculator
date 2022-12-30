//
// Created by Matsvei Kisin on 11.12.22.
//

#ifndef CALCULATOR_ARITHMETICANDLOGICOPERATORS_H
#define CALCULATOR_ARITHMETICANDLOGICOPERATORS_H

int sum(int, int);

int sub(int, int);

int mult(int, int);

int division(int, int);

int mod(int, int);

int unaryPlus(int);

int unaryMinus(int);

int bitwiseNot(int);

int bitwiseAnd(int, int);

int bitwiseOr(int, int);

int bitwiseExclusiveOr(int, int);

int bitwiseNand(int, int);

int bitwiseNor(int, int);

int leftShift(int number, int shift);

int rightShift (int number, int shift);

bool negat(bool);

bool conjunct(bool, bool);

bool disjunct(bool, bool);

bool exclusiveOr(bool, bool);

bool conjunctionNegation(bool, bool);

bool disjunctionNegation(bool, bool);

bool ascending(int, int);

bool descending(int, int);


#endif //CALCULATOR_ARITHMETICANDLOGICOPERATORS_H
