#include "__cf_SerialSendReceive_etiqueta.h"
#ifndef RTW_HEADER_SerialSendReceive_etiqueta_private_h_
#define RTW_HEADER_SerialSendReceive_etiqueta_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val) ((rtm)->Timing.tFinal = (val))
#endif
#ifndef UCHAR_MAX
#include <limits.h>
#endif
#if ( UCHAR_MAX != (_R_1bqJIRrw2RcP37tdGIC0) ) || ( SCHAR_MAX != (_z7d9bYxzWEres3Asn6yHO2) )
#error Code was generated for compiler with different sized uchar/char. \Consider adjusting Test hardware word size settings on the \Hardware Implementation pane to match your compiler word sizes as \defined in limits.h of the compiler. Alternatively, you can \select the Test hardware is the same as production hardware option and \select the Enable portable word sizes option on the Code Generation > \Verification pane for ERT based targets, which will disable the \preprocessor word size checks.
#endif
#if ( USHRT_MAX != (_DhnCZDZKTPWqsnwQARKeO0) ) || ( SHRT_MAX != (_CifPksxsIFcV5lcW5xmcD0) )
#error Code was generated for compiler with different sized ushort/short. \Consider adjusting Test hardware word size settings on the \Hardware Implementation pane to match your compiler word sizes as \defined in limits.h of the compiler. Alternatively, you can \select the Test hardware is the same as production hardware option and \select the Enable portable word sizes option on the Code Generation > \Verification pane for ERT based targets, which will disable the \preprocessor word size checks.
#endif
#if ( UINT_MAX != (_DhnCZDZKTPWqsnwQARKeO0) ) || ( INT_MAX != (_CifPksxsIFcV5lcW5xmcD0) )
#error Code was generated for compiler with different sized uint/int. \Consider adjusting Test hardware word size settings on the \Hardware Implementation pane to match your compiler word sizes as \defined in limits.h of the compiler. Alternatively, you can \select the Test hardware is the same as production hardware option and \select the Enable portable word sizes option on the Code Generation > \Verification pane for ERT based targets, which will disable the \preprocessor word size checks.
#endif
#if ( ULONG_MAX != (_bqnE7T4tgYoPKiD3tBmbR0) ) || ( LONG_MAX != (_BNClbheCBA_9nKRKt1r2_1) )
#error Code was generated for compiler with different sized ulong/long. \Consider adjusting Test hardware word size settings on the \Hardware Implementation pane to match your compiler word sizes as \defined in limits.h of the compiler. Alternatively, you can \select the Test hardware is the same as production hardware option and \select the Enable portable word sizes option on the Code Generation > \Verification pane for ERT based targets, which will disable the \preprocessor word size checks.
#endif
extern real_T rt_roundd_snf ( real_T u ) ;
#endif
