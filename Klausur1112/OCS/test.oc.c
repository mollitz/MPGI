

#line 1 "test.impl"
#include "BUILTIN.h"
extern OBJ __ANat_5;
extern OBJ __ANat_9;
extern OBJ __ANat_10;
extern OBJ __ANat_11;
extern OBJ __ANat_12;
extern OBJ __ANat_17;
extern OBJ __ANat_61;
extern OBJ __ANat_81;
extern OBJ __ASeq_2;
extern OBJ __ASeq_5;
extern OBJ __ASeq_6;
extern OBJ __ASeq_7;
extern OBJ __ASeqMap_5;
extern OBJ __ASeqReduce_5;
extern OBJ __ASeqReduce_6;
extern OBJ __ASeqFilter_3;
extern OBJ _Atest_2(OBJ,OBJ,OBJ);OBJ __Atest_2; /* auftrag */
extern OBJ _Atest_3(OBJ);OBJ __Atest_3; /* auftrag? */
extern OBJ _Atest_4(OBJ);OBJ __Atest_4; /* art */
extern OBJ _Atest_5(OBJ);OBJ __Atest_5; /* schalter */
extern OBJ _Atest_6(OBJ);OBJ __Atest_6; /* bZeit */
OBJ __Atest_8; /* ausweis */
extern OBJ _Atest_9(OBJ);OBJ __Atest_9; /* ausweis? */
OBJ __Atest_10; /* pass */
extern OBJ _Atest_11(OBJ);OBJ __Atest_11; /* pass? */
OBJ __Atest_12; /* liste */
OBJ __Atest_13; /* liste2 */
extern OBJ _Atest_14(OBJ);OBJ __Atest_14; /* time */
extern OBJ _Atest_15(OBJ,OBJ);OBJ __Atest_15; /* slowService */
extern OBJ _Atest_16(OBJ,OBJ);OBJ __Atest_16; /* h */
extern OBJ _Atest_17(OBJ,OBJ);OBJ __Atest_17; /* slowest */
extern OBJ _Atest_18(OBJ);OBJ __Atest_18; /* time'18 */
extern OBJ _Atest_19(OBJ,OBJ);OBJ __Atest_19; /* slowService'19 */
extern OBJ _Atest_20(OBJ,OBJ);OBJ __Atest_20; /* slowest'20 */

extern OBJ _Atest_2(OBJ x1,OBJ x2,OBJ x3) /* auftrag */
{OBJ r;
 PRD1(3,r);FLD1(r,1)=x1;FLD1(r,2)=x2;FLD1(r,3)=x3;
 return r;}

extern OBJ _Atest_3(OBJ x1) /* auftrag? */
{OBJ r;
 FRPRD(x1,1);
#line 15
 r=__ABUILTIN_5;
#line 15
 return r;}

extern OBJ _Atest_4(OBJ x1) /* art */
{OBJ r;
#line 15
 {OBJ x4=FLD1(x1,3);
#line 15
  if(EXPRD(x1,1)){
#line 15
   DSPRD(x1);
#line 15
  }else{
#line 15
   FRPRD(x1,1);}
#line 15
  r=x4;}
#line 15
 return r;}

extern OBJ _Atest_5(OBJ x1) /* schalter */
{OBJ r;
#line 15
 {OBJ x3=FLD1(x1,2);
#line 15
  if(EXPRD(x1,1)){
#line 15
   FLD1(x1,2)=NIL;DSPRD(x1);
#line 15
  }else{
#line 15
   COPY(x3,1);
#line 15
   FRPRD(x1,1);}
#line 15
  r=x3;}
#line 15
 return r;}

extern OBJ _Atest_6(OBJ x1) /* bZeit */
{OBJ r;
#line 15
 {OBJ x2=FLD1(x1,1);
#line 15
  if(EXPRD(x1,1)){
#line 15
   FLD1(x1,1)=NIL;DSPRD(x1);
#line 15
  }else{
#line 15
   COPY(x2,1);
#line 15
   FRPRD(x1,1);}
#line 15
  r=x2;}
#line 15
 return r;}

