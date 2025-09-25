#include <stdio.h>
/*
Функция: cube_volume
Что делает: вычисляет объём куба
Пример: cube_volume(3) вернёт 27
*/
float cube_volume(float a) {
    return a * a * a;
}
/*
Функция: cylinder_volume
Что делает: вычисляет объём цилиндра
Пример: cylinder_volume(2, 5) вернёт 62.8
*/
float cylinder_volume(float r, float h) {
    return 3.14 * r * r * h;
}
/*
Функция: main
Что делает: запускает программу
*/
int main() {
    printf("Vcube: %.2f\n", cube_volume(3));
    printf("Vcylinder: %.2f\n", cylinder_volume(2, 5));
    return 0;
}