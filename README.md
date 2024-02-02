[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/ke8zCzPd)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-7f7980b617ed060a017424585567c406b6ee15c891e84e1186181d67ecf80aa0.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=13538993)
# Práctica 4: Algoritmos de ordenamiento


# Análisis del trabajo


## Introducción


En esta práctica, se tiene como objetivo realizar un experimento de los tiempos de ejecución de cinco tipos de algoritmos de ordenamiento aplicados a secuencias de números. Esta tarea es fundamental para la optimización de procesos computacionales, así como mejorar o depurar dicho algoritmo de ordenamiento para mejorar su rendimiento, ya que estas evaluaciones permiten determinar la eficiencia y rendimiento de los algoritmos en diferentes escenarios.


## Procedimiento 


1.- Crear un archivo llamado 'ordenamiento.h', el cual contenga los cinco algoritmos de ordenamiento


2.- Crear un archivo llamado "ordenamiento.cpp". Este se encargará de controlar los cinco algoritmos contenidos en "ordenamiento.h", además de recibir el tamaño del arreglo, así como las veces que se repetirá. En este caso, los tamaños inician en 5 y llegan hasta 10^9, y las repeticiones son 30 en todos los casos.


3.- Ejecutamos el programa "ordenamiento.cpp" y registramos los datos.


4.- Almacenamos los datos en tablas y graficamos; en este caso, se usó Excel.


## Análisis de los resultados


A continuación, veremos los resultados obtenidos durante las pruebas que fueron realizadas para esta práctica, pero para poder analizar mejor dichos resultados, necesitamos comprender algunos conceptos.


Promedio: 


El promedio, también conocido como la media aritmética, es una medida estadística que representa el valor central de un conjunto de datos. En el contexto de la evaluación de algoritmos de ordenamiento, el promedio de los tiempos de ejecución proporciona una indicación general del rendimiento medio del algoritmo para un tamaño de entrada específico.


Desviación estándar: 


Cuando la desviación estándar es muy alta, significa que hay una gran variabilidad en los datos. En el contexto de la evaluación de algoritmos de ordenamiento, una alta desviación estándar indica que los tiempos de ejecución para un tamaño de entrada específico son muy dispersos, es decir, hay una gran diferencia entre los valores individuales y el promedio.


## Primera tabla


En esta tabla podemos observar los diferentes promedios y desviación estándar obtenidos durante la ejecución de los 5 algoritmos de ordenamiento con arreglos de tamaño 5.


<img width="239" alt="1" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-fxrnyx/assets/141948025/945bed6b-d359-4839-85af-faf7ea750fcf">


A continuación, tenemos la gráfica de los promedios obtenidos:


<img width="328" alt="2" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-fxrnyx/assets/141948025/0d1203a2-895d-41a0-9825-f211cd1ccb02">


En esta gráfica podemos ver que el algoritmo que tuvo el promedio de tiempo más bajo es el de Merge Sort; por lo tanto, fue el más rápido y eficaz en las 30 repeticiones. Mientras que Quicksort fue el más lento, por lo que podemos deducir que para arreglos pequeños, Merge Sort es la mejor opción, mientras que Quicksort es la peor, ya que es la más lenta.


Ahora analizaremos la gráfica de la desviación estándar:


<img width="310" alt="3" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-fxrnyx/assets/141948025/7d1606bc-2fcb-483c-9ed6-1656282a5523">


Podemos ver que quien tiene la variabilidad más baja es Merge Sort; por lo tanto, no varió mucho el tiempo en que se ordenó cada uno de los arreglos de tamaño 5, mientras que Insertion Sort es el más alto. Demuestra que sus tiempos fueron muy variados; esto significa que algunos arreglos le tomaron más tiempo ordenarlos que a otros.


## Segunda tabla


En esta tabla podemos observar los diferentes promedios y desviación estándar obtenidos durante la ejecución de los 5 algoritmos de ordenamiento con arreglos de tamaño 10.


<img width="235" alt="4" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-fxrnyx/assets/141948025/14d87883-b55c-437d-8dff-96976c650293">


A continuación, tenemos la gráfica de los promedios obtenidos:


<img width="329" alt="5" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-fxrnyx/assets/141948025/c4407115-656d-4349-af4b-d26b1f27f7f7">


