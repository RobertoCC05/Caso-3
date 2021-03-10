# Caso-3
 Caso 3 Analisis de algoritmos 
 
 Specs de la computadora usada:
 
 ![image](https://user-images.githubusercontent.com/62961473/110567726-95a85500-8117-11eb-9819-0b27b2681423.png)

 
 Pasos pruebas C:
  1. Para compilar el codigo con el compilador especial de C, fue descargado "Tiny C Compiler" (tcc), mientras que el compiladore de C++ fue "GNU Compiler Collection" (gcc)
  2. El codigo consiste en una busqueda lineal en donde el numero buscado no es parte de esta, por lo que es el peor de los casos y conseguimos el tiempo y la memoria utilizada, para probar que tanto cambiaba el tiempo, se fue gradualmente aumentando el tamaño del arreglo utilizado. Los tamaños fueron (de mayor a menor): 400000000, 300000000, 200000000, 100000000, 50000000, 10000000, 5000000, 1000000, 100000.
  3. Con tcc, desde cmd se compilo el archivo con el comando tcc ..\mainC.c, mientras que con el otro desde la terminal de VSCode con el comando cd "c:\Users\jgamb\Documents\GitHub\Caso-3\C\" ; if ($?) { gcc mainC.c -o mainC } ; if ($?) { .\mainC }
  4. Se revisaron los tiempos y la memoria, y se tomaron capturas de pantalla de los resultados.

R/ Como se puede observar, ambos compiladores estan bastante cerca con los tiempos, pero con nustros resultados, el compilador de C++ (gcc) ganó obteniendo un menor tiempo.
  
 Tabla C:
 ![Screenshot](Tabla1.png)

 Pasos pruebas GO - Rust:
  1. Se descargo respectivamente los archivos necesarios para compilar GO, debido a complicaciones con la computadora, el codigo en RUST no lo logramos completar a tiempo.
  2. El codigo en la parte logica es el mismo que fue utilizado en C, claramente programado en sus lenguajes respectivos.
  3. Para GO, desde VSCode se compilo con el comando: go run "c:\Users\jgamb\Documents\GitHub\Caso-3\Go\main.go"
  4. Se revisaron los tiempos para llegar a una conclusion.

R/ Claramente, los algoritmos compilados con los compiladores de C/C++ son mucho más rápido que los "compilados" por Go (y posiblemente Rust)

Tabla GO:

![image](https://user-images.githubusercontent.com/62961473/110569409-19fbd780-811a-11eb-894b-24ed2c24d972.png)

 Screenshots:
 
 GCC
 ![Screenshot](gcc.png)
 
 TCC. Parte 1
 ![Screenshot](tcc1.png)
 
 TCC. Parte 2
 ![Screenshot](tcc2.png)
 
 GO:
 ![image](https://user-images.githubusercontent.com/62961473/110568053-10717000-8118-11eb-85a2-b0e0e745268b.png)

