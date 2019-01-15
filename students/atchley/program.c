/*==========================================================================
 *
 *
 *       Filename:  program.c
 *
 *    Description:  Basics of program text layout in C
 *                  C programs are composed of a sequence of statements.
 *                  Every C STATEMENT is contained within a BLOCK.
 *                  Statements are sequences of TOKENS that the C language
 *                  either has RESERVED as NAMES or OPERATORS
 *                  or names the USER-DEFINES that are visible from the
 *                  SCOPE of the current block.
 *
 *        Version:  1.0
 *        Created:  01/09/2019 02:49:56 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  Bonanza High School
 *
 *==========================================================================
 */


/*  The Global Block
 *  The only statements that may appear at the start of a program are
 *  1. Preprocessor Directives
 *  2. Declarations of variables and user-defined data types
 *  3. Function definition blocks
*/

// 1. Preprocessor directives
// #include statements replace the directive line with the ENTIRE contents
// of the included file.
// Include files should ONLY contain variable and function name declarations

#include <stdio.h>
// stdio.h is the c library header file for input and output function names


/*--2.DECLARATIONS---------------STUDENT-INSTRUCTIONS-----------------------
 * Objective: Create your own variables by combining 
 * C reserved key words for data types
 * and your own user-defined variable name.
 *
 * Directions: Create 3 new variable names for the four basic data types
 *
 * Example declaration: 
 * INT a;
 * CHAR x, y, z;
 * FLOAT num;
 * DOUBLE d1, d2;
-----END-------------------------STUDENT-INSTRUCTIONS---------------------*/

int a, bee, newName;
//Place your student work here




/*--3.DEFINITIONS----------------STUDENT-INSTRUCTIONS-----------------------
 * Objective: Write statements that give values to variables and
 * define functions using blocks
 *
 * Directions: 
 * Write a sequence of statements giving values your variable names above. 
 * Write a your own function definition by creating a new block.
----END--------------------------STUDENT-INSTRUCTIONS---------------------*/

// Write 4 assignment statements using your variable name and a constant
a = 5;




// Write 3 assignment statements usng mathematical operators, constants,
// and your variable names.
bee = 5 + a * newName;




// Write 1 function definition by giving your function a DATATYPE and a NAME
// followed by a new block of statements within curly braces {  }




int main(){
    return 0;
}
