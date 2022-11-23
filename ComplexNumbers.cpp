#include <iostream>

using namespace std;

struct ComplexNumber
{
    double Re;
    double Im;
};

int main()
{
    //Включаем локализацию
    system("chcp 1251");
    //Создаем одно комплексное число
    ComplexNumber z = { 1,1 };
    //Вывод числа в консоль
    cout << "Комплексное число z = " << z.Re << " + " << z.Im << "i" << endl;
   
}

