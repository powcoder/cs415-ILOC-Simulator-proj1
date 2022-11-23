https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/*
 *********************************************
 *  415 Compilers                            *
 *  Spring 2019                              *
 *  Students                                 *
 *  Authors: Ulrich Kremer                   *
 *********************************************
 */


#include "Instr.h"
#include <stdio.h>

#ifndef INSTR_UTILS_H
#define INSTR_UTILS_H

void PrintInstruction(FILE * outfile, Instruction * instr);
void PrintInstructionList(FILE * outfile, Instruction * instr);
Instruction *ReadInstruction(FILE * infile);
Instruction *ReadInstructionList(FILE * infile);
Instruction *LastInstruction(Instruction * instr);
void DestroyInstructionList(Instruction * instr);

#endif
