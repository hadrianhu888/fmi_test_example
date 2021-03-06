

    /*
* fmi_setup_test_mid.h
*
    * Code generation for model "fmi_setup_test_sf".
    *
    * Model version              : 1.27
    * Simulink Coder version : 9.6 (R2021b) 14-May-2021
        * C source code generated on : Tue May 17 19:46:36 2022
 * 
 * Target selection: rtwsfcnfmi.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Atmel->AVR
 * Emulation hardware selection: 
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives: Unspecified
 * Validation result: Not run
*
  * SOURCES: fmi_setup_test_sf.c 
*/



        

    #include "simstruc.h"
#include "fmi_setup_test_sf.h"


    

    

    

    

    

    

    

    

    

    

    

    

    

    

    

    
     
    #if defined(MATLAB_MEX_FILE) || defined(RT_MALLOC)
    static int_T RegNumInputPorts(SimStruct *S, int_T nInputPorts) {
        _ssSetNumInputPorts(S,nInputPorts);
        return true;
    }

     
    static int_T RegNumOutputPorts(SimStruct *S, int_T nOutputPorts) {
        _ssSetNumOutputPorts(S,nOutputPorts);
        return true;
    }

     
    static int_T FcnSetErrorStatus(const SimStruct *S, DTypeId arg2)
    {
        static char msg[256];

        if (strlen(ssGetModelName(S)) < 128) {
            sprintf(msg, "S-function %s does not have a tlc file. It cannot use macros that access regDataType field in simstruct.", ssGetModelName(S));
        } else {
            sprintf(msg, "A S-function does not have a tlc file. It cannot use macros that access regDataType field in simstruct.");
        }

        ssSetErrorStatus(S, msg);

        UNUSED_PARAMETER(arg2);
        return 0;
    }

    static void * FcnSetErrorStatusWithReturnPtr(const SimStruct *S, DTypeId arg2)
    {
        FcnSetErrorStatus(S,0);
        UNUSED_PARAMETER(arg2);
        return 0;
    }

    static int_T FcnSetErrorStatusWithArgPtr(const SimStruct *S, const void* arg2)
    {
        FcnSetErrorStatus(S,0);
        UNUSED_PARAMETER(arg2);
        return 0;
    }
    #endif


/* Instance data for model: fmi_setup_test */
void *fmi_setup_test_malloc(SimStruct *rts)
{
            /* Local SimStruct for the generated S-Function */
        LocalS *lS = (LocalS *) malloc(sizeof(LocalS));

        ss_VALIDATE_MEMORY(rts,lS);
            (void) memset((char *) lS, 0,
sizeof(LocalS));
            ssSetUserData(rts, lS);


        /* model parameters */
        ssSetLocalDefaultParam(rts, (real_T *) &fmi_setup_test_DefaultP);

    

    /* model checksums */
    ssSetChecksumVal(rts, 0, 1869378751U);
    ssSetChecksumVal(rts, 1, 429447473U);
    ssSetChecksumVal(rts, 2, 23110016U);
    ssSetChecksumVal(rts, 3, 3932369198U);


    return (NULL);
}


    

    

    

    
