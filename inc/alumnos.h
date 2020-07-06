/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/


//! Estructura para almacenar la información de alumno
typedef struct alumno_s {
    char apellidos[30];     //!< Apellido del alumno hasta 30 caracteres 
    char nombres[30];       //!< Nombre del alumno hasta 30 caracteres
    char documento[11];     //!< DNI del alumno hasta 11 caracteres 
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

/*=====[Prototypes (declarations) of public functions]=======================*/

/**
 * @brief Convierte los datos de un alumno en una cadena JSON
 * 
 * @param  cadena       Es un puntero a una cadena de caracteres de 30 posiciones
 * @param  espacio      Cantidad de bytes disponibles en la cadena resultado
 * @param  alumno       Es una variable en formato alumno_t
 * @return true         Los datos se serializaron bien
 * @return false        No se pudo serializar los datos  
 */
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);

/**
 * @brief Concatena los distintos alumnos
 * 
 * @param  cadena       Es un puntero a una cadena de caracteres de 30 posiciones
 * @param  espacio      Cantidad de bytes disponibles en la cadena resultado
 * @return true        Los datos se serializaron bien
 * @return false        No se pudo serializar los datos  
 */
bool SerializarAlumnos(char * cadena, size_t espacio);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