extern OBJ _Atest_9(OBJ x1) /* ausweis? */
{OBJ r;
#line 14
 if(ISTGPRM(x1,1)){
#line 14
  r=__ABUILTIN_5;
#line 14
 }else{
#line 14
  r=__ABUILTIN_3;}
#line 14
 return r;}

extern OBJ _Atest_11(OBJ x1) /* pass? */
{OBJ r;
#line 14
 if(ISTGPRM(x1,0)){
#line 14
  r=__ABUILTIN_5;
#line 14
 }else{
#line 14
  r=__ABUILTIN_3;}
#line 14
 return r;}

extern OBJ _Atest_14(OBJ x1) /* time */
{OBJ r;
 CPCLS(__ASeq_7,1);
 COPY(x1,1);
#line 23
 {OBJ x2;
#line 22
  x2=(*(OBJ(*)(OBJ,OBJ))METHOD(__ASeq_7,1))(__ASeq_7,x1);
#line 22
  if(ISTGPRM(x2,1)){
#line 22
   FREE(x1,1);
#line 22
   COPY(__ANat_5,1);
#line 23
   r=__ANat_5;
#line 23
  }else{
#line 23
   CPCLS(__Atest_18,1);
#line 23
   COPY(__ANat_5,1);
#line 23
   CPCLS(__ANat_61,1);
#line 23
   CPCLS(__ASeqMap_5,1);
#line 23
   CPCLS(__ASeqReduce_6,1);
#line 23
   {OBJ x3;
#line 24
    x3=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ASeqMap_5,2))(__ASeqMap_5,__Atest_18,x1);
#line 24
    r=(*(OBJ(*)(OBJ,OBJ,OBJ,OBJ))METHOD(__ASeqReduce_6,3))(__ASeqReduce_6,__ANat_61,__ANat_5,x3);}}}
#line 24
 return r;}

extern OBJ _Atest_15(OBJ x1,OBJ x2) /* slowService */
{OBJ r;
 CPCLS(__Atest_19,1);
 CPCLS(__ASeqFilter_3,1);
#line 30
 {OBJ x3;
#line 30
  x3=(*(OBJ(*)(OBJ,OBJ))METHOD(__Atest_19,1))(__Atest_19,x2);
#line 30
  r=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ASeqFilter_3,2))(__ASeqFilter_3,x3,x1);}
#line 30
 return r;}

extern OBJ _Atest_16(OBJ x1,OBJ x2) /* h */
{OBJ r;
 CPCLS(__Atest_6,2);
 CPCLS(__ANat_81,1);
 CPPRD(x1,1);
 CPPRD(x2,1);
#line 35
 {OBJ x3;OBJ x4;OBJ x5;
#line 35
  x3=(*(OBJ(*)(OBJ,OBJ))METHOD(__Atest_6,1))(__Atest_6,x1);
#line 35
  x4=(*(OBJ(*)(OBJ,OBJ))METHOD(__Atest_6,1))(__Atest_6,x2);
#line 35
  x5=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_81,2))(__ANat_81,x3,x4);
#line 35
  if(ISTGPRM(x5,1)){
#line 35
   FRPRD(x2,1);
#line 35
   r=x1;
#line 35
  }else{
#line 35
   FRPRD(x1,1);
#line 35
   r=x2;}}
#line 35
 return r;}

extern OBJ _Atest_17(OBJ x1,OBJ x2) /* slowest */
{OBJ r;
 CPCLS(__Atest_20,1);
 CPCLS(__ASeq_7,1);
 CPCLS(__ASeqFilter_3,1);
#line 38
 {OBJ x3;OBJ x4;OBJ x5;
#line 38
  x3=(*(OBJ(*)(OBJ,OBJ))METHOD(__Atest_20,1))(__Atest_20,x2);
#line 38
  x4=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ASeqFilter_3,2))(__ASeqFilter_3,x3,x1);
#line 38
  COPY(x4,1);
#line 40
  x5=(*(OBJ(*)(OBJ,OBJ))METHOD(__ASeq_7,1))(__ASeq_7,x4);
