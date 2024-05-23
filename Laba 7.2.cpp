// Задача 1.
//#include <iostream>
//#include <cmath>
//#include <cstdarg>
//
//using namespace std;
//
//
//
//double distance(double x1, double y1, double x2, double y2) { // Функция для вычисления расстояния между двумя точками в двумерном пространстве
//    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
//}
//
//// Функция с переменным количеством параметров для вычисления длины стороны по координатам точек
//
//double side_length(int n, ...) {
//
//    va_list args; // массив
//    va_start(args, n); // указатель на первый аргумент массива
//
//    double summa = 0.0;
//
//    for (int i = 0; i < n * 2; i += 2) {
//        double x = va_arg(args, double); // извлеаем значение типа double из массива args
//        double y = va_arg(args, double);
//
//        if (i + 2 < n * 2) {
//            double nextX = va_arg(args, double);
//            double nextY = va_arg(args, double);
//
//            summa += distance(x, y, nextX, nextY);
//        }
//    }
//
//    va_end(args); // сбрасываем указатель на NULL
//
//    return summa;
//}
//
//int main() {
//
//    system("chcp 1251 > Null);
//
//    double length = side_length(4, 1.1, 0.9, 0.2, 2.1);
//
//    cout << "Длина стороны: " << length << endl;
//
//    return 0;
//}

//Задача 2.
//#include <iostream>
//#include <cmath>
//#include <cstdarg>
//
//using namespace std;
//
//// Функция для вычисления площади треугольника по координатам вершин
//
//double tr_square(double  x1, double y1, double x2, double y2, double x3, double y3) {
//    return abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
//}
//
//// Функция с переменным количеством параметров для вычисления площади треугольника
//
//double og_tr_square(int n, ...) {
//
//    va_list args;
//    va_start(args, n);
//
//    double  x1 = va_arg(args, double);
//    double  y1 = va_arg(args, double);
//    double  x2 = va_arg(args, double);
//    double  y2 = va_arg(args, double);
//    double  x3 = va_arg(args, double);
//    double  y3 = va_arg(args, double);
//
//    va_end(args);
//
//    return tr_square(x1, y1, x2, y2, x3, y3);
//}
//
//int main() {
//
//    system("chcp 1251 > Null);
//
//    double triangle_square = og_tr_square(6, 16.0, 9.3, 1.4, 2.1, 1.3, 3.0);
//    cout << "Площадь треугольника: " << triangle_square << endl;
//
//    return 0;
//}

//Задача 3.
//#include <iostream>
//#include <cmath>
//#include <cstdarg>
//
//using namespace std;
//
//// Функция для вычисления площади многоугольника по координатам вершин
//
//double squaren(int n, ...) {
//
//
//    va_list args;
//    va_start(args, n);
//
//    double  summa = 0.0;
//    double  x1, y1, x2, y2;
//
//    x2 = va_arg(args, double);
//    y2 = va_arg(args, double);
//
//    for (int i = 0; i < n; i += 2) {
//        x1 = x2;
//        y1 = y2;
//        x2 = va_arg(args, double);
//        y2 = va_arg(args, double);
//
//        summa += x1 * y2 - x2 * y1; // прибавляем к общей сумме площадь треугольников, из которых состоит наш многоугольник 
//    }
//
//    va_end(args);
//
//    return abs(summa) / 2; // формула Гаусса 
//}
//
//int main() {
//
//    system("chcp 1251 > Null);
//
//    double square = squaren(8, 12.0, 7.5, 3.7, 5.87, 4.5, 2.0, 6.8, 2.0);
//    cout << "Площадь многоугольника: " << square << endl;
//
//    return 0;
//}

