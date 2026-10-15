# Calculadora de Edad — Actividad 1 (Revisión Integral Python & C++)

**Materia:** Laboratorio de Programación (LPR) — 5° Año 3° División A-B  
**Institución:** E.E.S.T. N° 1 'Eduardo Ader' - Vicente López  
**Profesor:** Prof. Mansilla Muñoz York Elías  
**Estudiante:** Aramis Demaria  
**Año:** 2026

## Objetivo
Calcular la edad exacta de una persona validando que la fecha de nacimiento exista en el calendario real (bisiestos y días por mes). El mismo algoritmo se implementa en **Python** y **C++** para comparar sintaxis, validación y manejo de errores.

## Estructura
```
/calculadoraedad/
├── .gitignore
├── README.md
├── LICENSE
├── docs/InformeProyectoCalculadoraEdad.pdf
├── proyecto_cpp/calculadoraEdad.cpp
└── proyecto_python/calculadoraEdad.py
```

## Compilación y Ejecución
```powershell
# C++
g++ proyecto_cpp/calculadoraEdad.cpp -o proyecto_cpp/calculadoraEdad.exe
.\proyecto_cpp\calculadoraEdad.exe

# Python
python proyecto_python/calculadoraEdad.py
```
Fecha de referencia del ejercicio: **08/07/2026**.

## Filtro de Consistencia
- Año 1900–2026, mes 1–12, día según mes (30/31, febrero 28/29 con bisiesto).
- Fórmula bisiesto: `(a%4==0 && a%100!=0) || (a%400==0)`.

## Commits sugeridos
`feat: implementa filtro bisiesto`, `fix: ajusta edad si no cumplió años`, `docs: informe APA v7`
