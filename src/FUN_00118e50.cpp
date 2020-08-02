#include <stdint.h>

extern uint32_t DAT_00118e74; //0x0053BF3C;

typedef struct {
	uint8_t filler[0x254];
	uint32_t field_0x596;
} astruct;

extern void FUN_0026b4ec(uint32_t*, uint32_t);
extern void FUN_00260a1c(astruct*, uint32_t*);


void FUN_00118e50(uint32_t param_1, astruct* param_2)

{
    FUN_0026b4ec(&param_2->field_0x596, param_1);
    FUN_00260a1c(param_2, &DAT_00118e74);
}