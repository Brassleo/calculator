#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <stack>
using std::stack;

int main(){
    stack<int> stk;
    bool isOk = true;
    char c;
    do{
        while(c = cin.peek(), c == ' ' || c == '\t') cin.get();
        if(c == EOF || c == '\n' || c == '=') {
            isOk = false;
            cin.get();
        } else {
            int t;
            cin >> t;
            if(cin.fail()) {
                //получаем операнды
                int a, b;
                b = stk.top();
                stk.pop();
                a = stk.top();
                stk.pop();
                //вычисляем
                switch(c) {
                    case '+':
                        a += b;
                        break;
                    case '-':
                        a -= b;
                        break;
                    case '*':
                        a *= b;
                        break;
                    case '/':
                        a /= b;
                        break;
                    default:
                        break;
                }
                stk.push(a);
                cin.clear();
                if(c=cin.peek(), c!=EOF && c!= '\n' && c != '=') cin.get();
            } else
                stk.push(t);
        }
    } while(isOk);

    cout << stk.top() << endl;

    system("pause");
    return 0;
}