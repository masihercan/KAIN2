#include "CORE.H"
#include "RELMOD.H"

void RELMOD_InitModulePointers(uintptr_t baseaddr, int* relocs)
{ 
	unsigned int* rel_addr;

	if (*relocs != -1)
	{
		do
		{
			rel_addr = (unsigned int*)(baseaddr + (*relocs & 0xFFFFFFFC));

			switch (*relocs++ & 0x3)
			{
			case 0:
				if (*rel_addr >= 0)
				{
					*rel_addr += baseaddr;
				}
				break;
			case 1:
				*rel_addr = (((*relocs++ + baseaddr) + 0x8000) >> 16);
				break;
			case 2:
				*rel_addr += baseaddr;
				break;
			case 3:
				*rel_addr += ((baseaddr << 4) >> 6);
				break;
			default:
				break;
			}
			
		} while (*relocs != -1);
	}
}


// autogenerated function stub: 
// void /*$ra*/ RELMOD_RelocModulePointers(int baseaddr /*$a0*/, int offset /*$a1*/, int *relocs /*$a2*/)
void RELMOD_RelocModulePointers(int baseaddr, int offset, int *relocs)
{ // line 42, offset 0x8007ca58
	UNIMPLEMENTED();
}