Seguimos viendo que Merge Sort es el que en promedio menos tiempo le toma ordenar arreglos pequeños mientras que Bubbleksort es al que le cuesta más tiempo, al igual que Quicksort.


Ahora analizaremos la gráfica de la desviación estándar:


<img width="310" alt="6" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-fxrnyx/assets/141948025/0015e0bf-07c3-44a5-972c-e070133e2e20">


Ahora vemos que el más alto fue Selection Sort; esto nos indica una gran variabilidad de tiempo que le tomó ordenar a cada uno de los 30 arreglos de tamaño 10, mientras que Bubble Sort y Quick Sort son los más bajos. Por lo tanto, sus tiempos no variaron mucho.


## Tercera tabla


En esta tabla podemos observar los diferentes promedios y desviación estándar obtenidos durante la ejecución de los 5 algoritmos de ordenamiento con arreglos de tamaño 50.


<img width="239" alt="7" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-fxrnyx/assets/141948025/6b4035a2-a789-4ddf-902f-1ea4dcacdc2f">


A continuación, tenemos la gráfica de los promedios obtenidos:


<img width="324" alt="8" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-fxrnyx/assets/141948025/10223b1c-6fac-4474-b077-0b7a53ff5a4e">


Podemos observar que el algoritmo Bubblesort, al trabajar con arreglos de un tamaño pequeño, tiene dificultades para ordenarlos, ya que sigue presentando un tiempo muy alto en comparación con el Merge sort, que logra un tiempo menor.
Ahora analizaremos la gráfica de la desviación estándar:


<img width="313" alt="9" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-fxrnyx/assets/141948025/1eec7f36-061f-48c8-bc1c-0fb2452e1786">


Vemos que Merge Sort tiene una desviación estándar muy alta. Esto indica que algunos arreglos los ordenó súper rápido y otros no tanto. Esto se debe a que son creados aleatoriamente, y significa que depende del contenido del arreglo lo que definirá si tarda menos o más tiempo, mientras que Insertion Sort fue el más bajo; por lo tanto, sus tiempos fueron muy estables.


## Cuarta tabla


En esta tabla podemos observar los diferentes promedios y desviación estándar obtenidos durante la ejecución de los 5 algoritmos de ordenamiento con arreglos de tamaño 100.


<img width="236" alt="10" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-fxrnyx/assets/141948025/fc0b49ad-3f5a-4c4a-9540-8279fe6cdb9b">


A continuación, tenemos la gráfica de los promedios obtenidos


<img width="328" alt="11" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-fxrnyx/assets/141948025/4716b4cd-8790-44ea-a426-6473e0573220">


Con un arreglo de un tamaño ya no tan pequeño pero tampoco muy grande, vemos que el primer algoritmo que tiene problemas es Insertion Sort, ya que de tener un buen tiempo pasó a un tiempo pues ya algo considerable. Mientras que Bubblesort mejoró mucho su tiempo, ya nos vamos haciendo una idea de qué algoritmo usar para ciertos tamaños.


Ahora analizaremos la gráfica de la desviación estándar:


<img width="312" alt="12" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-fxrnyx/assets/141948025/8e093470-a60a-4619-b72b-efd881941da3">


Vemos que Selection Sort, a pesar de haber tenido un promedio de tiempo bajo, también es el que sus tiempos varían mucho, mientras que Merge Sort prácticamente no tuvo ningún cambio y Bubble Sort se mantuvo estable.


## Quinta tabla


En esta tabla podemos observar los diferentes promedios y desviación estándar obtenidos durante la ejecución de los 5 algoritmos de ordenamiento con arreglos de tamaño 500.


<img width="243" alt="13" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-fxrnyx/assets/141948025/3eacb67a-9b9a-4d76-8a6a-4bb3ea5ada19">


A continuación, tenemos la gráfica de los promedios obtenidos


<img width="324" alt="14" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-fxrnyx/assets/141948025/c65cbbb0-f885-4bd9-ad31-5e8f57c86da8">


Observamos que los mejores tiempos son de Selection Sort y Bubble Sort, ya que se tardaron milisegundos en ordenar los arreglos, mientras que Insertion Sort fue el más lento, ya que tardó en promedio 9 segundos.


Ahora analizaremos la gráfica de la desviación estándar:

 
<img width="313" alt="15" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-fxrnyx/assets/141948025/9b55ddc3-e292-460e-a735-1999f35c3621">


