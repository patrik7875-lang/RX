#include <18F46K22.h>
#device ADC=10

#FUSES NOWDT                    //No Watch Dog Timer

#use delay(crystal=16000000)
#use FIXED_IO( A_outputs=PIN_A1,PIN_A2 )
//#use FIXED_IO( B_outputs=PIN_B3,PIN_B2 )
#use FIXED_IO( C_outputs=PIN_C1,PIN_C2 )
#use FIXED_IO( D_outputs=PIN_D5,PIN_D4,PIN_D6 )
#use FIXED_IO( E_outputs=PIN_E1,PIN_E2) 
