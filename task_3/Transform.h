#pragma once
#include "Matrix.h"
#include <math.h>

//Матрицa переноса
//Tx и Ty величины сдвига вдоль соответствующих осей координат
mat3 translate(float Tx, float Ty) {
	mat3* res = new mat3(1.f); // создали единичную матрицу
	(*res)[0][2] = Tx; // поменяли
	(*res)[1][2] = Ty; // значения в последнем столбце
	return *res;
}

//Матрицa маштабирования
mat3 scale(float Sx, float Sy) {
	mat3* res = new mat3(1.f); // создали единичную матрицу
	(*res)[0][0] = Sx; // поменяли
	(*res)[1][1] = Sy; // значения на главной диагонали
	return *res;
}

//Kогда Sx = Sy = S
mat3 scale(float S) {
	return scale(S, S);
}


mat3 mirrorX() {
	return scale(-1, 1);
}
mat3 mirrorY() {
	return scale(1, -1);
}


//Поворот
mat3 rotate(float theta) {
	mat3* res = new mat3(1.f); // создали единичную матрицу
	(*res)[0][0] = (*res)[1][1] = (float)cos(theta); // заполнили главную диагональ
	(*res)[0][1] = (float)sin(theta); // синус в первой строке (с плюсом)
	(*res)[1][0] = -(*res)[0][1]; // синус во второй строке (с минусом)
	return *res;
}