#line 40
  if(ISTGPRM(x5,1)){
#line 40
   FREE(x4,1);
#line 40
   COPY(__ANat_5,1);
#line 40
   r=__ANat_5;
#line 40
  }else{
#line 40
   COPY(x4,1);
#line 40
   CPCLS(__Atest_5,1);
#line 40
   CPCLS(__Atest_16,1);
#line 40
   CPCLS(__ASeq_5,1);
#line 40
   CPCLS(__ASeqReduce_5,1);
#line 40
   {OBJ x6;OBJ x7;
#line 41
    x6=(*(OBJ(*)(OBJ,OBJ))METHOD(__ASeq_5,1))(__ASeq_5,x4);
#line 41
    x7=(*(OBJ(*)(OBJ,OBJ,OBJ,OBJ))METHOD(__ASeqReduce_5,3))(__ASeqReduce_5,__Atest_16,x6,x4);
#line 41
    r=(*(OBJ(*)(OBJ,OBJ))METHOD(__Atest_5,1))(__Atest_5,x7);}}}
#line 41
 return r;}

extern OBJ _Atest_18(OBJ x1) /* time'18 */
{OBJ r;
 CPCLS(__Atest_6,1);
#line 24
 r=(*(OBJ(*)(OBJ,OBJ))METHOD(__Atest_6,1))(__Atest_6,x1);
#line 24
 return r;}

extern OBJ _Atest_19(OBJ x1,OBJ x2) /* slowService'19 */
{OBJ r;
 CPCLS(__Atest_6,1);
 CPCLS(__ANat_81,1);
#line 30
 {OBJ x3;
#line 30
  x3=(*(OBJ(*)(OBJ,OBJ))METHOD(__Atest_6,1))(__Atest_6,x2);
#line 30
  r=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_81,2))(__ANat_81,x3,x1);}
#line 30
 return r;}

extern OBJ _Atest_20(OBJ x1,OBJ x2) /* slowest'20 */
{OBJ r;
 CPCLS(__Atest_4,1);
#line 38
 {OBJ x3;
#line 38
  x3=(*(OBJ(*)(OBJ,OBJ))METHOD(__Atest_4,1))(__Atest_4,x2);
#line 38
  r=(*(OBJ(*)(OBJ,OBJ))METHOD(x1,1))(x1,x3);}
#line 38
 return r;}



static void ___Atest_12()
{
 CPPRD(__Atest_2,3);
 COPY(__ANat_9,1);
 COPY(__ANat_10,2);
 COPY(__ANat_11,1);
 COPY(__ANat_12,1);
 COPY(__ANat_17,1);
 CPCLS(__ASeq_2,3);
 COPY(__ASeq_6,1);
 {OBJ x1;OBJ x2;OBJ x3;OBJ x4;OBJ x5;
#line 18
  x1=(*(OBJ(*)(OBJ,OBJ,OBJ,OBJ))METHOD(__Atest_2,3))(__Atest_2,__ANat_12,__ANat_10,__Atest_10);
#line 18
  x2=(*(OBJ(*)(OBJ,OBJ,OBJ,OBJ))METHOD(__Atest_2,3))(__Atest_2,__ANat_10,__ANat_9,__Atest_10);
#line 18
  x3=(*(OBJ(*)(OBJ,OBJ,OBJ,OBJ))METHOD(__Atest_2,3))(__Atest_2,__ANat_17,__ANat_11,__Atest_8);
#line 18
  x4=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ASeq_2,2))(__ASeq_2,x3,__ASeq_6);
#line 18
  x5=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ASeq_2,2))(__ASeq_2,x2,x4);
#line 18
  __Atest_12=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ASeq_2,2))(__ASeq_2,x1,x5);}}

static void ___Atest_13()
{
 CPPRD(__Atest_2,1);
 COPY(__ANat_10,1);
 COPY(__ANat_12,1);
 CPCLS(__ASeq_2,1);
 COPY(__ASeq_6,1);
 {OBJ x1;
#line 20
  x1=(*(OBJ(*)(OBJ,OBJ,OBJ,OBJ))METHOD(__Atest_2,3))(__Atest_2,__ANat_12,__ANat_10,__Atest_10);
#line 20
  __Atest_13=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ASeq_2,2))(__ASeq_2,x1,__ASeq_6);}}

