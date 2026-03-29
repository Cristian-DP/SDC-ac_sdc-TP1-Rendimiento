### Consigna

Conseguir un esp32 o cualquier procesador al que se le pueda cambiar la frecuencia.
Ejecutar un código que demore alrededor de 10 segundos. Puede ser un bucle for con sumas de enteros por un lado y otro con suma de floats por otro lado.
¿Qué sucede con el tiempo del programa al duplicar (variar) la frecuencia ?

### Respuesta

Se utilizo un esp32, utilizando la ide de arduino para subir el código y analizar los resultados de la experiencia:

![ecuación de rendimiento](../../images/Francisco/esp_32_perf_test.jpeg)

Se realizaron las pruebas, se realizaron 40 Millones de operaciones primero de enteros y luego de floats. Se usaron dos frecuencias 80Mhz y 240Mhz. En los resultados de las pruebas, archivo `execution_results.md`, vemos principalmente dos cosas: 1. Las operaciones de punto flotante toman aproximadamente un 26.7% mas de tiempo 2. El tiempo requerido para ejecutar las operaciones disminuye inversamente proporcional a frecuencia utilizada. Al triplicar la frecuencia el tiempo se reduce a un tercio.

$$Speedup = \frac{\text{Tiempo a frecuencia menor (80 MHz)}}{\text{Tiempo a frecuencia mayor (240 MHz)}}$$

Speedup operaciones de enteros
$$Speedup_{INT} = \frac{7585 \text{ ms}}{2509 \text{ ms}} = \mathbf{3.023}$$
Speedup operaciones de punto flotante
$$Speedup_{FLOAT} = \frac{9608 \text{ ms}}{3179 \text{ ms}} = \mathbf{3.022}$$

Obtenemos una eficiencia:
$$\eta = \frac{Speedup}{n}$$
$$\eta = \frac{3.02}{3} = 1.006$$
