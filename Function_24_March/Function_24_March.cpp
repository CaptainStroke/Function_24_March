//
//#include <iostream>
//using namespace std;
//
//void SayHello()
//{
//    cout << "Hello Universe\n";
//}
//int main()
//{
//    cout << "Hello World!\n";
//    SayHello();
//}

#include <iostream>
using namespace std;
// пример функции, которая принимает 3 параметра
void Calculator(double first, double act, double second)
{
    double result=0;
    if (act == 1) result = first + second;
    else if (act == 2) result = first - second;
    else if (act == 3) result = first * second;
    else if (act == 4) result = first / second;
    cout << result;   
}



int main()
{
    double a, b, c;
    //char b;
    cin >> a >> b >> c;
    Calculator(a, b, c);
}
    
