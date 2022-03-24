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
void Calculator(double first, char act, double second)
{
    double result=0;
    //double plus = first + second;
    //double minus = first - second;
    //double mult = first * second;
    //double div = first / second;
    //cin >> first >> act >> second;
    if (act == 1) result = first + second;
    else if (act == 2) result = first - second;
    else if (act == 3) result = first * second;
    else if (act == 4) result = first / second;
    cout << result;
    //char plu = 43;
    //char mul = 42;
    //char minu = 45;
    //char di = 47;
    
}



int main()
{
    double a, c;
    char b;
    cin >> a >> b >>  c;
    Calculator(a, b, c);

    
