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

## 20-10-2026 - En conjunto 
- Como llegamos re quemados del parcial, nos pusimos enseguida a hacer el obl. En si el ejercicio que nos costo más que nada fue el 4, por todas las funciones nuevas y los tads nuevos que tuvimos que traer. Igualmente, casi todos los tads que necesitabamos ya estaban en el repo de la clase y solo los tuvimos que copiar. El unico tad que tuvimos que modificar para hacer este ejercicio fue el de heap(literalmente hicimos un copy paste y lo adaptamos para que funcionara), por otro lado, creamos modulo.h para definir la estructura del módulo. Usamos .h porque el chat nos explicó que es la forma mas prolija en si de compartir estructuras entre varios archivos. En nuestro caso, tuvimos que usarla tanto en el programa principal como en el minheap adaptado para los módulos. Después de tener las funciones y los tads que necesitabamos, básicamente el ejercicio se hizo solo, ya que únicamente tuvimos que aplicar el algoritmo de ordenamientos topologico (Khan) dado en clase. En lo que respecta al ejercicio 5, salió enseguida debido a que teníamos literalmente todo lo necesario gracias a lo que habíamos hecho en el ejercicio 4. Solo tuvimos que hacer otro heap, y adaptarlo para ordenar las aristas por peso y aplicar Kruskal tal cual lo vimos en clase.

## 21-10-2026 - En conjunto 
- Como ayer terminamos los 5 ejercicios, hoy decidimos liquidar el obl. Lo primero que hicimos fue testear los ejercicios con las pruebas, los primeros 3 salieron bien de primera pero el 4 y el 5 nos dieron muchos problemas, sobre todo el 4. Corrimos muchas pruebas a mano una por una hasta que en un momento nos dimos cuenta de q eran demasiadas, entonces optamos por pedirle a gpt que nos tirara un script con el fin de automatizar las pruebas y comparar los resultados. En el ejercicio 4 teniamos varios errores en los tads, y los includes me tiraban error porque me olvidaba de pasarle las rutas de los archivos. A su vez, ayer mientras hacimos los ejercicios 4 y 5 usamos metodos de los tads que dimos en clase y algunos no estaban definidos, eso fue facil de arreglar, despues no entendiamos porque nos daban mal las pruebas y cuando le preguntamos a gpt en que nos estabamos equivocando, nos dijo basicamente nos estabamos comiendo un endl en el ultimo cout.
En lo que respecta al ejercicio 5 tuvimos problemas de rendimiento, asi que optimizamos la lista enlazada y el DisjointSet con compresion de caminos y lo del Rank, obviamente para hacer todos esto cambios tuvimos en cuenta los ordenes y eso. Despues nos pusimos a ordenar las carpetas del proyecto y corregir los includes, y de paso borre sin querer el ejercicio 3, pero por suerte lo pude recuperar con Git. 