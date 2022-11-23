#include <iostream>

using namespace std;

struct CNumber
{
    double Re;
    double Im;
};

/// <summary>
/// Функция, возвращающая модуль (длину) комплексного числа.
/// </summary>
/// <param name="z">входящее комплексное число</param>
/// <returns>модуль (длинна)</returns>
double CN_Module(CNumber z)
{
    return sqrt(z.Re * z.Re + z.Im * z.Im);
}


int main()
{
    //Включаем локализацию
    system("chcp 1251");
    //Создаем одно комплексное число
    CNumber z = { 1,1 };
    //Вывод числа в консоль
    cout << "Комплексное число z = " << z.Re << " + " << z.Im << "i" << endl;
    //Вывод его длины
    cout << "Модуль комплексного числа |z| = " << CN_Module(z) << endl;
}

