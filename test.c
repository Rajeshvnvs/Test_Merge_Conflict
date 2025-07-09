# C file to add code 

adding more changes 

Updating code from side branch 1 


 

Updating from main line to create a conflict
 Editing from side branch 2 
/**************************************************************************
*  Macro name:  Iopt_Adc_vArbitrationSlotEnable()
*
*  Description:
*    This function enables the required Arbitration slots. Because by
*    default no Request Sources should be enabled, this function is
*    attended to release the ADC conversion.
*    The request sources are enabled and pending requests are cleared.
*
*  List of arguments:
*    none
*
*  Return value:
*    none
*
**************************************************************************/
#define IOPT_MEMMAP_CODE MEMMAP_CODE(SLOW, QM, GLOBAL, ADC)
#include "iopt_memmap.h"
void Iopt_Adc_vArbitrationSlotEnable(void)
{
  EVADC_G0ARBPR.B.ASEN0 = 1; /* Group 0: Arbitration Slot 0 Enable */
  EVADC_G8ARBPR.B.ASEN0 = 1; /* Group 8: Arbitration Slot 0 Enable */
}


/**************************************************************************
*  Macro name:  Iopt_Adc_vArbitrationSlotDisable()
*
*  Description:
*    This function disables the required Arbitration slots.
*    The request sources are disabled and pending requests are cleared.
*
*  List of arguments:
*    none
*
*  Return value:
*    none
*
**************************************************************************/
#define IOPT_MEMMAP_CODE MEMMAP_CODE(SLOW, QM, GLOBAL, ADC)
#include "iopt_memmap.h"
void Iopt_Adc_vArbitrationSlotDisable(void)
{
  EVADC_G0ARBPR.B.ASEN0 = 0; /* Group 0: Arbitration Slot 0 Disable */
  EVADC_G8ARBPR.B.ASEN0 = 0; /* Group 0: Arbitration Slot 0 Disable */
}
