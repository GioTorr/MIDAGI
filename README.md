# MIDAGI: Smart SumoBot ARM con IoT 🤖🌐
**Universidad Escuela Colombiana de Ingeniería Julio Garavito**  
*Proyecto Final - Microprocesadores e Interfaces grupo 1 (MPEI-1)*

## Descripción
**MIDAGI** es un robot de combate tipo sumo basado en el microcontrolador **STM32F103 (ARM Cortex-M3)**. El proyecto integra control en tiempo real, monitoreo de variables físicas y conectividad a la nube, siguiendo una arquitectura de sistemas embebidos distribuidos.

## Características del Proyecto
* **Modos de Operación**:
    * **Autónomo**: Ejecuta algoritmos de combate sin intervención externa.
    * **Control Remoto**: Operado mediante una aplicación móvil vía Bluetooth.
    * **Modo Espera**: Aguarda la señal de inicio de competencia.
* **Arquitectura Dual**:
    * **Control (STM32)**: Gestión de motores, sensores y lógica de combate.
    * **Conectividad (ESP8266)**: Gateway IoT para comunicación Wi-Fi mediante una API REST.
* **Interfaz Visual Dinámica**: Pantalla OLED con modo **Técnico** (diagnóstico de sensores) y modo **Competencia** (expresiones animadas del robot).

## Tecnologías y Periféricos
* **Sensores**: Infrarrojos (bordes), Ultrasónico (distancia), Óptico Sharp (analógico) y sensores de impacto.
* **Actuadores**: Motores DC con driver Puente H y Servomotor para control de la pala frontal.
* **Gestión Energética**: Monitoreo de batería y consumo de corriente mediante ADC, utilizando las funciones PVD y VREFINT del STM32.
* **Indicadores**: LED RGB controlado por PWM para señalización de estados (Victoria, Derrota, Batería Baja, etc.).
* **Alerta Sonora**: Buzzer para retroalimentación de impactos y eventos de competencia.

## Diseño de Hardware
El sistema incluye una **PCB personalizada** diseñada en **Altium Designer**, que integra el microcontrolador, reguladores de voltaje y drivers de potencia.

## Autores
* **Miguel Esteban Reina Cabra** - [miteban2000-bit](https://github.com/miteban2000-bit)
* **Daniel Felipe Santos Lombana** - [danixantosl-oss](https://github.com/danixantosl-oss)
* **Giovanny Alejandro Torres Villarraga** - [GioTorr](https://github.com/GioTorr)

## Docente
* **Ing. Iván Darío Melo Lagos**
