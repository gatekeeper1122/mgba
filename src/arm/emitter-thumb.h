#ifndef EMITTER_THUMB_H
#define EMITTER_THUMB_H

#include "emitter-inlines.h"

#define DECLARE_INSTRUCTION_THUMB(EMITTER, NAME) \
	EMITTER ## NAME

#define DECLARE_INSTRUCTION_WITH_HIGH_THUMB(EMITTER, NAME) \
	DECLARE_INSTRUCTION_THUMB(EMITTER, NAME ## 00), \
	DECLARE_INSTRUCTION_THUMB(EMITTER, NAME ## 01), \
	DECLARE_INSTRUCTION_THUMB(EMITTER, NAME ## 10), \
	DECLARE_INSTRUCTION_THUMB(EMITTER, NAME ## 11)

#define DECLARE_THUMB_EMITTER_BLOCK(EMITTER) \
	APPLY(COUNT_5, ECHO, DECLARE_INSTRUCTION_THUMB(EMITTER, LSL1_)) \
	APPLY(COUNT_5, ECHO, DECLARE_INSTRUCTION_THUMB(EMITTER, LSR1_)) \
	APPLY(COUNT_5, ECHO, DECLARE_INSTRUCTION_THUMB(EMITTER, ASR1_)) \
	APPLY(COUNT_3, ECHO, DECLARE_INSTRUCTION_THUMB(EMITTER, ADD3_R)) \
	APPLY(COUNT_3, ECHO, DECLARE_INSTRUCTION_THUMB(EMITTER, SUB3_R)) \
	APPLY(COUNT_3, ECHO, DECLARE_INSTRUCTION_THUMB(EMITTER, ADD1_)) \
	APPLY(COUNT_3, ECHO, DECLARE_INSTRUCTION_THUMB(EMITTER, SUB1_)) \
	APPLY(COUNT_3, ECHO_4, DECLARE_INSTRUCTION_THUMB(EMITTER, MOV1_R)) \
	APPLY(COUNT_3, ECHO_4, DECLARE_INSTRUCTION_THUMB(EMITTER, CMP1_R)) \
	APPLY(COUNT_3, ECHO_4, DECLARE_INSTRUCTION_THUMB(EMITTER, ADD2_R)) \
	APPLY(COUNT_3, ECHO_4, DECLARE_INSTRUCTION_THUMB(EMITTER, SUB2_R)) \
	DECLARE_INSTRUCTION_THUMB(EMITTER, AND), \
	DECLARE_INSTRUCTION_THUMB(EMITTER, EOR), \
	DECLARE_INSTRUCTION_THUMB(EMITTER, LSL2), \
	DECLARE_INSTRUCTION_THUMB(EMITTER, LSR2), \
	DECLARE_INSTRUCTION_THUMB(EMITTER, ASR2), \
	DECLARE_INSTRUCTION_THUMB(EMITTER, ADC), \
	DECLARE_INSTRUCTION_THUMB(EMITTER, SBC), \
	DECLARE_INSTRUCTION_THUMB(EMITTER, ROR), \
	DECLARE_INSTRUCTION_THUMB(EMITTER, TST), \
	DECLARE_INSTRUCTION_THUMB(EMITTER, NEG), \
	DECLARE_INSTRUCTION_THUMB(EMITTER, CMP2), \
	DECLARE_INSTRUCTION_THUMB(EMITTER, CMN), \
	DECLARE_INSTRUCTION_THUMB(EMITTER, ORR), \
	DECLARE_INSTRUCTION_THUMB(EMITTER, MUL), \
	DECLARE_INSTRUCTION_THUMB(EMITTER, BIC), \
	DECLARE_INSTRUCTION_THUMB(EMITTER, MVN), \
	DECLARE_INSTRUCTION_WITH_HIGH_THUMB(EMITTER, ADD4), \
	DECLARE_INSTRUCTION_WITH_HIGH_THUMB(EMITTER, CMP3), \
	DECLARE_INSTRUCTION_WITH_HIGH_THUMB(EMITTER, MOV3), \
	DECLARE_INSTRUCTION_THUMB(EMITTER, BX), \
	DECLARE_INSTRUCTION_THUMB(EMITTER, BX), \
	DECLARE_INSTRUCTION_THUMB(EMITTER, ILL), \
	DECLARE_INSTRUCTION_THUMB(EMITTER, ILL), \
	APPLY(COUNT_3, ECHO_4, DECLARE_INSTRUCTION_THUMB(EMITTER, LDR3_R)) \
	APPLY(COUNT_3, ECHO, DECLARE_INSTRUCTION_THUMB(EMITTER, STR2_R)) \
	APPLY(COUNT_3, ECHO, DECLARE_INSTRUCTION_THUMB(EMITTER, STRH2_R)) \
	APPLY(COUNT_3, ECHO, DECLARE_INSTRUCTION_THUMB(EMITTER, STRB2_R)) \
	APPLY(COUNT_3, ECHO, DECLARE_INSTRUCTION_THUMB(EMITTER, LDRSB_R)) \
	APPLY(COUNT_3, ECHO, DECLARE_INSTRUCTION_THUMB(EMITTER, LDR2_R)) \
	APPLY(COUNT_3, ECHO, DECLARE_INSTRUCTION_THUMB(EMITTER, LDRH2_R)) \
	APPLY(COUNT_3, ECHO, DECLARE_INSTRUCTION_THUMB(EMITTER, LDRB2_R)) \
	APPLY(COUNT_3, ECHO, DECLARE_INSTRUCTION_THUMB(EMITTER, LDRSH_R)) \
	APPLY(COUNT_5, ECHO, DECLARE_INSTRUCTION_THUMB(EMITTER, STR1_)) \
	APPLY(COUNT_5, ECHO, DECLARE_INSTRUCTION_THUMB(EMITTER, LDR1_)) \
	APPLY(COUNT_5, ECHO, DECLARE_INSTRUCTION_THUMB(EMITTER, STRB1_)) \
	APPLY(COUNT_5, ECHO, DECLARE_INSTRUCTION_THUMB(EMITTER, LDRB1_)) \
	APPLY(COUNT_5, ECHO, DECLARE_INSTRUCTION_THUMB(EMITTER, STRH1_)) \
	APPLY(COUNT_5, ECHO, DECLARE_INSTRUCTION_THUMB(EMITTER, LDRH1_)) \
	APPLY(COUNT_3, ECHO_4, DECLARE_INSTRUCTION_THUMB(EMITTER, STR3_R)) \
	APPLY(COUNT_3, ECHO_4, DECLARE_INSTRUCTION_THUMB(EMITTER, LDR4_R)) \
	APPLY(COUNT_3, ECHO_4, DECLARE_INSTRUCTION_THUMB(EMITTER, ADD5_R)) \
	APPLY(COUNT_3, ECHO_4, DECLARE_INSTRUCTION_THUMB(EMITTER, ADD6_R)) \
	DECLARE_INSTRUCTION_THUMB(EMITTER, ADD7), \
	DECLARE_INSTRUCTION_THUMB(EMITTER, ADD7), \
	DECLARE_INSTRUCTION_THUMB(EMITTER, SUB4), \
	DECLARE_INSTRUCTION_THUMB(EMITTER, SUB4), \
	DO_4(DECLARE_INSTRUCTION_THUMB(EMITTER, ILL)), \
	DO_4(DECLARE_INSTRUCTION_THUMB(EMITTER, ILL)), \
	DO_4(DECLARE_INSTRUCTION_THUMB(EMITTER, ILL)), \
	DO_4(DECLARE_INSTRUCTION_THUMB(EMITTER, PUSH)), \
	DO_4(DECLARE_INSTRUCTION_THUMB(EMITTER, PUSHR)), \
	DO_8(DECLARE_INSTRUCTION_THUMB(EMITTER, ILL)), \
	DO_8(DECLARE_INSTRUCTION_THUMB(EMITTER, ILL)), \
	DO_8(DECLARE_INSTRUCTION_THUMB(EMITTER, ILL)), \
	DO_4(DECLARE_INSTRUCTION_THUMB(EMITTER, POP)), \
	DO_4(DECLARE_INSTRUCTION_THUMB(EMITTER, POPR)), \
	DO_4(DECLARE_INSTRUCTION_THUMB(EMITTER, BKPT)), \
	DO_4(DECLARE_INSTRUCTION_THUMB(EMITTER, ILL)), \
	APPLY(COUNT_3, ECHO_4, DECLARE_INSTRUCTION_THUMB(EMITTER, STMIA_R)) \
	APPLY(COUNT_3, ECHO_4, DECLARE_INSTRUCTION_THUMB(EMITTER, LDMIA_R)) \
	DO_4(DECLARE_INSTRUCTION_THUMB(EMITTER, BEQ)), \
	DO_4(DECLARE_INSTRUCTION_THUMB(EMITTER, BNE)), \
	DO_4(DECLARE_INSTRUCTION_THUMB(EMITTER, BCS)), \
	DO_4(DECLARE_INSTRUCTION_THUMB(EMITTER, BCC)), \
	DO_4(DECLARE_INSTRUCTION_THUMB(EMITTER, BMI)), \
	DO_4(DECLARE_INSTRUCTION_THUMB(EMITTER, BPL)), \
	DO_4(DECLARE_INSTRUCTION_THUMB(EMITTER, BVS)), \
	DO_4(DECLARE_INSTRUCTION_THUMB(EMITTER, BVC)), \
	DO_4(DECLARE_INSTRUCTION_THUMB(EMITTER, BHI)), \
	DO_4(DECLARE_INSTRUCTION_THUMB(EMITTER, BLS)), \
	DO_4(DECLARE_INSTRUCTION_THUMB(EMITTER, BGE)), \
	DO_4(DECLARE_INSTRUCTION_THUMB(EMITTER, BLT)), \
	DO_4(DECLARE_INSTRUCTION_THUMB(EMITTER, BGT)), \
	DO_4(DECLARE_INSTRUCTION_THUMB(EMITTER, BLE)), \
	DO_4(DECLARE_INSTRUCTION_THUMB(EMITTER, ILL)), \
	DO_4(DECLARE_INSTRUCTION_THUMB(EMITTER, SWI)), \
	DO_8(DO_4(DECLARE_INSTRUCTION_THUMB(EMITTER, B))), \
	DO_8(DO_4(DECLARE_INSTRUCTION_THUMB(EMITTER, ILL))), \
	DO_8(DO_4(DECLARE_INSTRUCTION_THUMB(EMITTER, BL1))), \
	DO_8(DO_4(DECLARE_INSTRUCTION_THUMB(EMITTER, BL2))) \

#endif