Podemos observar que Bubblesort tiene una desviación estándar muy alta, así que se puede suponer que fueron tiempos muy variados y muy cortos a la vez. Por lo tanto, para este tamaño de arreglo, Bubblesort es la mejor opción, mientras que los demás algoritmos no tuvieron una gran desviación estándar.


## Sexta tabla


En esta tabla podemos observar los diferentes promedios y desviación estándar obtenidos durante la ejecución de los 5 algoritmos de ordenamiento con arreglos de tamaño 1000.


<img width="234" alt="16" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-fxrnyx/assets/141948025/e85d4d0b-78a1-42eb-9a68-051358974a17">


A continuación, tenemos la gráfica de los promedios obtenidos


<img width="321" alt="17" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-fxrnyx/assets/141948025/f10e9cc4-707d-46ef-8236-2523a3eccf1a">


Aquí hay algo curioso, ya que el arreglo actual es el doble del anterior y a pesar de que todos se ejecutaron en milisegundos, Merge Sort ahora fue el más rápido en ordenarlo, mientras que Bubblesort y Selection Sort, que fueron los más rápidos en la anterior prueba, ahora fueron los más lentos.


Ahora analizaremos la gráfica de la desviación estándar:


<img width="311" alt="18" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-fxrnyx/assets/141948025/5ef83c02-1140-43e2-9a2c-1af3fad13ac9">


Merge sort fue el más rápido y también el que tuvo unos tiempos muy estables, al igual que Bubblesort y Selection Sort, mientras que Quicksort tiene unos tiempos muy variados.


## Septima tabla


En esta tabla podemos observar los diferentes promedios y desviación estándar obtenidos durante la ejecución de los 5 algoritmos de ordenamiento con arreglos de tamaño 5000.


<img width="319" alt="20" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-fxrnyx/assets/141948025/bc0efec1-4dd8-448f-8e11-56a920253baa">


A continuación, tenemos la gráfica de los promedios obtenidos


<img width="319" alt="20" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-fxrnyx/assets/141948025/1bd09d99-71be-4836-86d7-d21b820f0882">


Seguimos teniendo un tiempo en milisegundos, por lo que podríamos decir que estos tamaños son ideales para estos cinco algoritmos, ya que su ejecución fue muy rápida y sigue destacando tanto Merge Sort como Quicksort, ya que tienen los tiempos más bajos, mientras que Selection Sort y Bubblesort fueron los que tardaron más.


Ahora analizaremos la gráfica de la desviación estándar:


<img width="305" alt="21" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-fxrnyx/assets/141948025/779caff0-eb5b-4d54-beb8-d89f3452306c">


Como se esperaba, los tiempos de Merge Sort, al igual que Quicksort, no fueron tan variados. Así que estos dos algoritmos fueron los mejores para este tamaño, ya que fueron más rápidos y no variaron mucho en tiempo. Por lo tanto, fueron los más eficaces.


## Octava tabla


En esta tabla podemos observar los diferentes promedios y desviación estándar obtenidos durante la ejecución de los 5 algoritmos de ordenamiento con arreglos de tamaño 10000.


<img width="236" alt="22" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-fxrnyx/assets/141948025/49612d48-a4ff-4a55-82af-9dfbcc1e37af">


A continuación, tenemos la gráfica de los promedios obtenidos


<img width="321" alt="23" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-fxrnyx/assets/141948025/5596b4d8-6c7d-4cab-a305-6f2eb4cd20eb">


Esta es la última prueba con un tamaño de arreglo ya algo considerable, y nos muestra que lo ordena en milisegundos. Al menos para los cinco algoritmos, vemos que tanto Merge Sort como Quicksort son los más apropiados para este tipo de tamaños, mientras que Bubblesort y Selection Sort son los menos óptimos.


Ahora analizaremos la gráfica de la desviación estándar:


<img width="309" alt="24" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-fxrnyx/assets/141948025/f00c847b-34b4-4d19-9ef1-78b54db72fb8">


Una vez más, esta gráfica nos confirma que Merge Sort y Quicksort son los más óptimos, así que ya nos podemos dar una idea de qué algoritmos son mejores para tamaños más grandes.


## Novena tabla


