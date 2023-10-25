/* voc 2.1.0 [2023/04/26] for gcc LP64 on gentoo xtpa */

#define SHORTINT INT8
#define INTEGER  INT16
#define LONGINT  INT32
#define SET      UINT32

#include "SYSTEM.h"




export UINT32 math_add (UINT32 a, UINT32 b);


UINT32 math_add (UINT32 a, UINT32 b)
{
	return a | b;
}


export void *math__init(void)
{
	__DEFMOD;
	__REGMOD("math", 0);
/* BEGIN */
	__ENDMOD;
}
