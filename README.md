# Heladería Santi

¡Bienvenido/a a la Heladería Santi! Este programa en C++ simula un sistema de pedidos para una heladería, permitiendo a los clientes seleccionar sus helados favoritos y realizar el pago.

## Características

* **Interfaz de Bienvenida:** Un saludo amigable y la presentación del menú de helados.
* **Selección de Helados:** Los clientes pueden elegir entre una variedad de sabores:
    * Vanilla
    * Fresa
    * Arequipe
    * Maracuyá
    * Café
    * Chocolate
    * Frutos Rojos
    * Frutos Amarillos
* **Precios Definidos:** Cada helado tiene un precio específico.
* **Proceso de Pago:** Se solicita al cliente que ingrese el monto con el que va a pagar.
* **Cálculo de Devolución:** El programa calcula y muestra la devolución si el pago es suficiente.
* **Mensaje de Agradecimiento:** Un mensaje personalizado de agradecimiento al cliente por su compra.
* **Resumen de Ventas:** Al finalizar las ventas, se muestra un resumen con la cantidad de helados vendidos por sabor y el total de dinero recaudado.
* **Bucle de Pedidos:** Permite realizar múltiples pedidos hasta que el usuario decida salir.

## Cómo Ejecutar

1.  **Compilador de C++:** Asegúrate de tener un compilador de C++ instalado en tu sistema (por ejemplo, g++).
2.  **Guardar el Código:** Guarda el código proporcionado en un archivo con extensión `.cpp` (por ejemplo, `heladeria.cpp`).
3.  **Compilar:** Abre una terminal o línea de comandos y navega hasta el directorio donde guardaste el archivo. Luego, compila el código utilizando el siguiente comando:
    ```bash
    g++ heladeria.cpp -o heladeria
    ```
4.  **Ejecutar:** Una vez compilado, ejecuta el programa con el siguiente comando:
    ```bash
    ./heladeria
    ```

## Uso

Al ejecutar el programa, seguirás las siguientes indicaciones:

1.  Se mostrará un mensaje de bienvenida y el menú de helados con sus respectivos números.
2.  Ingresa tu nombre cuando se te solicite.
3.  Selecciona el helado que deseas ingresando el número correspondiente.
4.  Se mostrará el helado seleccionado y su precio.
5.  Ingresa el valor del dinero con el que vas a pagar.
6.  Si el pago es suficiente, se mostrará la devolución y un mensaje de agradecimiento. Si no es suficiente, se indicará que el pago es incorrecto.
7.  Se te preguntará si deseas realizar otra compra (ingresa `1` para No, `2` para Sí).
8.  Si eliges salir (ingresando `2`), se mostrará un resumen de la cantidad de helados vendidos por sabor y el total de dinero ganado.

## Posibles Mejoras

Este proyecto es una excelente base. Aquí tienes algunas ideas para futuras mejoras:

* **Validación de Entrada:** Asegurarse de que el usuario ingrese números válidos para la selección de helados y el pago.
* **Manejo de Errores:** Implementar un manejo de errores más robusto para evitar comportamientos inesperados.
* **Adición de Adicionales:** Permitir a los clientes agregar toppings o adicionales a sus helados con sus respectivos precios.
* **Sistema de Inventario:** Llevar un registro de la cantidad de helados disponibles para evitar ventas de helados agotados.
* **Interfaz de Usuario:** Considerar el uso de una interfaz gráfica de usuario (GUI) para una experiencia más visual e interactiva.
* **Almacenamiento de Datos:** Guardar la información de las ventas en un archivo para un análisis posterior.

## ¡Contribuciones son bienvenidas!

Siéntete libre de forkear este repositorio y realizar mejoras. ¡Cualquier contribución que hagas será valiosa!
