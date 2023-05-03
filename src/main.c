/************************************************************************************************
Copyright (c) <year>, <copyright holders>

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
associated documentation files (the "Software"), to deal in the Software without restriction,
including without limitation the rights to use, copy, modify, merge, publish, distribute,
sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial
portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT
NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES
OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

SPDX-License-Identifier: MIT
*************************************************************************************************/

/** \brief Archivo MAIN del TP2
 **
 ** Full file description
 **
 ** \addtogroup name Module denomination
 ** \brief Brief description of the module
 ** @{ */

/* === Headers files inclusions =============================================================== */

#include "alumno.h"

/* === Macros definitions ====================================================================== */

/* === Private data type declarations ========================================================== */

typedef struct alumno_s {
    char apellido[50];
    char nombre[50];
    uint32_t DNI;
} * alumno_t;
/* === Private variable declarations =========================================================== */

/* === Private function declarations =========================================================== */

/* === Public variable definitions ============================================================= */

/* === Private variable definitions ============================================================ */

/* === Private function implementation ========================================================= */

/* === Public function implementation ========================================================== */
int main(void) {

    static const struct alumno_s yo = {
        .apellido = "Di Pinto",
        .nombre = "Luis",
        .DNI = 32413432,
    };
    char cadena[120];
    int resultado;

    if(Serializar(&yo, cadena, sizeof(cadena))>= 0){
        printf("%s\n", cadena);

    }else{
        printf("ERROR");

    };

    return 0;
}
/* === End of documentation ==================================================================== */

/** @} End of module definition for doxygen */
