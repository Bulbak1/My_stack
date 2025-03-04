#include "pch.h"
#include <string>
#include <iostream>
#include "Stack.h" 

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    Stack stk;
    string tmp;
    while (true) {
        getline(cin >> ws, tmp);
        for (int i = 0; i < tmp.size(); i++) {
            if (tmp[i] == '(' || tmp[i] == '[' || tmp[i] == '{') {
                stk.push(tmp[i]);
                continue;
            }

            if (!(stk.is_empty()) && ((tmp[i] == ')' and stk.top() == '(') ||
                (tmp[i] == ']' and stk.top() == '[') ||
                (tmp[i] == '}' and stk.top() == '{'))) {
                stk.pop();
            }
            else if (tmp[i] == ']' || tmp[i] == '}' || tmp[i] == ')') {
                cout << "Строка неверная\n";
                system("pause");
                return 0;
            }
        }
        if (stk.is_empty()) {
            cout << "Строка верна\n";
        }
        else {
            cout << "Строка неверна\n";
        }
    }
    system("pause");
    return 0;
}