En esta tabla podemos observar los diferentes promedios y desviación estándar obtenidos durante la ejecución de los 5 algoritmos de ordenamiento con arreglos de tamaño 50000.


<img width="228" alt="25" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-fxrnyx/assets/141948025/56e1805b-4fa0-41ae-b401-ef4e0eade44f">


A continuación, tenemos la gráfica de los promedios obtenidos


<img width="315" alt="26" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-fxrnyx/assets/141948025/5367d039-194a-4c66-b400-920411239f1f">


Desde este tamaño vemos cómo el tiempo aumentó de una manera muy drástica, ya que cambiamos de milisegundos a segundos para Insertion Sort, Selection Sort y Bubble Sort, mientras que Merge Sort y Quicksort siguen siendo los más óptimos para estos tamaños.


Ahora analizaremos la gráfica de la desviación estándar:


<img width="307" alt="27" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-fxrnyx/assets/141948025/ecf4c2f0-72ab-4b6c-b900-b91673077110">


Observamos que Bubblesort es el que tuvo un mayor índice de variación en cuanto al tiempo, gracias a la gráfica de desviación estándar. Esto ya nos indica que para tamaños muy grandes, este algoritmo es el menos indicado.


## Decima tabla


En esta tabla podemos observar los diferentes promedios y desviación estándar obtenidos durante la ejecución de los 5 algoritmos de ordenamiento con arreglos de tamaño 100,000.


<img width="230" alt="28" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-fxrnyx/assets/141948025/936b8a9b-71df-4c1a-91a7-1e1bc0d48a9e">


A continuación, tenemos la gráfica de los promedios obtenidos


<img width="319" alt="29" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-fxrnyx/assets/141948025/62e45935-4791-41d9-8c2d-dbbefbde2fc3">


Como lo estábamos suponiendo, mientras más grande sea el tamaño del arreglo a ordenar, tardará más tiempo en ordenarlo tanto Selection Sort como Bubblesort, ya que no son aptos para este tipo de tamaños, mientras que Merge Sort y Quicksort son los mejores.


Ahora analizaremos la gráfica de la desviación estándar:


<img width="304" alt="30" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-fxrnyx/assets/141948025/48cac9f3-5335-4e2b-b706-61159e4f0add">


Nos confirma que, de los cinco algoritmos, Bubblesort es el menos capaz de ordenar arreglos de un tamaño muy grande, mientras que Merge Sort y Quicksort serán los mejores.


## Observaciones


Pues, de los cinco algoritmos, ya vimos que Selection Sort y Bubblesort se desempeñan mejor en arreglos de un tamaño no tan grande ni tan pequeño. Los mejores para un tamaño mayor son Merge Sort y Quicksort. A pesar de ser arreglos de un tamaño muy grande, siguen haciéndolo en milisegundos, mientras que Insertion Sort es el menos confiable, ya que varían mucho sus resultados.


El motivo de no terminar el experimento con los tamaños indicados es porque, mientras más grande sea el tamaño, los algoritmos Selection Sort y Bubblesort, pero principalmente Bubblesort, están teniendo tiempos muy exagerados. Incluso me atrevería a decir que podrían tardar semanas. Como prueba de ello, hice una captura al tiempo que tardó en ordenar un arreglo de tamaño…


<img width="605" alt="Prueba" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-fxrnyx/assets/141948025/b5c15d05-9016-4bcb-84c6-804b0eba432f">


# Conclusiones


En esta práctica, evaluamos el rendimiento de cinco algoritmos de ordenamiento: insertion sort, selection sort, bubblesort, merge sort y quicksort. Observamos que los algoritmos cuadráticos (insertion sort, selection sort, bubblesort) son eficientes para conjuntos pequeños, mientras que merge sort y quicksort, destacan para conjuntos grandes.


El análisis estadístico reveló que los algoritmos ofrecen tiempos de ejecución más predecibles, evidenciado por desviaciones estándar más bajas. Esto sugiere una mayor estabilidad en su rendimiento en diversas situaciones.


En conclusión, esta práctica proporcionó una visión detallada del rendimiento de diferentes algoritmos de ordenamiento, arrojando luz sobre sus fortalezas, debilidades y aplicaciones prácticas. La combinación de análisis estadístico, visualización de datos y observaciones prácticas ofrece una base sólida para la toma de decisiones informada al seleccionar algoritmos de ordenamiento en contextos específicos.
