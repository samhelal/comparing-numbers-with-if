//comparing numbers using if statment
#include <iostream>
using  std ::cin  ;
using  std ::cout ;
using  std ::endl ;

int main(){
    int num1 (0) ;
    int num2 (0) ;
    cout << " Enter the two numbers ; \n" ;
    cin >> num1 >> num2 ; 

    if (num1 == num2 ) {
        cout << num1 << " = " << num2 << endl ;
    }
    if (num1 != num2 ) {
        cout << num1 <<  " != " << num2 << endl ;
    }
    if (num1 < num2 ) {
        cout << num1 << " < " << num2 << endl ;
    }
    if (num1 > num2) {
        cout << num1 << " > " << num2 << endl ;
    }
    if (num1 >= num2) {
        cout << num1 << " >= " << num2 << endl ;
    }
    if (num1 <= num2) {
        cout << num1 << " <= " << num2 << endl ; 
    }

}