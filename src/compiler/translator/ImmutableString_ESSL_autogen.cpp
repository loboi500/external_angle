// GENERATED FILE - DO NOT EDIT.
// Generated by gen_builtin_symbols.py using data from builtin_variables.json and
// builtin_function_declarations.txt.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// ImmutableString_ESSL_autogen.cpp: Wrapper for static or pool allocated char arrays, that are
// guaranteed to be valid and unchanged for the duration of the compilation. Implements
// mangledNameHash using perfect hash function from gen_builtin_symbols.py

#include "compiler/translator/ImmutableString.h"

std::ostream &operator<<(std::ostream &os, const sh::ImmutableString &str)
{
    return os.write(str.data(), str.length());
}

#if defined(_MSC_VER)
#    pragma warning(disable : 4309)  // truncation of constant value
#endif

namespace
{

constexpr int mangledkT1[] = {2945, 2683, 2770, 846,  391,  1674, 1234, 2709, 1724, 861,
                              2597, 1086, 529,  604,  2702, 832,  1136, 208,  1157, 2304,
                              1681, 2044, 1506, 2963, 1139, 2408, 670,  2371, 2597, 646,
                              2268, 1625, 2720, 1706, 616,  2530, 2900, 2210, 2240, 2351};
constexpr int mangledkT2[] = {113,  977,  384,  111,  2361, 1452, 1892, 2449, 771,  1341,
                              46,   2394, 1170, 2798, 253,  1063, 312,  2391, 340,  1539,
                              2210, 2423, 2955, 2877, 420,  2348, 1259, 2836, 33,   2167,
                              970,  1742, 686,  486,  2352, 1814, 1442, 3024, 2595, 1244};
constexpr int mangledkG[]  = {
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    2031, 0,    0,    2399, 0,    0,    0,    0,    0,    1578,
    0,    0,    0,    0,    2822, 0,    0,    0,    0,    0,    805,  941,  0,    0,    0,    0,
    0,    0,    0,    2436, 480,  0,    1248, 0,    0,    0,    0,    657,  0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    1755,
    1756, 0,    491,  0,    0,    2602, 0,    0,    0,    0,    1895, 0,    0,    254,  0,    301,
    1393, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    2136, 0,    511,  2570, 0,
    92,   0,    0,    1618, 0,    0,    0,    0,    0,    0,    1510, 0,    0,    0,    1121, 0,
    911,  0,    0,    0,    0,    0,    0,    2636, 0,    0,    0,    0,    0,    714,  0,    0,
    625,  0,    0,    778,  0,    0,    0,    957,  0,    0,    0,    2193, 0,    2686, 0,    0,
    0,    1011, 0,    0,    1062, 0,    0,    0,    0,    1456, 2402, 0,    0,    0,    0,    0,
    0,    628,  0,    0,    0,    0,    0,    1297, 0,    0,    0,    0,    0,    1265, 0,    0,
    158,  0,    0,    0,    0,    0,    225,  0,    0,    2221, 0,    0,    2676, 2773, 523,  0,
    0,    0,    0,    0,    477,  1322, 1194, 0,    0,    0,    0,    993,  0,    0,    0,    0,
    0,    0,    0,    56,   0,    1165, 0,    294,  0,    0,    0,    901,  0,    0,    0,    0,
    2057, 0,    0,    125,  0,    0,    0,    0,    0,    0,    0,    0,    0,    1809, 0,    0,
    0,    118,  236,  1269, 0,    0,    1933, 0,    123,  0,    0,    0,    1266, 2037, 0,    1807,
    0,    2748, 0,    0,    609,  0,    0,    0,    0,    0,    0,    0,    659,  0,    0,    0,
    0,    0,    0,    0,    216,  0,    0,    0,    388,  0,    0,    2231, 0,    461,  0,    0,
    0,    0,    0,    0,    0,    0,    2944, 0,    1250, 0,    2904, 0,    0,    0,    331,  508,
    0,    1496, 0,    0,    1621, 0,    0,    0,    0,    961,  0,    0,    783,  2515, 1474, 2001,
    0,    0,    57,   0,    1084, 0,    0,    0,    0,    0,    0,    0,    0,    0,    2685, 0,
    0,    113,  0,    0,    0,    2626, 0,    1318, 0,    491,  96,   0,    0,    0,    0,    2323,
    0,    0,    0,    0,    2266, 1217, 0,    0,    0,    34,   0,    719,  0,    0,    2426, 0,
    1270, 0,    0,    2730, 2483, 2269, 247,  746,  27,   0,    0,    0,    1110, 0,    0,    2069,
    490,  0,    0,    0,    0,    0,    0,    0,    2245, 1178, 0,    0,    0,    0,    0,    0,
    2386, 2805, 86,   0,    0,    1572, 410,  823,  0,    0,    962,  0,    0,    0,    888,  2881,
    0,    1140, 0,    0,    0,    0,    0,    0,    0,    0,    1203, 174,  0,    0,    0,    0,
    612,  0,    0,    0,    195,  0,    0,    475,  0,    0,    0,    0,    0,    2402, 2484, 0,
    0,    0,    0,    0,    0,    0,    393,  2711, 0,    0,    0,    657,  0,    0,    0,    0,
    684,  0,    0,    0,    0,    0,    0,    160,  0,    0,    0,    1753, 0,    385,  0,    0,
    361,  1626, 0,    0,    2301, 0,    1717, 0,    0,    0,    0,    1195, 626,  0,    0,    520,
    3006, 0,    0,    1216, 0,    321,  351,  23,   0,    0,    0,    0,    0,    1007, 0,    0,
    2874, 2764, 0,    0,    0,    758,  16,   0,    0,    0,    1500, 0,    0,    0,    0,    0,
    0,    0,    584,  1919, 2200, 550,  0,    2583, 630,  0,    0,    0,    0,    2027, 0,    2682,
    0,    1186, 469,  0,    0,    0,    0,    2304, 713,  0,    0,    0,    0,    0,    0,    430,
    0,    2752, 1644, 1539, 640,  513,  0,    0,    1592, 0,    2933, 104,  687,  2303, 703,  0,
    1415, 0,    0,    154,  914,  669,  0,    886,  1744, 0,    537,  1147, 0,    859,  0,    0,
    0,    0,    0,    0,    1151, 541,  0,    2918, 760,  1829, 1275, 1291, 0,    0,    0,    0,
    2118, 0,    2486, 0,    0,    206,  186,  0,    0,    0,    0,    2178, 0,    0,    0,    2020,
    0,    0,    0,    0,    2078, 0,    1860, 0,    1374, 0,    2975, 1552, 2133, 1602, 1398, 0,
    0,    0,    699,  0,    2783, 0,    0,    803,  0,    211,  664,  0,    0,    216,  0,    0,
    0,    0,    378,  0,    0,    1110, 0,    1345, 2991, 0,    0,    599,  0,    866,  803,  438,
    0,    326,  432,  0,    0,    265,  0,    0,    0,    1448, 0,    1814, 0,    1088, 474,  0,
    3052, 0,    1960, 0,    1240, 0,    0,    314,  1324, 0,    0,    1359, 390,  356,  0,    2153,
    183,  2987, 0,    218,  2022, 0,    0,    0,    1574, 787,  0,    0,    0,    0,    0,    503,
    983,  612,  0,    0,    422,  33,   2749, 959,  2692, 0,    0,    0,    1421, 0,    2784, 52,
    2147, 0,    457,  0,    467,  0,    368,  512,  2458, 0,    0,    1639, 0,    0,    0,    2576,
    0,    0,    525,  0,    0,    0,    2957, 0,    0,    1247, 2801, 11,   2678, 0,    0,    0,
    1549, 0,    0,    2462, 428,  0,    0,    1184, 2278, 0,    444,  0,    0,    0,    3041, 717,
    0,    2122, 1853, 1564, 0,    0,    0,    2355, 2702, 71,   0,    398,  1150, 1835, 114,  0,
    2663, 2881, 2231, 0,    844,  0,    413,  0,    0,    0,    0,    0,    0,    0,    1134, 1001,
    0,    0,    0,    0,    0,    0,    0,    1056, 2826, 732,  1221, 1208, 0,    2605, 0,    0,
    130,  0,    1691, 736,  0,    1935, 1878, 2187, 0,    1927, 0,    0,    276,  0,    2750, 272,
    0,    0,    2696, 0,    23,   0,    0,    643,  0,    2886, 0,    1820, 0,    509,  588,  0,
    1549, 670,  0,    0,    1559, 699,  0,    2431, 0,    1675, 731,  0,    0,    0,    2860, 0,
    0,    0,    0,    0,    2987, 2264, 1359, 0,    0,    78,   0,    0,    0,    469,  639,  2634,
    3050, 0,    259,  802,  592,  1413, 313,  0,    0,    0,    0,    1146, 0,    0,    432,  183,
    0,    2119, 0,    0,    244,  2253, 2172, 1417, 0,    0,    1745, 0,    92,   0,    0,    130,
    1273, 1330, 0,    1678, 0,    0,    449,  2320, 2011, 0,    2830, 0,    2076, 2234, 0,    0,
    0,    50,   387,  0,    1099, 0,    1188, 0,    0,    0,    0,    130,  0,    716,  187,  0,
    2769, 187,  395,  0,    0,    925,  1280, 0,    0,    906,  0,    615,  1267, 0,    1026, 0,
    0,    0,    0,    0,    0,    2063, 2206, 899,  0,    1618, 0,    316,  0,    1088, 0,    2899,
    2937, 0,    264,  0,    0,    1508, 116,  0,    2426, 0,    99,   0,    0,    2013, 2075, 0,
    0,    2149, 1755, 1427, 191,  1262, 246,  0,    645,  865,  0,    1586, 1436, 2555, 0,    2405,
    559,  652,  140,  0,    351,  0,    0,    2923, 251,  840,  0,    875,  89,   0,    1961, 850,
    0,    0,    0,    0,    2872, 234,  0,    1674, 2171, 0,    0,    1292, 2186, 947,  118,  0,
    1004, 0,    302,  1313, 0,    809,  2557, 1034, 2674, 2630, 0,    861,  0,    2111, 543,  2748,
    2403, 2529, 848,  0,    285,  0,    961,  0,    510,  902,  235,  0,    0,    0,    1479, 0,
    2994, 2236, 2363, 362,  0,    965,  0,    0,    0,    2298, 490,  459,  0,    2889, 0,    0,
    0,    0,    1809, 0,    0,    1333, 0,    1778, 255,  0,    0,    449,  0,    1497, 0,    1543,
    953,  1029, 0,    1408, 0,    2330, 0,    0,    0,    0,    1986, 0,    0,    884,  2692, 2514,
    2832, 0,    2619, 613,  0,    1136, 0,    0,    1061, 1493, 1677, 0,    0,    0,    161,  32,
    0,    3021, 638,  1384, 0,    0,    976,  1426, 0,    0,    502,  1462, 0,    2197, 0,    0,
    1117, 0,    0,    2753, 2069, 0,    2715, 2308, 2008, 0,    474,  54,   27,   1195, 583,  2325,
    231,  0,    0,    1978, 0,    0,    1716, 2344, 1264, 0,    218,  0,    2932, 2885, 0,    389,
    2814, 0,    778,  1885, 1625, 0,    0,    0,    0,    2393, 0,    0,    0,    2547, 1033, 0,
    1057, 0,    0,    0,    452,  1524, 871,  0,    1251, 0,    0,    137,  0,    2868, 2373, 319,
    519,  0,    0,    1090, 0,    1037, 1593, 1206, 2368, 0,    1855, 2580, 0,    0,    0,    0,
    955,  0,    2217, 1762, 0,    0,    1585, 0,    0,    0,    2138, 0,    0,    823,  1381, 0,
    13,   0,    0,    0,    0,    0,    0,    720,  2696, 1882, 0,    0,    2039, 0,    1957, 0,
    336,  0,    0,    2768, 0,    0,    1015, 2066, 1349, 0,    728,  0,    2780, 0,    915,  0,
    0,    1143, 2496, 2031, 577,  0,    1683, 235,  2977, 0,    903,  0,    0,    0,    0,    0,
    2974, 1870, 1407, 240,  0,    2779, 1919, 0,    2016, 0,    0,    546,  362,  0,    2764, 74,
    0,    2634, 631,  2883, 1167, 0,    0,    0,    2523, 1067, 0,    0,    173,  2454, 0,    314,
    3008, 0,    39,   1311, 235,  1140, 2200, 0,    1695, 0,    0,    101,  0,    0,    0,    0,
    0,    836,  0,    179,  2315, 0,    589,  2691, 3011, 968,  1223, 1290, 0,    695,  0,    161,
    1927, 505,  186,  1048, 0,    2586, 0,    2028, 2249, 0,    0,    0,    0,    0,    2354, 1287,
    0,    0,    0,    2392, 800,  187,  0,    308,  0,    0,    0,    1851, 312,  0,    0,    1544,
    260,  0,    0,    697,  25,   0,    1986, 392,  0,    0,    0,    833,  2599, 0,    2258, 0,
    2903, 0,    2232, 708,  0,    665,  0,    2702, 1143, 0,    515,  1294, 0,    0,    61,   0,
    1012, 1102, 1173, 1316, 141,  1695, 0,    799,  0,    0,    0,    0,    3018, 515,  1954, 0,
    1231, 1583, 484,  0,    0,    0,    2992, 2818, 0,    0,    1491, 1279, 1016, 2595, 2609, 0,
    2261, 0,    0,    0,    1956, 0,    0,    0,    65,   0,    687,  2198, 0,    0,    0,    875,
    0,    1499, 2608, 0,    0,    0,    0,    272,  976,  0,    317,  0,    0,    2653, 2426, 1592,
    2787, 2911, 0,    0,    1465, 0,    0,    1231, 979,  0,    1323, 0,    2387, 2499, 469,  1355,
    0,    1035, 0,    305,  0,    0,    0,    1778, 1109, 0,    1200, 78,   1724, 2839, 598,  0,
    198,  0,    1571, 0,    0,    0,    1504, 693,  0,    524,  0,    2192, 0,    2548, 0,    2171,
    0,    2087, 1093, 1507, 36,   442,  2872, 793,  68,   0,    0,    1240, 0,    0,    1190, 674,
    1163, 0,    2152, 0,    0,    0,    1615, 2281, 1616, 2555, 31,   0,    0,    0,    306,  0,
    738,  0,    1408, 0,    0,    2662, 0,    0,    751,  0,    0,    3000, 551,  2524, 0,    387,
    2578, 0,    0,    0,    374,  84,   2116, 0,    1203, 0,    168,  617,  678,  612,  0,    705,
    924,  825,  2828, 2532, 357,  2259, 0,    1540, 0,    0,    268,  0,    301,  1886, 0,    0,
    2049, 444,  0,    749,  0,    0,    0,    281,  0,    0,    1103, 2860, 2910, 0,    0,    0,
    2579, 28,   468,  2572, 1248, 0,    714,  0,    2957, 966,  2026, 0,    2312, 1009, 2841, 52,
    2355, 0,    0,    2089, 2087, 0,    0,    1632, 2103, 0,    530,  0,    0,    0,    0,    448,
    290,  1197, 467,  2878, 0,    0,    0,    731,  0,    0,    0,    0,    1942, 923,  1034, 287,
    1272, 981,  2939, 0,    0,    2649, 0,    0,    925,  0,    1095, 0,    0,    0,    1093, 0,
    0,    0,    0,    0,    851,  2667, 0,    2179, 497,  0,    0,    0,    1612, 723,  0,    0,
    2842, 948,  1858, 91,   882,  0,    398,  0,    1072, 1165, 0,    1576, 1728, 2193, 1498, 0,
    818,  0,    0,    2898, 730,  0,    644,  2832, 0,    2371, 0,    2114, 0,    15,   250,  2777,
    1993, 0,    0,    0,    1588, 1704, 3000, 0,    0,    901,  1945, 809,  0,    1537, 1064, 0,
    2106, 649,  2864, 751,  376,  1529, 319,  1878, 0,    2448, 1348, 0,    46,   821,  681,  533,
    0,    0,    588,  92,   0,    1553, 0,    1150, 0,    0,    1324, 0,    0,    431,  0,    495,
    0,    803,  0,    68,   0,    463,  746,  0,    0,    0,    178,  1976, 1171, 1550, 2790, 0,
    0,    0,    1513, 25,   0,    0,    571,  0,    1263, 1861, 262,  0,    0,    1737, 0,    2758,
    0,    0,    518,  224,  158,  171,  1672, 0,    516,  553,  1229, 1388, 0,    0,    0,    2427,
    127,  0,    1347, 553,  423,  2851, 0,    2755, 0,    347,  0,    0,    0,    0,    0,    0,
    0,    614,  1039, 2960, 526,  0,    2211, 913,  785,  2336, 0,    303,  3017, 0,    0,    1820,
    0,    1003, 0,    0,    0,    2142, 0,    0,    310,  1216, 0,    2346, 1893, 1427, 2546, 0,
    1095, 2210, 1882, 2899, 2069, 722,  474,  2010, 2298, 0,    0,    496,  0,    0,    0,    873,
    426,  2698, 0,    2628, 0,    1732, 1731, 15,   0,    1274, 279,  0,    0,    479,  0,    0,
    1087, 0,    0,    2826, 0,    2712, 1354, 0,    640,  2719, 0,    1641, 42,   2395, 0,    2690,
    2161, 0,    0,    0,    938,  0,    0,    925,  570,  2489, 0,    0,    1341, 33,   0,    0,
    432,  295,  1217, 1623, 2221, 0,    0,    1665, 1236, 2110, 1183, 2644, 0,    1309, 2416, 729,
    0,    1141, 908,  770,  0,    0,    1607, 693,  492,  62,   0,    1489, 0,    1243, 1001, 3001,
    0,    0,    0,    2514, 0,    0,    2011, 0,    1060, 1418, 0,    785,  2191, 0,    1566, 0,
    1128, 160,  241,  0,    1066, 1898, 312,  0,    1332, 0,    2100, 0,    1603, 1120, 1052, 1869,
    0,    2944, 0,    2474, 0,    483,  0,    1596, 2255, 0,    2349, 2821, 719,  0,    248,  417,
    0,    571,  0,    220,  0,    0,    3004, 0,    200,  0,    2568, 24,   1197, 76,   0,    529,
    453,  2330, 2500, 0,    1527, 1282, 631,  450,  1507, 515,  0,    0,    682,  387,  568,  576,
    549,  0,    0,    687,  0,    0,    370,  2987, 0,    0,    1180, 622,  203,  0,    267,  0,
    381,  0,    515,  670,  40,   581,  335,  789,  2257, 0,    780,  0,    2326, 664,  2972, 138,
    2489, 0,    1349, 347,  503,  0,    0,    208,  2159, 0,    0,    1493, 517,  0,    0,    0,
    0,    0,    1370, 1795, 2017, 2390, 1522, 2492, 0,    1133, 2233, 0,    0,    0,    0,    0,
    1012, 149,  2696, 2988, 585,  0,    1857, 1863, 2621, 0,    0,    906,  0,    0,    1537, 2721,
    2185, 0,    2264, 57,   0,    0,    959,  411,  252,  377,  1132, 1484, 0,    0,    0,    213,
    1707, 454,  1444, 0,    0,    937,  0,    0,    1760, 0,    908,  1442, 2069, 0,    810,  0,
    2908, 0,    1582, 0,    2092, 216,  0,    1115, 620,  0,    293,  1202, 145,  683,  951,  0,
    862,  0,    0,    0,    1409, 928,  1353, 374,  0,    343,  91,   0,    0,    0,    0,    502,
    1694, 2,    161,  496,  0,    114,  1554, 972,  0,    0,    989,  1296, 508,  144,  824,  1210,
    1133, 0,    0,    787,  0,    0,    795,  2132, 0,    0,    1602, 333,  0,    2297, 2939, 609,
    1355, 443,  85,   784,  679,  889,  866,  1433, 2624, 0,    0,    0,    0,    0,    0,    2387,
    532,  0,    0,    1527, 0,    631,  0,    0,    607,  0,    1271, 263,  795,  619,  0,    1652,
    0,    875,  0,    1340, 1486, 318,  1288, 2278, 852,  538,  1201, 0,    388,  881,  0,    1374,
    667,  0,    0,    2518, 1781, 0,    1289, 3040, 768,  0,    2999, 173,  1575, 1149, 0,    389,
    840,  12,   0,    335,  1774, 1469, 1025, 0,    1063, 547,  1372, 1927, 320,  660,  1342, 1983,
    376,  2495, 1572, 0,    1243, 0,    2931, 2588, 1205, 725,  0,    1196, 80,   1511, 0,    0,
    217,  0,    1070, 0,    1112, 0,    0,    621,  1748, 2599, 0,    0,    204,  1856, 1599, 0,
    0,    2266, 0,    1624, 2162, 0,    0,    757,  1254, 2714, 2575, 951,  0,    0,    404,  1572,
    1502, 0,    1425, 2244, 1553, 292,  730,  54,   0,    0,    622,  3012, 554,  0,    1790, 25,
    3022, 0,    2862, 0,    1632, 409,  0,    630,  675,  307,  1589, 2191, 0,    715,  1377, 0,
    62,   0,    859,  99,   1418, 0,    1245, 472,  2767, 1518, 0,    0,    0,    0,    646,  0,
    0,    664,  2543, 762,  2268, 0,    0,    514,  1066, 0,    1225, 0,    0,    1238, 0,    1814,
    2873, 2985, 647,  803,  2962, 1198, 0,    0,    724,  1579, 2570, 2211, 0,    867,  1759, 1009,
    472,  607,  10,   1506, 0,    0,    2535, 2,    773,  1561, 3035, 0,    451,  1318, 600,  1697,
    1084, 334,  446,  311,  0,    2760, 1385, 962,  0,    1846, 0,    0,    0,    0,    0,    478,
    325,  0,    2538, 675,  130,  0,    60,   1463, 0,    2306, 616,  0,    0,    1156, 43,   2497,
    0,    0,    1261, 0,    2885, 1154, 308,  123,  1159, 1232, 67,   0,    2881, 2869, 470,  0,
    786,  0,    817,  0,    0,    0,    0,    935,  0,    843,  0,    0,    474,  2495, 2100, 1430,
    261,  2582, 3053, 1174, 0,    394,  0,    0,    0,    2085, 0,    0,    0,    0,    2958, 0,
    0,    332,  1299, 372,  1371, 2956, 939,  1701, 0,    929,  2899, 1055, 1561, 683,  1532, 0,
    451,  869,  0,    2618, 0,    1477, 2869, 0,    0,    598,  934,  1696, 2696, 1012, 2089, 0,
    850,  2627, 0,    0,    1604, 183,  0,    0,    447,  0,    1584, 0,    355,  2695, 1598, 66,
    2586, 2365, 1187, 0,    562,  2576, 864,  547,  655,  0,    0,    1521, 182,  1832, 1283, 95,
    933,  270,  0,    2662, 0,    2598, 0,    0,    798,  0,    0,    0,    0,    0,    0,    1015,
    2669, 0,    576,  742,  0,    0,    1503, 301,  1255, 2523, 0,    381,  0,    1550, 0,    399,
    1166, 2011, 0,    1268, 2788, 0,    0,    0,    402,  0,    1040, 0,    703,  0,    0,    2636,
    0,    0,    1443, 854,  811,  1068, 963,  58,   978,  0,    344,  1565, 0,    0,    2654, 0,
    0,    540,  0,    514,  640,  0,    1298, 338,  0,    2945, 0,    1192, 0,    0,    1788, 0,
    2004, 0,    2857, 1088, 588,  863,  2021, 0,    389,  805,  0,    1274, 624,  475,  0,    541,
    1226, 0,    0,    722,  915,  0,    0,    1794, 2724, 3037, 1218, 0,    0,    2047, 830,  1558,
    1192, 229,  243,  2452, 1353, 2813, 1407, 1891, 602,  0,    0,    895,  849,  0,    0,    3029,
    29,   0,    1393, 0,    834,  0,    1158, 528,  1860, 266,  2860, 1374, 358,  1822, 0,    2664,
    1076, 3053, 0,    1052, 21,   2114, 3011, 2630, 0,    0,    211,  838,  1014, 0,    0,    0,
    0,    0,    0,    0,    0,    606,  2016, 391,  0,    127,  6,    391,  2226, 1119, 3052, 66,
    2709, 2563, 209,  0,    1131, 2681, 1545, 2003, 1491, 292,  2833, 0,    0,    0,    0,    2876,
    0,    768,  630,  1755, 483,  2017, 0,    1035, 1365, 0,    0,    396,  1313, 0,    2026, 0,
    3042, 0,    0,    1471, 651,  1372, 76,   208,  1173, 558,  2560, 391,  2001, 2571, 0,    0,
    0,    639,  0,    0,    494,  1497, 17,   141,  0,    119,  647,  955,  377,  2305, 365,  0,
    1380, 0,    313,  2898, 2369, 319,  150,  643,  0,    0,    772,  856,  1313, 0,    0,    0,
    0,    218,  0,    2296, 0,    765,  0,    2233, 1556, 683,  0,    1009, 382,  364,  15,   0,
    209,  1347, 2109, 1404, 120,  371,  77,   0,    192,  163,  811,  316,  0,    0,    558,  0,
    1487, 1092, 0,    1600, 1224, 0,    278,  0,    2629, 0,    682,  1121, 2856, 1298, 327,  0,
    397,  1447, 1083, 0,    0,    1012, 2232, 0,    921,  2397, 0,    1495, 428,  323,  0,    189,
    453,  2986, 837,  0,    0,    0,    247,  0,    2881, 999,  610,  0,    0,    1319, 0,    606,
    0,    1569, 163,  1039, 1919, 2256, 0,    2400, 2371, 421,  1127, 1236, 98,   644,  1242, 1730,
    1581, 0,    168,  0,    516,  0,    543,  314,  1038, 286,  0,    1145, 2148, 0,    481,  2531,
    842,  0,    0,    0,    3,    0,    1338, 517,  1276, 2788, 707,  1211, 1580, 1842, 1054, 0,
    0,    2663, 0,    0,    454,  324,  0,    0,    0,    1452, 0,    0,    1386, 1118, 969,  569,
    1990, 2874, 0,    831,  0,    0,    633,  1480, 0,    2163, 778,  389,  1709, 9,    0,    363};

int MangledHashG(const char *key, const int *T)
{
    int sum = 0;

    for (int i = 0; key[i] != '\0'; i++)
    {
        sum += T[i] * key[i];
        sum %= 3056;
    }
    return mangledkG[sum];
}

int MangledPerfectHash(const char *key)
{
    if (strlen(key) > 40)
        return 0;

    return (MangledHashG(key, mangledkT1) + MangledHashG(key, mangledkT2)) % 3056;
}

constexpr int unmangledkT1[] = {4,   292, 232, 232, 193, 181, 196, 165, 183, 130, 89,  218, 121,
                                218, 281, 292, 91,  82,  127, 12,  101, 68,  202, 208, 9,   296};
constexpr int unmangledkT2[] = {45,  96,  273, 31,  160, 43,  51,  33,  186, 19, 295, 90, 177,
                                130, 293, 293, 260, 112, 117, 282, 224, 179, 56, 272, 36, 261};
constexpr int unmangledkG[]  = {
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   78,  96,  41,  0,   0,   268,
    0,   0,   0,   24,  0,   0,   0,   45,  6,   55,  0,   0,   0,   0,   199, 30,  146, 209,
    0,   299, 0,   212, 0,   300, 106, 0,   40,  0,   0,   114, 0,   0,   5,   0,   0,   0,
    58,  241, 38,  0,   54,  68,  64,  90,  64,  0,   0,   0,   0,   0,   76,  0,   183, 303,
    0,   0,   0,   0,   51,  0,   0,   152, 0,   0,   92,  153, 0,   93,  0,   255, 125, 0,
    141, 171, 0,   87,  299, 86,  1,   0,   0,   87,  5,   0,   79,  0,   262, 0,   110, 0,
    32,  267, 0,   0,   100, 2,   0,   0,   0,   229, 248, 0,   77,  0,   0,   11,  215, 110,
    0,   0,   269, 22,  199, 0,   37,  0,   0,   0,   202, 126, 65,  9,   0,   97,  104, 0,
    0,   0,   0,   203, 0,   227, 84,  0,   25,  76,  0,   89,  0,   0,   9,   149, 0,   72,
    41,  0,   0,   0,   94,  0,   0,   0,   0,   59,  139, 10,  292, 102, 58,  0,   0,   280,
    14,  43,  105, 123, 33,  114, 223, 82,  142, 0,   175, 0,   4,   113, 67,  116, 0,   0,
    242, 0,   96,  0,   130, 245, 29,  66,  279, 0,   89,  0,   293, 4,   93,  0,   40,  62,
    0,   0,   49,  0,   294, 42,  277, 275, 0,   75,  0,   135, 299, 0,   217, 58,  47,  0,
    106, 0,   0,   0,   54,  0,   242, 0,   0,   0,   50,  80,  24,  40,  9,   0,   120, 276,
    0,   0,   0,   157, 0,   0,   0,   121, 167, 0,   84,  0,   22,  71,  0,   0,   292, 134,
    27,  0,   274, 0,   0,   0,   51,  0,   128, 0,   0,   276, 0,   0,   0,   86,  273, 143,
    0,   87,  242, 121, 185, 65,  252, 90,  188, 144, 104, 0,   94,  64,  1,   2,   21,  68};

int UnmangledHashG(const char *key, const int *T)
{
    int sum = 0;

    for (int i = 0; key[i] != '\0'; i++)
    {
        sum += T[i] * key[i];
        sum %= 306;
    }
    return unmangledkG[sum];
}

int UnmangledPerfectHash(const char *key)
{
    if (strlen(key) > 26)
        return 0;

    return (UnmangledHashG(key, unmangledkT1) + UnmangledHashG(key, unmangledkT2)) % 306;
}

}  // namespace

namespace sh
{

template <>
const size_t ImmutableString::FowlerNollVoHash<4>::kFnvPrime = 16777619u;

template <>
const size_t ImmutableString::FowlerNollVoHash<4>::kFnvOffsetBasis = 0x811c9dc5u;

template <>
const size_t ImmutableString::FowlerNollVoHash<8>::kFnvPrime =
    static_cast<size_t>(1099511628211ull);

template <>
const size_t ImmutableString::FowlerNollVoHash<8>::kFnvOffsetBasis =
    static_cast<size_t>(0xcbf29ce484222325ull);

uint32_t ImmutableString::mangledNameHash() const
{
    return MangledPerfectHash(data());
}

uint32_t ImmutableString::unmangledNameHash() const
{
    return UnmangledPerfectHash(data());
}

}  // namespace sh