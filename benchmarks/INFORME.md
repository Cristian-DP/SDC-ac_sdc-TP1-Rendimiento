# BENCHMARKS

- **Integrantes:** {cristian.pereyra,francisco.coschica,nicolas.lopez.casanegra}@mi.unc.edu.ar 
- **Profesor:** Javier Jorge


## Objetivos

El objetivo de esta tarea es poner en práctica los conocimientos sobre performance y rendimiento de los computadores. 

El trabajo consta de dos partes 

1. Utilizar benchmarks de terceros para tomar decisiones de hardware. 

2. Consiste en utilizar herramientas para medir la performance de nuestro código.

En un informe deberán responder a las siguientes preguntas y mostrar con capturas de pantalla la realización del tutorial descrito en time profiling adjuntando las conclusiones sobre el uso del tiempo de las funciones.

I. Armar una lista de benchmarks, ¿cuales les serían más útiles a cada uno ? ¿Cuáles podrían llegar a medir mejor las tareas que ustedes realizan a diario ?

II- Pensar en las tareas que cada uno realiza a diario y escribir en una tabla de dos entradas las tareas y que benchmark la representa mejor.

III- ¿Cuál es el rendimiento de estos procesadores para compilar el kernel de linux ?

Intel Core i5-13600K
AMD Ryzen 9 5900X 12-Core

IV- Cual es la aceleración cuando usamos un AMD Ryzen 9 7950X 16-Core https://openbenchmarking.org/test/pts/build-linux-kernel-1.15.0

### Benchmark

Un benchmark se lo puede definir como “Un estándar de calidad que puede ser utilizado como nivel de referencia al comparar otras cosas”. Estos son una herramienta útil para evaluar y comparar el rendimiento de diferentes dispositivos, componentes, sistemas y así también como para la vida diaria.

Dependiendo del objetivo específico que se quiere conseguir y del punto concreto que estamos comparando, podemos identificar diferentes tipos de benchmarking.

- **Funcional:** Nos fijamos en lideres del mercado para buscar puntos en comun.
- **interno:** Se busca puntos de mejoras, aumento de la eficiencia y efectividad sin mirar a otros
- **Competitivo:** Una vez identificado los puntos debiles revisamos la informaciós de nuestros competidores.
- **Procesos:** Centrarse en un punto especifico mirando a nuestros competidores
- **Productos:** Encontrar lo que no está siendo satisfecho o que pueden cubrirse de manera diferente a como se estaba haciendo ahora.
- **Servicios:** Apoyados en encuestas de satifcación servirá para averiguar cómo ofrecer un servicio mas compelto o servicios alternativos.
- **Costos:** Buscamos reducir costos y mejorar la rentabilidad.

Dentro del contexto de los programas informaticos tenemos

- **Sinteticos**
- **Reducidos**
- **Kernel**
- **Reales**

Para hacer un benchmarking efectivo, estos son los pasos que debes seguir:

1. Define el objetivo
2. Selecciona el area de benchmarking
3. Identifica competidores
4. Recopila información
5. Analiza la información
6. Implementa cambios
7. Evalua y Repite

**¿cuales les serían más útiles a cada uno? ¿Cuáles podrían llegar a medir mejor las tareas que ustedes realizan a diario ?**

| Tarea | Benchmark |
|-|-|
| Contratar un proveedor de internet | Servicos, costos, Productos |
| Cambiar el proveedor de internet | Competitivo, Servicos, costos, Productos |
| Preparar un final | Interno | 
| Performance de un API | Reducido. kernel |