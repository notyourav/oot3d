#include <stdint.h>

typedef struct {
	uint8_t filler[0x18];
	uint32_t field_0x18;
} astruct;

extern void FUN_00365f70(uint32_t* arg0);

void FUN_00211284(astruct *arg0)
{
    if (arg0->field_0x18 != 0) {
        FUN_00365f70(&arg0->field_0x18);
        arg0->field_0x18 = 0;
    }
}