//Calcular todas las operaciones
//a) Calcular la suma (A+B)
//b) Calcular la resta (A-B)
//c) Calcularladivision(A/B)
//d) Calcular la multiplicacion (A*B)
//e) Calcular el factorial (A!)

#ifndef CALCULOS_H_
#define CALCULOS_H_

#include <stdio.h>
#include <stdlib.h>

/// @brief Realiza el calculo para la suma de los operandos ingresados.
/// /// @param primero -- Le paso el primer operando.
/// @param segundo -- Le paso el segundo operando.
/// @return Devuelve la suma de los operandos pasados.
int suma(int primero, int segundo);

/// @brief Realiza el calculo para la resta de los operandos ingresados.
/// /// @param primero -- Le paso el primer operando.
/// @param segundo -- Le paso el segundo operando.
/// @return Devuelve la resta de los operandos pasados.

int resta(int primero,int segundo);
/// @brief Realiza el calculo para la multiplicacion de los operandos ingresados.
/// /// @param primero -- Le paso el primer operando.
/// @param segundo -- Le paso el segundo operando.
/// @return Devuelve la multiplicacion de los operandos pasados.

int producto(int primero, int segundo);

/// @brief Realiza el calculo para la division de los operandos ingresados.
/// @param primero -- Le paso el primer operando.
/// @param segundo -- Le paso el segundo operando.
/// @return Devuelve la division de los operandos pasados.
float division(int primero,int segundo);

/// @brief Realiza el calculo para averiguar el factorial de los operando.
/// @param primero -- Le paso el operando.
/// @return Devuelve el factorial del operando ingresado.
int factorial(int primero);



#endif /* CALCULOS_H_ */
