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



// пример функции, которая принимает 2 параметра
void Calculator(double first, char act, double second)
{
    //first = 5;
    //act = 42;
    //second = 3;
   //cin >> first >> act >> second;
    //cout << first << act << second << "\n";
    double plus = first + second;
    double minus = first - second;
    double mult = first * second;
    double div = first / second;
    //char plus = 43;
    //char mult = 42;
    //char minus = 45;
    //char div = 47;
    cout << "result " << mult << "\n";
}



int main()
{
    double a, c;
    char b;
    cin >> a >> b >> c;
    Calculator(a, b, c);
    
   // double a, b;
   // cin >> a >> b;
    //Calculator(a, b); // передача 2 параметров
    
    cout << "Hello";
}
