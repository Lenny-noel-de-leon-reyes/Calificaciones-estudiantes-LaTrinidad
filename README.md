# Calificaciones-estudiantes-LaTrinidad

Descripción del proyecto:

Se desarrollará un programa en C++ que permita registrar los nombres y las calificaciones finales de un grupo de estudiantes utilizando arreglos unidimensionales paralelos. El sistema mostrará la lista completa de estudiantes, identificará la nota más alta y la más baja, calculará el promedio general del grupo y determinará cuántos estudiantes aprobaron y reprobaron. El objetivo es aplicar el uso de arreglos, ciclos, condicionales y funciones para procesar la información de manera eficiente.

Integrantes:

Lenny Noel De león Reyes (2026-0946)

Allen Alberth Disla Irizarry (2026-1008)

Adrian DAvid De La Rosa Alvarez (2026-1144)



Instrucciones de uso del programa:

1-Ejecute el programa desde su entorno de desarrollo (Visual Studio, Code::Blocks, Dev-C++, etc.).

2-Ingrese la cantidad de estudiantes que desea registrar.

3-Digite el nombre de cada estudiante cuando el programa lo solicite.

4-Ingrese la calificación correspondiente a cada estudiante (debe estar entre 0 y 100).

5-Repita el proceso hasta completar el registro de todos los estudiantes.

Al finalizar la captura de datos, el programa mostrará:

La lista de estudiantes con sus calificaciones.
El estudiante con la nota más alta.
El estudiante con la nota más baja.
El promedio general del grupo.
La cantidad de estudiantes aprobados y reprobados (tomando 70 como nota mínima para aprobar).
Revise los resultados mostrados en pantalla y cierre el programa cuando haya terminado.


Ejemplo 1:
<img width="1346" height="753" alt="image" src="https://github.com/user-attachments/assets/c6bd4b07-c541-4e3c-86db-4d4b55076e19" />


Ejemplo 2:
<img width="1345" height="766" alt="image" src="https://github.com/user-attachments/assets/2eae4f44-f299-472b-9ed8-f3d7bdf8e4a6" />


Explicación de arreglos utilizados:
En el programa se utilizan dos arreglos unidimensionales paralelos: uno de tipo string llamado nombres[], que almacena los nombres de los estudiantes, y otro de tipo float llamado notas[], que almacena sus calificaciones.

Ambos arreglos se relacionan mediante el mismo índice. Esto significa que el nombre almacenado en nombres[i] corresponde a la calificación almacenada en notas[i]. Por ejemplo, si nombres[2] contiene "María", entonces notas[2] almacena la nota de María. Esta relación permite acceder y procesar la información de cada estudiante de forma organizada y eficiente
