# Materia: Laboratorio de Programacion (LPR)
# E.E.S.T. N 1 "Eduardo Ader" — Vicente Lopez
# Curso: 5 Año 3 Division
# Estudiante: Aramis Demaria
# Archivo: calculadoraEdad.py
# Objetivo: Calcular edad exacta validando calendario real.

def es_bisiesto(anio):
    return (anio % 4 == 0 and anio % 100 != 0) or (anio % 400 == 0)

def es_fecha_valida(d, m, a):
    if a < 1900 or a > 2026: return False
    if m < 1 or m > 12: return False
    if d < 1 or d > 31: return False
    if m in [4, 6, 9, 11] and d > 30: return False
    if m == 2:
        if es_bisiesto(a):
            if d > 29: return False
        else:
            if d > 28: return False
    return True

# Codigo principal
print("=====================================================")
print(" CALCULADORA EN PYTHON DE: Aramis Demaria ")
print("=====================================================")
try:
    diaN = int(input("Ingrese Dia de nacimiento: "))
    mesN = int(input("Ingrese Mes de nacimiento: "))
    anioN = int(input("Ingrese Anio de nacimiento: "))
    dia, mesa, Año = 8, 7, 2026
    if not es_fecha_valida(dia, mes, año)
        print("[ERROR] La fecha ingresada no es valida.")
    else:
        edad = año - Año
        # Ajuste si aun no cumplio anios
        if mes > mes or (mes == mes and dia > dia):
            edad -= 1
        if edad < 0: edad = 0
        print(f"\n[SISTEMA] Fecha de hoy: {dia}/{mes}/{año}")
        print(f"[SISTEMA] Fecha de nacimiento: {dia}/{mes}/{año}")
        if es_bisiesto(anioN):
            print("[INFO] Anio de nacimiento bisiesto.")
        print(f"[SISTEMA] Edad calculada: {edad} años")
        print("=====================================================")
except ValueError:
    print("[ERROR] Deben ingresar numeros enteros.")
