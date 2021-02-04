
# Descripción del proyecto
Se ha desarrollado un software capaz de gestionar la información de los sensores de una placa ESP8266
Se ha desarrollado un software que aplica “internet de las cosas” (IOT) como trabajo final de la asignatura de Informática Industrial. Se implementan diferentes tecnologías estudiadas durante el curso. Entre ellas cabe destacar el uso de comunicaciones MQTT, el diseño de flujos Node-RED y la programación en Arduino. 


# Prerrequisitos Software
Este proyecto necesita para funcionar la ejecución simultánea de código en los siguientes servicios:
  - Node-RED
  - Arduino
  - Matlab2020 (Simulink)

# Prerrequisios Hardware
Existe la posibilidad de ejecutar el código como si solo tuviera la funcionalidad de enviar datos de un sensor de temperatura y humedad (sin robot). En cuyo caso, el hardware mínimo necesarion será:
  -DHT11
  -ESP8266
  
Para ejecutar también la parte del robot, este deberá tener como mínimo las siguientes características:
  - Dos sensores de distancia. Nosotros hemos utilizado dos configuraciones distintas, una con dos sensores de ultrasonidos y otra que añade además, tres sensores láser
  - Una placa Arduino MEGA 2560
  - Motores que permitan que el robot se mueva

# Organizacion Proyecto
Se incluye todo el software necesario para hacer funcionar el proyecto. Existen dos versiones del programa Simulink, dependiendo de la cantidad de sensores utilizados
  - Documentos y manuales: Contiene la guía del susuario, la memoria del proyecto, el esquema de conexionado y un par de turoriales.
  - ESP8266/Global_G1 : Contiene el código Arduino. Descargar todo en la misma carpeta y ejecutar Global_G1.ino
  - Node-Red: Contiene los flujos en formato Json. Importar cada uno individualmente
  - PIERO_X_Sensores: Programas Simulink en función del número X de sensores del robot.


