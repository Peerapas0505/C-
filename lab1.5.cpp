cout << num1 << "*" << num2 << "=" << (num1 * num2);#include <iostream>

using namespace std;

int main(){
    char operator;
    double num1,num2;
    
    cout << "Enter the Operator (+,-,*,/) :";
    cin >> op;
    
    cout << "Enter two nambers one by one : ";
    cin >> num1 >> num2;
    
    switch(op){
        
        case '+':
            cout << num1 << "+" << num2 << "=" << (num1 + num2);
            break;
            
         case '-':
            cout << num1 << "-" << num2 << "=" << (num1 - num2);
            break;
        
         case '*':
            cout << num1 << "*" << num2 << "=" << (num1 * num2);
            break;
            
        case '/':
            if ( num2 != 0.0 )
                cout << num1 << "/" << num2 << "=" << (num1 / num2);
            else
                cout << "Divide by Zero situation";
            
            break;
            
        default:
            cout << op << "is an invalid operator";
            
    }
    return 0;
}
