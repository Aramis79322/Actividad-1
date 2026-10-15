/*
 ====================================================================
 Materia: Laboratorio de Programacion (LPR)
 E.E.S.T. N 1 "Eduardo Ader" — Vicente Lopez
 Curso: 5 Ano 3 Division
 Profesor: Prof. Mansilla Muñoz York Elías
 Estudiante: Aramis Demaria
 Archivo: calculadoraEdad.cpp
 Objetivo: Calcular edad exacta validando calendario real (bisiestos).
 Fecha de referencia: 08/07/2026
 ====================================================================
*/
#include <iostream>
using namespace std;

// 1. Evalua si un anio es bisiesto
bool esBisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

// 2. Filtro de consistencia de calendario
bool esFechaValida(int d, int m, int a) {
    if (a < 1900 || a > 2026) return false;
    if (m < 1 || m > 12) return false;
    if (d < 1 || d > 31) return false;
    // Meses de 30 dias
    if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30) return false;
    // Caso especial de Febrero
    if (m == 2) {
        if (esBisiesto(a)) {
            if (d > 29) return false;
        } else {
            if (d > 28) return false;
        }
    }
    return true;
}

int main() {
    int diaN, mesN, anioN;
    int diaA = 8, mesA = 7, anioA = 2026; // Fecha actual para el ejercicio

    cout << "=====================================================" << endl;
    cout << " CALCULADORA DE EDAD DE: Aramis Demaria " << endl;
    cout << "=====================================================" << endl;
    cout << "Ingrese Dia, Mes y Anio de nacimiento (separados por espacios): ";
    cin >> diaN >> mesN >> anioN;

    if (!esFechaValida(diaN, mesN, anioN)) {
        cout << "[ERROR] La fecha ingresada no existe en el calendario." << endl;
        return 1;
    }

    int edad = anioA - anioN;
    // Ajuste si aun no cumplio anios este anio
    if (mesN > mesA || (mesN == mesA && diaN > diaA)) {
        edad--;
    }
    if (edad < 0) edad = 0;

    cout << "\n[SISTEMA] Fecha de hoy: " << diaA << "/" << mesA << "/" << anioA << endl;
    cout << "[SISTEMA] Fecha de nacimiento: " << diaN << "/" << mesN << "/" << anioN << endl;
    if (esBisiesto(anioN)) cout << "[INFO] Anio de nacimiento bisiesto." << endl;
    cout << "[SISTEMA] Edad calculada: " << edad << " anios." << endl;
    cout << "=====================================================" << endl;
    return 0;
}
