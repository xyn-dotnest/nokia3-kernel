/*
 * Copyright (c) 2015-2016 MICROTRUST Incorporated
 * All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */
#ifndef TZ_XTEST_MAIN_H
#define TZ_XTEST_MAIN_H

#include "main.h"

extern int case_res;
extern struct TEEC_Context xtest_isee_ctx_1000;
extern struct TEEC_Context xtest_isee_ctx_3000;
#define _CASECMDSTR(prefix_cmd) #prefix_cmd
#define _CASECMD(prefix, cmd) prefix##cmd
#define _CASE(cmd) _CASECMD(xtest_isee_test_, cmd)
#define DECLARECASE(id) int _CASE(id)(void)
DECLARECASE(1001);
DECLARECASE(1002);
DECLARECASE(1003);
DECLARECASE(1004);
DECLARECASE(1005);
DECLARECASE(1010);
DECLARECASE(1011);
DECLARECASE(1012);
DECLARECASE(1013);
DECLARECASE(1020);
DECLARECASE(1021);
DECLARECASE(1022);
DECLARECASE(1023);
DECLARECASE(1030);
DECLARECASE(1031);
DECLARECASE(1032);
DECLARECASE(1033);
DECLARECASE(1034);
DECLARECASE(1035);
DECLARECASE(1036);
DECLARECASE(1037);
DECLARECASE(1040);
DECLARECASE(1041);
DECLARECASE(1042);
DECLARECASE(1043);
DECLARECASE(1044);
DECLARECASE(1045);
DECLARECASE(1046);
DECLARECASE(1047);
DECLARECASE(1100);
DECLARECASE(1101);
DECLARECASE(1102);
DECLARECASE(1200);
DECLARECASE(1201);
DECLARECASE(1203);
DECLARECASE(1204);
DECLARECASE(1206);
DECLARECASE(1207);
DECLARECASE(1208);
DECLARECASE(1209);
DECLARECASE(1210);
DECLARECASE(1212);
DECLARECASE(1213);
DECLARECASE(1214);
DECLARECASE(1215);
DECLARECASE(1216);
DECLARECASE(1217);
DECLARECASE(1218);
DECLARECASE(1219);
DECLARECASE(1300);
DECLARECASE(1301);
DECLARECASE(1302);
DECLARECASE(1303);
DECLARECASE(1304);
DECLARECASE(1305);
DECLARECASE(1306);
DECLARECASE(1307);
DECLARECASE(1308);
DECLARECASE(1400);
DECLARECASE(1401);
DECLARECASE(1402);
DECLARECASE(1403);
DECLARECASE(1404);
DECLARECASE(1405);
DECLARECASE(1406);
DECLARECASE(1407);
DECLARECASE(1408);
DECLARECASE(1409);
DECLARECASE(1410);
DECLARECASE(1411);
DECLARECASE(1412);
DECLARECASE(1800);
DECLARECASE(1801);
DECLARECASE(1802);
DECLARECASE(1803);

DECLARECASE(3030);
DECLARECASE(3040);
DECLARECASE(3050);
DECLARECASE(3051);
DECLARECASE(3052);
DECLARECASE(3053);

#endif
