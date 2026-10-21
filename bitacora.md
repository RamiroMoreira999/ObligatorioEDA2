# Bitácora — Obligatorio 1

**Integrantes:** Nombre Apellido (Nº estudiante), Nombre Apellido (Nº estudiante)

> **Instrucciones** (borrar esta sección antes de entregar): agregar una entrada por
> cada día trabajado, indicando la fecha y quién trabajó (un integrante o "En conjunto").
> Registrar el proceso real: ideas exploradas, decisiones y su justificación, partes de
> implementaciones, bugs encontrados y cómo se corrigieron, resultados de pruebas y dudas
> abiertas. Si se usó IA ese día, indicar herramienta, consulta y qué se hizo con la
> respuesta. Una bitácora escrita íntegramente el día de la entrega implica pérdida de puntos.

## AAAA-MM-DD — Nombre
- Ejemplo: Leí la letra del ejercicio 1. Primera idea: ... pero la restricción de
  complejidad pide ..., así que ...

## AAAA-MM-DD — En conjunto
- Ejemplo: Implementamos ... Bug: ... Lo corregimos ...
- Pasan los casos de prueba 1 a 4 del ejercicio 1.

## 10-09-2026 — Ramiro
- Cree el repo e importe el script de avl del repo en aulas

## 18-09-2026 — En conjunto 
- Terminamos la clase arbol y todas las funciones necesesarias para hacer el ejercicio uno. Sin embargo, nos surgieron algunas dudas y le vamos a tener que preguntar al profe despues.

## 19-09-2026 - Joaquin
- Pude arreglar el problema que estabamos teniendo con la implementacion de arbol.

## 01-10-2026 - Joaquin 
- Desp de preguntarle al profe si podiamos hacer que la funcion range guardaramos en una lista para desp en main solo recorrer e imprimir que fue algo que habia surgido en el momento cuanto estabamos pensando como poder hacer el ejercicio uno. Nos dijo que si podiamos hacerlo entonces con eso ya pude liquidar el ejercicio1. A su vez tmb importe todos los tads necesarios para el ejercicio 2 que habiamos visto en clases.


## 13-10-2026 - En Conjunto
- Empezamos a encarar el segundo ejercicio en clase pero estabamos re duros hasta el punto que nos tuvimos que volver a fijar como era que implementabamos tablas en eda1. Ademas le tuvimos que pedir ayuda a gepeto para entender mejor la letra y sobre temas de notacion en c++ y como funcionaba ciertas cosas


## 15-10-2026 - En Conjunto
- Ya entendimos la letra y se nos ocurrieron muy buenas ideas, sin embargo seguiamos sin saber como implementar nuestra tabala,sabemos que tiene que procesar y que devolver pero no como hacerlo. En lo que respecta a nuestar implementacion del ejercicio le hicimos unas consultas al profe y dijo que estaba bien como lo estabamos pensando.

## 16-10-2026 - En Conjunto
- Nos salio el ejercicio 2 la verdad que impresionante lo que nos costo y lo duro que estuvimos para entender como implementar la tabla en c++ que aparte no nos paraba de tirar errores el sorete. Ademas pudimos terminar el 3 que salio bastante rapido y acordamos deguir el martes despues del parcial y liquidar ahi el obligatorio

## 20-10-2026 - Ramiro 
- Como llegué muy enojado después de las cagadas que me mandé en el parcial, en donde me quedé bloqueado como un boludo, tuve la maravillosa idea de terminar los ejercicios 4 y 5 para reivindicarme. El que fue más que nada difícil fue el 4, por todas las funciones nuevas y los tads nuevos que tuve que traer. Igualmente, casi todos los tads que necesité ya estaban en el repo de la clase y solo los tuve que copiar. Igualmente el unico tad que tuve que modificar para hacer este ejercicio fue el de heap(literalmente hice un copy paste y lo adapte para que funcionara), a su vez, creé modulo.h para definir la estructura del módulo. Usé .h porque el chat me explicó que es la forma mas prolija en si de compartir estructuras entre varios archivos.En nuestro caso, tuve que usarla tanto en el programa principal como en el minheap adaptado para los módulos. Después de tener las funciones y los tADs que necesitaba, básicamente el ejercicio se hizo solo, ya que únicamente tuve que aplicar el algoritmo de ordenamientos topologico (Khan) dado en clase. En lo que respecta al ejercicio 5, salió enseguida debido a que tenía literalmente todo lo necesario gracias a lo que había hecho en el ejercicio 4. Solo tuve que hacer otro heap, adaptarlo para ordenar las aristas por peso y aplicar Kruskal tal cual lo vimos en clase.

## 21-10-2026 - Ramiro
- Como ayer termine los 5 ejercicios, hoy decidi liquidar el obl. Lo primero que hice fue testar los ejercicios con las pruebas, los primeros 3 salieron bien de primera pero el 4 y el 5 me dieron muchos problemas, sobre todo el 4. Corri muchas pruebas a mano una por una hasta que en un momento me di cuenta de q eran demasiadas, ahi opte por pedirle a gpt que me tirara un script con el fin de automatizar las pruebas y comparar los resultados. En el ejercicio 4 tenia varios errores en los tads, y los includes me tiraban error porque me olvidaba de pasarle las rutas de los archivos. Tambien como un bld, ayer mientras hacia los ejercicios 4 y 5 use metodos de los tads que dimos en clase y algunos no estaban definidos, eso fue facil de arreglar, despues no entendia porque me daban mal las pruebas y cuando le pregunte a gpt en que me estaba equivocando, me dijo que basicamente me estaba comiendo un endl en el ultimo cout.
En lo que respecta al ejercicio 5 tuve problemas de rendimiento, asi que optimice la lista enlazada y el DisjointSet con compresion de caminos y union por altura, obviamente para hacer todos esto cambios tuve en cuenta los ordenes y eso. Despues me puse a ordenar las carpetas del proyecto y corregir los includes, y de paso borre sin querer el ejercicio 3, pero por suerte lo pude recuperar con Git. 