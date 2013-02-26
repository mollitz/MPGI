

#ifndef Atest_included
#define Atest_included

#define __Atest_Aauftrag __Atest_2
#define _Atest_Aauftrag _Atest_2
extern OBJ __Atest_Aauftrag;
extern OBJ _Atest_Aauftrag(OBJ,OBJ,OBJ);

#define __Atest_Aauftrag_ __Atest_3
#define _Atest_Aauftrag_ _Atest_3
extern OBJ __Atest_Aauftrag_;
extern OBJ _Atest_Aauftrag_(OBJ);

#define __Atest_Aart __Atest_4
#define _Atest_Aart _Atest_4
extern OBJ __Atest_Aart;
extern OBJ _Atest_Aart(OBJ);

#define __Atest_Aschalter __Atest_5
#define _Atest_Aschalter _Atest_5
extern OBJ __Atest_Aschalter;
extern OBJ _Atest_Aschalter(OBJ);

#define __Atest_AbZeit __Atest_6
#define _Atest_AbZeit _Atest_6
extern OBJ __Atest_AbZeit;
extern OBJ _Atest_AbZeit(OBJ);

#define __Atest_Aausweis __Atest_8
extern OBJ __Atest_Aausweis;

#define __Atest_Aausweis_ __Atest_9
#define _Atest_Aausweis_ _Atest_9
extern OBJ __Atest_Aausweis_;
extern OBJ _Atest_Aausweis_(OBJ);

#define __Atest_Apass __Atest_10
extern OBJ __Atest_Apass;

#define __Atest_Apass_ __Atest_11
#define _Atest_Apass_ _Atest_11
extern OBJ __Atest_Apass_;
extern OBJ _Atest_Apass_(OBJ);

#define __Atest_Aliste __Atest_12
extern OBJ __Atest_Aliste;

#define __Atest_Aliste2 __Atest_13
extern OBJ __Atest_Aliste2;

#define __Atest_Atime __Atest_14
#define _Atest_Atime _Atest_14
extern OBJ __Atest_Atime;
extern OBJ _Atest_Atime(OBJ);

#define __Atest_AslowService __Atest_15
#define _Atest_AslowService _Atest_15
extern OBJ __Atest_AslowService;
extern OBJ _Atest_AslowService(OBJ,OBJ);

#define __Atest_Ah __Atest_16
#define _Atest_Ah _Atest_16
extern OBJ __Atest_Ah;
extern OBJ _Atest_Ah(OBJ,OBJ);

#define __Atest_Aslowest __Atest_17
#define _Atest_Aslowest _Atest_17
extern OBJ __Atest_Aslowest;
extern OBJ _Atest_Aslowest(OBJ,OBJ);

#ifndef Atest_Aauftrag
#define Atest_Aauftrag(x1,x2,x3,x4) {x4=_Atest_Aauftrag(x1,x2,x3);}
#endif

#ifndef Atest_Aauftrag_
#define Atest_Aauftrag_(x1,x2) {x2=_Atest_Aauftrag_(x1);}
#endif

#ifndef Atest_Aart
#define Atest_Aart(x1,x5) {x5=_Atest_Aart(x1);}
#endif

#ifndef Atest_Aschalter
#define Atest_Aschalter(x1,x5) {x5=_Atest_Aschalter(x1);}
#endif

#ifndef Atest_AbZeit
#define Atest_AbZeit(x1,x5) {x5=_Atest_AbZeit(x1);}
#endif

#ifndef Atest_Aausweis_
#define Atest_Aausweis_(x1,x2) {x2=_Atest_Aausweis_(x1);}
#endif

#ifndef Atest_Apass_
#define Atest_Apass_(x1,x2) {x2=_Atest_Apass_(x1);}
#endif

#ifndef Atest_Atime
#define Atest_Atime(x1,x4) {x4=_Atest_Atime(x1);}
#endif

#ifndef Atest_AslowService
#define Atest_AslowService(x1,x2,x4) {x4=_Atest_AslowService(x1,x2);}
#endif

#ifndef Atest_Ah
#define Atest_Ah(x1,x2,x6) {x6=_Atest_Ah(x1,x2);}
#endif

#ifndef Atest_Aslowest
#define Atest_Aslowest(x1,x2,x8) {x8=_Atest_Aslowest(x1,x2);}
#endif

#ifndef Atest_Atime_L18
#define Atest_Atime_L18(x1,x2) {x2=_Atest_Atime_L18(x1);}
#endif

#ifndef Atest_AslowService_L19
#define Atest_AslowService_L19(x1,x2,x4) {x4=_Atest_AslowService_L19(x1,x2);}
#endif

#ifndef Atest_Aslowest_L20
#define Atest_Aslowest_L20(x1,x2,x4) {x4=_Atest_Aslowest_L20(x1,x2);}
#endif

#endif
