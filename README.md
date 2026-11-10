*Este proyecto ha sido creado como parte del currículo de 42 por jmaestre*

# Libft

## Descripción

**Libft** es el primer proyecto individual en C de la escuela 42. Consiste en la reescritura e implementación desde cero de una serie de funciones estándar de la librería C (`libc`), así como de un conjunto de funciones adicionales de manipulación de cadenas, memoria y listas enlazadas.

El objetivo principal de este proyecto es comprender el funcionamiento interno de las funciones estándar, aprender el manejo de memoria dinámica en el *heap* (`malloc` / `free`), dominar la gestión de punteros y estructuras de datos básicas, y disponer de un kit de herramientas propio que sirva como base reutilizable para futuros proyectos del *cursus*.

---

## Instrucciones

### Requisitos previos

* Compilador de C (`cc`).
* Herramienta Make.
* Entorno tipo Unix (Linux / macOS).

### Compilación

El proyecto se compila generando una librería estática denominada `libft.a`. Se utilizan los flags obligatorios `-Wall -Werror -Wextra`.

Para compilar la librería:
```bash
make
```

### Reglas del Makefile

* `make` / `make all`: Compila los archivos fuente de la parte obligatoria y crea `libft.a`.
* `make clean`: Elimina los archivos objeto (`.o`) generados durante la compilación.
* `make fclean`: Elimina los archivos objeto y el archivo de librería estática `libft.a`.
* `make re`: Ejecuta `fclean` y vuelve a compilar la librería desde cero.

### Uso e integración

Para utilizar **Libft** en tus propios proyectos C:

1. Incluye el encabezado en tus archivos de código fuente:
   ```c
   #include "libft.h"
   ```
2. Compila tu programa enlazando la librería estática:
   ```bash
   cc -Wall -Werror -Wextra tu_programa.c -L. -lft -o tu_programa
   ```

---

## Descripción Detallada de la Librería

La librería se organiza en tres bloques principales de funciones:

### 1. Funciones de `libc` reescritas

Reimplementación de las funciones estándar del sistema con el prefijo `ft_`.

#### Clasificación y conversión de caracteres
* `ft_isalpha`: Comprueba si el carácter es alfabético.
* `ft_isdigit`: Comprueba si el carácter es un dígito decimal.
* `ft_isalnum`: Comprueba si el carácter es alfanumérico.
* `ft_isascii`: Comprueba si el carácter pertenece a la tabla ASCII (0-127).
* `ft_isprint`: Comprueba si el carácter es imprimible.
* `ft_toupper`: Convierte un carácter a mayúscula.
* `ft_tolower`: Convierte un carácter a minúscula.
* `ft_atoi`: Convierte una cadena de caracteres a su valor numérico entero (`int`).

#### Manipulación de memoria
* `ft_memset`: Llena un bloque de memoria con un valor constante.
* `ft_bzero`: Pone a cero un bloque de memoria.
* `ft_memcpy`: Copia un área de memoria a otra (no solapadas).
* `ft_memmove`: Copia un área de memoria a otra permitiendo el solapamiento de bloques.
* `ft_memchr`: Busca la primera ocurrencia de un byte en un bloque de memoria.
* `ft_memcmp`: Compara dos bloques de memoria byte a byte.
* `ft_calloc`: Reserva memoria dinámica e inicializa todos sus bytes a cero.

#### Manipulación de cadenas de texto
* `ft_strlen`: Calcula la longitud de una cadena de caracteres.
* `ft_strlcpy`: Copia una cadena a un búfer de tamaño definido garantizando la terminación nula.
* `ft_strlcat`: Concatena una cadena al final de otra garantizando la terminación nula.
* `ft_strchr`: Busca la primera ocurrencia de un carácter en una cadena.
* `ft_strrchr`: Busca la última ocurrencia de un carácter en una cadena.
* `ft_strncmp`: Compara los primeros *n* caracteres de dos cadenas.
* `ft_strnstr`: Busca una subcadena dentro de otra limitada por una longitud máxima.
* `ft_strdup`: Duplica una cadena reservando memoria con `malloc`.

---

### 2. Funciones adicionales

Funciones que no están presentes en la biblioteca estándar C o que difieren en su comportamiento/enfoque.

* `ft_substr`: Reserva memoria y extrae una subcadena a partir del índice especificado y de longitud máxima dada.
* `ft_strjoin`: Reserva memoria y concatena dos cadenas en una nueva cadena.
* `ft_strtrim`: Elimina del principio y del final de una cadena los caracteres especificados en un conjunto (*set*).
* `ft_split`: Divide una cadena en un array de cadenas utilizando un carácter delimitador.
* `ft_itoa`: Convierte un entero (`int`) a su representación en texto (`char *`).
* `ft_strmapi`: Aplica una función a cada carácter de una cadena para crear una nueva cadena resultante.
* `ft_striteri`: Aplica una función a cada carácter de una cadena pasando su índice y dirección de memoria (modificación in situ).
* `ft_putchar_fd`: Escribe un carácter en un descriptor de archivo (*file descriptor*).
* `ft_putstr_fd`: Escribe una cadena de caracteres en un descriptor de archivo.
* `ft_putendl_fd`: Escribe una cadena seguida de un salto de línea en un descriptor de archivo.
* `ft_putnbr_fd`: Escribe un número entero en un descriptor de archivo.

---

### 3. Funciones de Listas Enlazadas

Funciones para gestionar estructuras de datos dinámicas mediante listas enlazadas basadas en la estructura `t_list`:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

* `ft_lstnew`: Crea y devuelve un nuevo nodo inicializando su contenido.
* `ft_lstadd_front`: Añade un nuevo nodo al principio de la lista.
* `ft_lstsize`: Cuenta el número total de nodos de la lista.
* `ft_lstlast`: Devuelve el último nodo de la lista.
* `ft_lstadd_back`: Añade un nuevo nodo al final de la lista.
* `ft_lstdelone`: Libera la memoria del contenido de un nodo mediante una función dada y libera el nodo en sí.
* `ft_lstclear`: Elimina y libera recursivamente un nodo y todos sus sucesores en la lista.
* `ft_lstiter`: Itera sobre la lista aplicando una función al contenido de cada nodo.
* `ft_lstmap`: Genera una nueva lista resultante de aplicar una función sobre cada nodo de la lista original.

---

## Recursos

### Referencias técnicas y documentación
* Páginas del manual de Unix (`man 3 malloc`, `man 3 memcpy`, `man 3 string`, etc.).
* Documentación oficial del lenguaje C (Estándar C89/C99).
* Tutoriales sobre gestión de listas enlazadas y asignación dinámica de memoria en C.

### Declaración sobre el uso de Inteligencia Artificial (IA)

Siguiendo las directrices del currículo de 42 sobre el uso ético y reflexivo de herramientas de Inteligencia Artificial:

* **Casos de uso:** La IA se ha utilizado exclusivamente como asistente de consulta conceptual y explicativo (por ejemplo, clarificación sobre casos bordes de comportamiento de funciones como `memmove` frente a `memcpy`, o para comprender la diferencia técnica de `glibc` frente a BSD en `strlcpy`/`strlcat`).
* **Partes del proyecto:** No se utilizó IA para la generación automática de código del proyecto ni para eludir la resolución lógica de los problemas. Toda la implementación de las funciones, la lógica de algoritmos y la depuración fueron realizadas mediante análisis propio y discusión de aprendizaje peer-to-peer.