static OBJ _mt_1_0_1(OBJ t,OBJ t1) 
{OBJ r;
 DCCLS(t,1);
 r=(*(OBJ(*)(OBJ))ENTRY(t))(t1);
 return r;}
static OBJ _mt_1_0_1_l(OBJ t,OBJ t1) 
{OBJ r;
 DCCLS(t,1);
 r=(*(OBJ(*)(OBJ))ENTRY(t))(t1);
 COPY(r,1);LZYCLS(t,r);
 return r;}

static OBJ _mt_2_0_1(OBJ t,OBJ t1) 
{OBJ r;
 DPCLS(t,r);
 INCCLS(r,0,1);
 FLDCLS(r,1)=t1;
 return r;}

static OBJ _mt_2_0_2(OBJ t,OBJ t1,OBJ t2) 
{OBJ r;
 DCCLS(t,1);
 r=(*(OBJ(*)(OBJ,OBJ))ENTRY(t))(t1,t2);
 return r;}

static OBJ _mt_2_1_1(OBJ t,OBJ t1) 
{OBJ r;
 if(EXCLS(t)){
  DSCLSF(t);
 }else{
  COPY(FLDCLS(t,1),1);
  DCCLS(t,1);}
 r=(*(OBJ(*)(OBJ,OBJ))ENTRY(t))(FLDCLS(t,1),t1);
 return r;}
static OBJ _mt_2_1_1_l(OBJ t,OBJ t1) 
{OBJ r;
 r=(*(OBJ(*)(OBJ,OBJ))ENTRY(t))(FLDCLS(t,1),t1);
 if(EXCLS(t)){
  DSCLSF(t);
 }else{
  DCCLS(t,1);
  FLDCLS(t,1)=NIL;
  COPY(r,1);LZYCLS(t,r);}
 return r;}

static OBJ _mt_3_0_3(OBJ t,OBJ t1,OBJ t2,OBJ t3) 
{OBJ r;
 DCCLS(t,1);
 r=(*(OBJ(*)(OBJ,OBJ,OBJ))ENTRY(t))(t1,t2,t3);
 return r;}

init_Atest()
{
 static int visited=0; if(visited) return; visited=1;
 init_ANat();
 init_ASeq();
 init_ASeqMap();
 init_ASeqReduce();
 init_ASeqFilter();
 init_ACom();
 init_AComCompose();
 init_ACompose();
 init_AVoid();
 init_AOption();
 CLS(2,_Atest_20,__Atest_20);
 CLS(2,_Atest_19,__Atest_19);
 CLS(1,_Atest_18,__Atest_18);
 CLS(2,_Atest_17,__Atest_17);
 CLS(2,_Atest_16,__Atest_16);
 CLS(2,_Atest_15,__Atest_15);
 CLS(1,_Atest_14,__Atest_14);
 CLS(1,_Atest_11,__Atest_11);
 CLS(1,_Atest_9,__Atest_9);
 CLS(1,_Atest_6,__Atest_6);
 CLS(1,_Atest_5,__Atest_5);
 CLS(1,_Atest_4,__Atest_4);
 CLS(1,_Atest_3,__Atest_3);
 CLS(3,_Atest_2,__Atest_2);
 MTH(1,0,1,_mt_1_0_1);LZYMTH(1,0,1,_mt_1_0_1_l);
 MTH(2,0,1,_mt_2_0_1);LZYMTH(2,0,1,_mt_2_0_1);
 MTH(2,0,2,_mt_2_0_2);LZYMTH(2,0,2,_mt_2_0_2);
 MTH(2,1,1,_mt_2_1_1);LZYMTH(2,1,1,_mt_2_1_1_l);
 MTH(3,0,3,_mt_3_0_3);LZYMTH(3,0,3,_mt_3_0_3);
 PRM(1,__Atest_8);
 PRM(0,__Atest_10);
 ___Atest_12();
 ___Atest_13();}

