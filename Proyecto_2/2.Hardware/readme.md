## $\textcolor{orange}{Hardware:}$

Para la implementacion es necesario contar con los siguientes elementos:

- Arduino UNO – 1
- Modulo Bluetooth HC – 05 – 1
- Smart Phone o Tablet – 1
- Transistor NPN 2N2222 – 4
- 12V Relay – 4
- Resistencia de 1 KΩ – 4
- Diodo de juntura PN 1N4007 – 4
- Jumpers de conexion M/M 
- Prototoboard
- App para trasmitir voz por Bluetooth (AMR_Voice)

## $\textcolor{orange}{Arduino\ UNO:}$

![800px-Arduino-uno-perspective-whitw](https://github.com/ISPC-TST-ARQUITECTURA-Y-CONECTIVIDAD/tarea7-grupo-7/assets/46485082/46641219-9e67-4941-a39d-ce86ebcd62ed)


Arduino Uno es una placa de desarrollo de hardware de código abierto diseñada para facilitar la creación de prototipos electrónicos. Es uno de los modelos más populares de la familia Arduino.

La placa Arduino Uno está basada en un microcontrolador ATmega328P de Atmel y cuenta con una serie de pines de entrada y salida digitales y analógicos que permiten conectar sensores, actuadores y otros componentes electrónicos. Estos pines se pueden utilizar para leer señales de entrada, como botones o sensores, o para generar señales de salida, como controlar luces o motores.

Arduino Uno tiene 14 pines digitales, de los cuales 6 pueden funcionar como salidas de PWM (modulación por ancho de pulso) y 6 como entradas analógicas. Además, cuenta con un puerto USB que se utiliza para programar la placa y establecer comunicación con un ordenador.

La placa Arduino Uno se programa utilizando el lenguaje de programación de Arduino, que se basa en el lenguaje de programación C/C++. Existe un entorno de desarrollo integrado (IDE) de Arduino que proporciona una interfaz gráfica fácil de usar para escribir y cargar programas en la placa.

La versatilidad y facilidad de uso de Arduino Uno la hacen ideal para principiantes y profesionales que desean explorar y desarrollar proyectos de electrónica y robótica. Su bajo costo y la gran cantidad de documentación y ejemplos disponibles en línea la convierten en una opción popular en la comunidad de fabricantes y entusiastas de la electrónica.

## $\textcolor{orange}{Modulo\ Bluetooth\ HC\ – 05:}$

El módulo Bluetooth HC-05 es un dispositivo de comunicación inalámbrica que permite establecer una conexión Bluetooth entre diferentes dispositivos electrónicos. Es ampliamente utilizado en proyectos de electrónica y robótica para habilitar la comunicación sin cables entre un microcontrolador, como Arduino, y otros dispositivos como smartphones, tablets o computadoras.

El HC-05 está basado en la tecnología Bluetooth 2.0 y cuenta con un chip de comunicación Bluetooth de alta calidad. Este módulo puede funcionar tanto en modo maestro como en modo esclavo, lo que significa que puede actuar como una fuente de conexión o como un receptor de conexión.

El HC-05 se conecta a través de una interfaz serial (UART) y utiliza comandos AT para configurar su funcionamiento. Se puede configurar fácilmente para establecer una conexión Bluetooth con otros dispositivos y transferir datos de manera bidireccional.

El módulo HC-05 cuenta con pines de alimentación, pines de comunicación serial (RX y TX), así como pines adicionales para configurar su modo de funcionamiento (modo maestro/esclavo), velocidad de transmisión y otros parámetros.

Una vez configurado y emparejado con otro dispositivo Bluetooth, el HC-05 puede transmitir y recibir datos de forma inalámbrica a través de la conexión establecida. Esto lo hace muy útil para proyectos que requieren la transferencia de datos o el control remoto de dispositivos.

En resumen, el módulo Bluetooth HC-05 es un dispositivo versátil que permite la comunicación inalámbrica mediante la tecnología Bluetooth. Es ampliamente utilizado en proyectos electrónicos para habilitar la interconexión entre diferentes dispositivos, lo que lo convierte en una herramienta popular en la comunidad de desarrolladores y entusiastas de la electrónica.

![image](https://github.com/ISPC-TST-ARQUITECTURA-Y-CONECTIVIDAD/tarea7-grupo-7/assets/46485082/35035e9c-cd1c-4311-9e7c-ad1c224c7a05)


## $\textcolor{orange}{Transistor\ NPN\ 2N2222:}$

![image](https://github.com/ISPC-TST-ARQUITECTURA-Y-CONECTIVIDAD/tarea7-grupo-7/assets/46485082/135ca007-cf66-474e-924a-1c78b1c9eb7e)


El transistor 2N2222 es un transistor de propósito general utilizado en una amplia variedad de aplicaciones electrónicas. Es un transistor bipolar de unión (BJT, por sus siglas en inglés) de pequeña señal y bajo consumo de energía.

El 2N2222 está diseñado para amplificar y conmutar señales eléctricas. Se compone de tres terminales: emisor (E), base (B) y colector (C). La corriente que fluye entre el emisor y el colector se controla mediante la corriente de la base. El 2N2222 es del tipo NPN, lo que significa que la corriente fluye desde el emisor hacia el colector cuando se aplica un voltaje adecuado a la base.

El transistor 2N2222 tiene una amplia gama de voltajes y corrientes de operación. Puede manejar corrientes de hasta 800 mA y voltajes de hasta 40 V, lo que lo hace adecuado para aplicaciones de baja potencia. Además, tiene una alta ganancia de corriente, lo que permite amplificar señales débiles con eficiencia.

Este transistor se utiliza comúnmente en proyectos electrónicos como amplificadores de audio, conmutación de señales, circuitos de control, osciladores, entre otros. También se utiliza como componente básico en circuitos integrados y módulos electrónicos más complejos.

Es importante tener en cuenta las especificaciones técnicas del 2N2222, como su corriente máxima, voltaje de ruptura, ganancia de corriente y potencia disipada, para asegurarse de que se utilice dentro de sus límites de operación.

## $\textcolor{orange}{12V\ Relay:}$

Un relé de 12V es un dispositivo electromecánico que se utiliza para controlar el flujo de corriente en un circuito eléctrico mediante el uso de una señal de control. Funciona como un interruptor controlado por un electroimán.

El relé de 12V consta de varios componentes clave. En su interior, hay un electroimán que, al recibir una corriente suficiente, activa un mecanismo de cambio. Este mecanismo puede ser un juego de contactos eléctricos que se abren o cierran en respuesta al electroimán.

El relé de 12V generalmente tiene una bobina que requiere una tensión de 12 voltios para su activación. Cuando se aplica la tensión de control adecuada a la bobina, esta genera un campo magnético que atrae una palanca o armadura, lo que provoca el cambio en los contactos eléctricos.

Cuando los contactos del relé están en reposo, se encuentran en una posición determinada (normalmente abiertos o normalmente cerrados) y no permiten el flujo de corriente a través del circuito. Sin embargo, cuando la bobina del relé se activa, la armadura se mueve y cambia la posición de los contactos, permitiendo o interrumpiendo el flujo de corriente en el circuito controlado.

Los relés de 12V son ampliamente utilizados en aplicaciones automotrices, sistemas de control industrial, automatización del hogar y otros proyectos electrónicos. Pueden manejar corrientes y voltajes más altos que los componentes de control directo, como los microcontroladores, lo que los hace útiles para controlar cargas de mayor potencia.

![image](https://github.com/ISPC-TST-ARQUITECTURA-Y-CONECTIVIDAD/tarea7-grupo-7/assets/46485082/6d6d5d01-7d45-4ac5-9b8a-d0c4c1d1e4c3)


## $\textcolor{orange}{Resistencia\ de\ 1KΩ :}$

![image](https://github.com/ISPC-TST-ARQUITECTURA-Y-CONECTIVIDAD/tarea7-grupo-7/assets/46485082/f1cd4a8f-1e12-453a-915f-1ddf6f253589)


Una resistencia de 1 K (kilohmio) es un componente pasivo comúnmente utilizado en circuitos electrónicos para limitar la corriente eléctrica y controlar el flujo de corriente en un circuito.

La "K" en 1 K representa el prefijo kilo, que indica que la resistencia tiene un valor de 1000 ohmios. Por lo tanto, una resistencia de 1 K tiene una resistencia de 1000 ohmios.

Cuando se conecta una resistencia de 1 K en un circuito, limita la cantidad de corriente que puede pasar a través de ella. Esto puede ser útil para proteger otros componentes del circuito de corrientes excesivas, como en el caso de los LED, donde una resistencia se coloca en serie para limitar la corriente que fluye a través del LED y evitar daños.

Además de limitar la corriente, las resistencias también se utilizan para dividir voltajes, ajustar niveles de señal, establecer la ganancia en amplificadores y realizar otras funciones importantes en el diseño de circuitos electrónicos.

Es importante tener en cuenta que las resistencias tienen una tolerancia, que indica la variación permitida en su valor nominal. Las resistencias de 1 K pueden tener una tolerancia típica de +/- 5% o +/- 10%, lo que significa que el valor real de resistencia puede variar dentro de ese rango.

En resumen, una resistencia de 1 K es un componente pasivo que tiene un valor de resistencia de 1000 ohmios. Se utiliza ampliamente en circuitos electrónicos para limitar corrientes, dividir voltajes y realizar otras funciones de control en el flujo de corriente.




## $\textcolor{orange}{Diodo\ de\ juntura\ PN\ 1N4007:}$

El diodo 1N4007 es un diodo rectificador de propósito general ampliamente utilizado en circuitos electrónicos. Es parte de la familia de diodos 1N400x, donde "x" puede variar según la corriente máxima que puede manejar el diodo.

El 1N4007 es un diodo de silicio que permite el flujo de corriente en una sola dirección, desde su terminal anodo hacia su terminal cátodo, y bloquea el flujo en la dirección opuesta. Esto lo convierte en un componente esencial para la rectificación de corriente alterna (AC) en fuentes de alimentación, convirtiéndola en corriente continua (DC).

El 1N4007 tiene una corriente inversa máxima de 30 μA y una corriente directa máxima de 1 A, lo que le permite manejar corrientes relativamente altas. También tiene una tensión inversa de pico máxima de 1000 V, lo que significa que puede soportar voltajes inversos de hasta ese valor sin dañarse.

Este diodo está encapsulado en un paquete DO-41, que es comúnmente conocido como encapsulado "de vidrio" o "de uso general". Tiene dos patillas, una más corta que representa el cátodo (terminal negativo) y una más larga que representa el ánodo (terminal positivo).

El diodo 1N4007 se utiliza en una variedad de aplicaciones, incluyendo fuentes de alimentación, rectificadores, protección de polaridad y circuitos de conmutación. Su facilidad de uso, bajo costo y capacidad de manejar corrientes y voltajes moderados lo convierten en una opción popular en proyectos electrónicos.

![image](https://github.com/ISPC-TST-ARQUITECTURA-Y-CONECTIVIDAD/tarea7-grupo-7/assets/46485082/b0e74eae-a8e8-4811-92f1-c7cdd95cdb02)

## $\textcolor{orange}{Varios:}$


Un protoboard, también conocido como placa de pruebas o breadboard, es una herramienta comúnmente utilizada en electrónica para crear y prototipar circuitos electrónicos de forma rápida y sin necesidad de soldar los componentes. Consiste en una base de plástico que contiene una matriz de agujeros interconectados eléctricamente.

La matriz de agujeros en el protoboard está dispuesta en filas y columnas. Cada fila de agujeros está conectada eléctricamente de forma horizontal, mientras que las columnas están conectadas verticalmente. Esto permite que los componentes electrónicos se inserten en los agujeros y se interconecten entre sí mediante cables o jumpers.

Los jumpers son pequeños cables conductores con terminales en ambos extremos que se utilizan para establecer conexiones eléctricas en el protoboard. Estos jumpers se insertan en los agujeros del protoboard y permiten la conexión entre los diferentes componentes, como resistencias, transistores, diodos, entre otros.

La ventaja del protoboard y los jumpers es que permiten realizar cambios y modificaciones rápidas en los circuitos sin necesidad de soldar los componentes. Esto facilita el proceso de diseño y prueba de prototipos, ya que se pueden reorganizar los componentes y las conexiones de manera flexible y rápida.

El protoboard y los jumpers son ampliamente utilizados por estudiantes, aficionados y profesionales de la electrónica para crear y experimentar con circuitos antes de realizar implementaciones más permanentes. Además, son herramientas ideales para aprender los conceptos básicos de circuitos electrónicos y realizar pruebas y depuraciones de manera efectiva.

![image](https://github.com/ISPC-TST-ARQUITECTURA-Y-CONECTIVIDAD/tarea7-grupo-7/assets/46485082/0955a03a-db81-4c7f-8938-6a222c2aed72)


Android Cumple Robots: Reconocimiento de voz
Usos androide mobiles reconocimiento de voz interno para pasar comandos de voz a su robot
Pares con módulos en serie Bluetooth y envía en la voz reconocida como una cadena
por ejemplo, si usted dice hola el teléfono Android volverá una picadura * Hola # a su módulo Bluetooth * y # indican el inicio y bits de parada
Se puede utilizar con cualquier microcontrolador que puede manejar cadenas
Ejemplos Plataformas: Arduino, ARM, PICAXE, MSP430, 8051 basados ​​y muchos otros procesadores y controladores

![image](https://github.com/ISPC-TST-ARQUITECTURA-Y-CONECTIVIDAD/tarea7-grupo-7/assets/46485082/cb4d5bb0-4dbb-4fb3-ac07-5fa512767838)




