# SDC-ac_sdc-TP1-Rendimiento


- **Integrantes:** {cristian.pereyra,francisco.coschica,nicolas.lopez.casanegra}@mi.unc.edu.ar 
- **Profesor:** Javier Jorge


## Objetivo

El objetivo de esta tarea es poner en práctica los conocimientos sobre performance y rendimiento de los computadores. El trabajo consta de dos partes, la primera es utilizar benchmarks de terceros para tomar decisiones de hardware y la segunda consiste en utilizar herramientas para medir la performance de nuestro código.


En un informe deberán responder a las siguientes preguntas y mostrar con capturas de pantalla la realización del tutorial descripto en time profiling adjuntando las conclusiones sobre el uso del tiempo de las funciones.

Armar una lista de benchmarks, ¿cuales les serían más útiles a cada uno ? ¿Cuáles podrían llegar a medir mejor las tareas que ustedes realizan a diario ? 
Pensar en las tareas que cada uno realiza a diario y escribir en una tabla de dos entradas las tareas y que benchmark la representa mejor.
Cual es el rendimiento de estos procesadores para compilar el kernel de linux ?
Intel Core i5-13600K
AMD Ryzen 9 5900X 12-Core
Cual es la aceleración cuando usamos un AMD Ryzen 9 7950X 16-Core
https://openbenchmarking.org/test/pts/build-linux-kernel-1.15.0

    El trabajo es grupal. Los grupos son de hasta tres personas. Cada grupo puede tener hasta una persona cursando ingeniería electrónica. 
    Deben colocar sus nombres y el nombre de sus grupos en el archivo cronograma y grupos.
    Cada uno de los integrantes tendrá un repositorio individual sincronizado con el resto de su equipo.
    En el archivo resultados deben colocar los resultados de las mediciones de sus computadoras de manera indiviudal



## Temas

- [X] [Informe msp32](./msp32/INFORME.md)
- [X] [Informe benchmarks](./benchmarks/INFORME.md)
- [X] [Informe profiling](./profiling/Cristian/INFORME.md)

## Branch

```bash
					 /-- msp32 -----\   / -- benchmarks -- \   / -- profiling -- \
					/				 \ /				    \ /				      \
		 /-- dev --+------------------+----------------------+---------------------+----
    	/																			\
master +-----------------------------------------------------------------------------+----------
```
