//
// Created by Matsvei Kisin on 28.12.22.
//
using namespace std;
#include <cmath>
#include "arithmeticAndLogicOperators.h"
#include "scientificFunctions.h"
#include "mathFunctions.h"
#ifndef CALCULATOR_INPUT_FUNCTIONS_H
#define CALCULATOR_INPUT_FUNCTIONS_H
int (*standard_binary[])(int,int)={sum, sub, mult, division, mod};
int (*standard_unary[])(int)={unaryPlus, unaryMinus};
int (*programmer_int_binary[])(int,int)={ bitwiseAnd,bitwiseOr,bitwiseExclusiveOr,
                                          bitwiseNand,bitwiseNor,leftShift,
                                          rightShift };
bool (*programmer_bool_binary[])(bool,bool)={conjunct,disjunct,exclusiveOr,
                                             conjunctionNegation,disjunctionNegation};
double (*scientific_unary[])(double)={mySqrt, myLog, myLog10,myExp, myCeil,myFloor, myAbs,
                                          mySin, myCos, myTan, factorial, reciprocalFunction};
double (*scientific_binary[])(double, double)={sum,sub,mult,division};

void input(){
    int calc_type;
    int function;
    int op1,op2;
    bool bop1;
    while(true) {
        cout << "Choose calculator type:\n1. Standard\n2. Programmer\n3. Scientific\n4. Exit" << endl;
        cin >> calc_type;
        switch (calc_type) {
            case 1: {
                cout<<"Choose function:\n1. sum\n2. sub\n3. mult\n4. division\n5. mod\n6. unaryPlus\n7. unaryMinus"<<endl;
                cin>>function;
                cout<<"Enter operands:"<<endl;
                if (function>6) {
                    cin>>op1;
                    cout<<standard_unary[function-6](op1)<<endl;
                    break;
                }else{
                    cin>>op1>>op2;
                    cout<<standard_binary[function-1](op1, op2)<<endl;
                    break;
                }
            }
            case 2: {
                cout<<"Choose function:\n0. bitwiseNot\n1. bitwiseAnd\n2. bitwiseOr\n3. bitwiseExclusiveOr\n"
                      "4. bitwiseNand\n5. bitwiseNor\n6. leftShift\n7. rightShift\n"
                      "8. conjunct\n9. disjunct\n10. exclusiveOr\n11. "
                      "conjunctionNegation\n12. disjunctionNegation\n13. negation\n"
                      "14. ascending\n15. descending"<<endl;
                cin>>function;
                cout<<"Enter operands:"<<endl;
                if (function>=1 && function<=7) {
                    cin>>op1>>op2;
                    cout<<programmer_int_binary[function-1](op1, op2)<<endl;
                    break;
                }else if (function == 0){
                    cin>>op1;
                    cout<<bitwiseNot(op1)<<endl;
                    break;
                } else if(function>=8 && function <=12){
                    cin>>op1>>op2;
                    cout<<programmer_bool_binary[function-8](op1, op2)<<endl;
                    break;
                } else if(function ==13){
                    cin>>bop1;
                    cout<<negat(bop1)<<endl;
                    break;
                } else if(function == 14){
                    cin>>op1>>op2;
                    cout<<ascending(op1,op2)<<endl;
                    break;
                } else if(function==15){
                    cin>>op1>>op2;
                    cout<<descending(op1,op2)<<endl;
                    break;
                } else cout<<"incorrect input"<<endl;
            }
            case 3: {
                double dop1,dop2;
                cout<<"Choose function:\n0. sum\n1. sub\n2. mult\n3. division\n"
                      "4. sqrt\n5. ln\n6. log10\n7. exp\n"
                      "8. ceil\n9. floor\n10. "
                      "absolute value\n11. sine\n12. cosine\n"
                      "13. tangent\n14. factorial\n15. reciprocal function\n16. pow"<<endl;
                cin>>function;
                cout<<"Enter operands:"<<endl;
                if (function<=3) {
                    cin>>dop1>>dop2;
                    cout<<scientific_binary[function](dop1, dop2)<<endl;
                    break;
                }else if(function == 16){
                    cin>>dop1>>op1;
                    cout<<pow(dop1, op1)<<endl;
                    break;
                } else {
                    cin>>dop1;
                    cout<<scientific_unary[function-4](dop1)<<endl;
                    break;
                }
            }
            case 4: {
                return;
            }
            default: {
                cout << "wrong input" << endl;
                continue;
            }
        }
    }
}
#endif //CALCULATOR_INPUT_FUNCTIONS_H
