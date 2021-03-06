/*
 * Copyright 2017 National University of Singapore
 *
 */
#include <stdio.h>
#include <klee/klee.h>

int main() {

    char b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51,b52,b53,b54,b55,b56,b57,b58,b59,b60,b61,b62,b63,b64,b65,b66,b67,b68,b69,b70,b71,b72,b73,b74,b75,b76,b77,b78,b79,b80,b81,b82,b83,b84,b85,b86,b87,b88,b89,b90,b91,b92,b93,b94,b95,b96,b97,b98,b99;

    int x = 0;
    int y = 0,z=0, w=1;

    klee_make_symbolic(&b0, sizeof(char), "b0");
    klee_make_symbolic(&b1, sizeof(char), "b1");
    klee_make_symbolic(&b2, sizeof(char), "b2");
    klee_make_symbolic(&b3, sizeof(char), "b3");
    klee_make_symbolic(&b4, sizeof(char), "b4");
    klee_make_symbolic(&b5, sizeof(char), "b5");
    klee_make_symbolic(&b6, sizeof(char), "b6");
    klee_make_symbolic(&b7, sizeof(char), "b7");
    klee_make_symbolic(&b8, sizeof(char), "b8");
    klee_make_symbolic(&b9, sizeof(char), "b9");
    klee_make_symbolic(&b10, sizeof(char), "b10");
    klee_make_symbolic(&b11, sizeof(char), "b11");
    klee_make_symbolic(&b12, sizeof(char), "b12");
    klee_make_symbolic(&b13, sizeof(char), "b13");
    klee_make_symbolic(&b14, sizeof(char), "b14");
    klee_make_symbolic(&b15, sizeof(char), "b15");
    klee_make_symbolic(&b16, sizeof(char), "b16");
    klee_make_symbolic(&b17, sizeof(char), "b17");
    klee_make_symbolic(&b18, sizeof(char), "b18");
    klee_make_symbolic(&b19, sizeof(char), "b19");
    klee_make_symbolic(&b20, sizeof(char), "b20");
    klee_make_symbolic(&b21, sizeof(char), "b21");
    klee_make_symbolic(&b22, sizeof(char), "b22");
    klee_make_symbolic(&b23, sizeof(char), "b23");
    klee_make_symbolic(&b24, sizeof(char), "b24");
    klee_make_symbolic(&b25, sizeof(char), "b25");
    klee_make_symbolic(&b26, sizeof(char), "b26");
    klee_make_symbolic(&b27, sizeof(char), "b27");
    klee_make_symbolic(&b28, sizeof(char), "b28");
    klee_make_symbolic(&b29, sizeof(char), "b29");
    klee_make_symbolic(&b30, sizeof(char), "b30");
    klee_make_symbolic(&b31, sizeof(char), "b31");
    klee_make_symbolic(&b32, sizeof(char), "b32");
    klee_make_symbolic(&b33, sizeof(char), "b33");
    klee_make_symbolic(&b34, sizeof(char), "b34");
    klee_make_symbolic(&b35, sizeof(char), "b35");
    klee_make_symbolic(&b36, sizeof(char), "b36");
    klee_make_symbolic(&b37, sizeof(char), "b37");
    klee_make_symbolic(&b38, sizeof(char), "b38");
    klee_make_symbolic(&b39, sizeof(char), "b39");
    klee_make_symbolic(&b40, sizeof(char), "b40");
    klee_make_symbolic(&b41, sizeof(char), "b41");
    klee_make_symbolic(&b42, sizeof(char), "b42");
    klee_make_symbolic(&b43, sizeof(char), "b43");
    klee_make_symbolic(&b44, sizeof(char), "b44");
    klee_make_symbolic(&b45, sizeof(char), "b45");
    klee_make_symbolic(&b46, sizeof(char), "b46");
    klee_make_symbolic(&b47, sizeof(char), "b47");
    klee_make_symbolic(&b48, sizeof(char), "b48");
    klee_make_symbolic(&b49, sizeof(char), "b49");
    klee_make_symbolic(&b50, sizeof(char), "b50");
    klee_make_symbolic(&b51, sizeof(char), "b51");
    klee_make_symbolic(&b52, sizeof(char), "b52");
    klee_make_symbolic(&b53, sizeof(char), "b53");
    klee_make_symbolic(&b54, sizeof(char), "b54");
    klee_make_symbolic(&b55, sizeof(char), "b55");
    klee_make_symbolic(&b56, sizeof(char), "b56");
    klee_make_symbolic(&b57, sizeof(char), "b57");
    klee_make_symbolic(&b58, sizeof(char), "b58");
    klee_make_symbolic(&b59, sizeof(char), "b59");
    klee_make_symbolic(&b60, sizeof(char), "b60");
    klee_make_symbolic(&b61, sizeof(char), "b61");
    klee_make_symbolic(&b62, sizeof(char), "b62");
    klee_make_symbolic(&b63, sizeof(char), "b63");
    klee_make_symbolic(&b64, sizeof(char), "b64");
    klee_make_symbolic(&b65, sizeof(char), "b65");
    klee_make_symbolic(&b66, sizeof(char), "b66");
    klee_make_symbolic(&b67, sizeof(char), "b67");
    klee_make_symbolic(&b68, sizeof(char), "b68");
    klee_make_symbolic(&b69, sizeof(char), "b69");
    klee_make_symbolic(&b70, sizeof(char), "b70");
    klee_make_symbolic(&b71, sizeof(char), "b71");
    klee_make_symbolic(&b72, sizeof(char), "b72");
    klee_make_symbolic(&b73, sizeof(char), "b73");
    klee_make_symbolic(&b74, sizeof(char), "b74");
    klee_make_symbolic(&b75, sizeof(char), "b75");
    klee_make_symbolic(&b76, sizeof(char), "b76");
    klee_make_symbolic(&b77, sizeof(char), "b77");
    klee_make_symbolic(&b78, sizeof(char), "b78");
    klee_make_symbolic(&b79, sizeof(char), "b79");
    klee_make_symbolic(&b80, sizeof(char), "b80");
    klee_make_symbolic(&b81, sizeof(char), "b81");
    klee_make_symbolic(&b82, sizeof(char), "b82");
    klee_make_symbolic(&b83, sizeof(char), "b83");
    klee_make_symbolic(&b84, sizeof(char), "b84");
    klee_make_symbolic(&b85, sizeof(char), "b85");
    klee_make_symbolic(&b86, sizeof(char), "b86");
    klee_make_symbolic(&b87, sizeof(char), "b87");
    klee_make_symbolic(&b88, sizeof(char), "b88");
    klee_make_symbolic(&b89, sizeof(char), "b89");
    klee_make_symbolic(&b90, sizeof(char), "b90");
    klee_make_symbolic(&b91, sizeof(char), "b91");
    klee_make_symbolic(&b92, sizeof(char), "b92");
    klee_make_symbolic(&b93, sizeof(char), "b93");
    klee_make_symbolic(&b94, sizeof(char), "b94");
    klee_make_symbolic(&b95, sizeof(char), "b95");
    klee_make_symbolic(&b96, sizeof(char), "b96");
    klee_make_symbolic(&b97, sizeof(char), "b97");
    klee_make_symbolic(&b98, sizeof(char), "b98");
    klee_make_symbolic(&b99, sizeof(char), "b99");

    if (b2 > 0) x = x + 6; else x = x + 0;
    if (b3 > 0) x = x + 9; else x = x + 0;
    if (b4 > 0) x = x + 12; else x = x + 0;
    if (b5 > 0) x = x + 15; else x = x + 0;
    if (b6 > 0) x = x + 18; else x = x + 0;
    if (b7 > 0) x = x + 21; else x = x + 0;
    if (b8 > 0) x = x + 24; else x = x + 0;
    if (b9 > 0) x = x + 27; else x = x + 0;
    if (b10 > 0) x = x + 30; else x = x + 0;
    if (b11 > 0) x = x + 33; else x = x + 0;
    if (b12 > 0) x = x + 36; else x = x + 0;
    if (b13 > 0) x = x + 39; else x = x + 0;
    if (b14 > 0) x = x + 42; else x = x + 0;
    if (b15 > 0) x = x + 45; else x = x + 0;
    if (b16 > 0) x = x + 48; else x = x + 0;
    if (b17 > 0) x = x + 51; else x = x + 0;
    if (b18 > 0) x = x + 54; else x = x + 0;
    if (b19 > 0) x = x + 57; else x = x + 0;
    if (b20 > 0) x = x + 60; else x = x + 0;
    if (b21 > 0) x = x + 63; else x = x + 0;
    if (b22 > 0) x = x + 66; else x = x + 0;
    if (b23 > 0) x = x + 69; else x = x + 0;
    if (b24 > 0) x = x + 72; else x = x + 0;
    if (b25 > 0) x = x + 75; else x = x + 0;
    if (b26 > 0) x = x + 78; else x = x + 0;
    if (b27 > 0) x = x + 81; else x = x + 0;
    if (b28 > 0) x = x + 84; else x = x + 0;
    if (b29 > 0) x = x + 87; else x = x + 0;
    if (b30 > 0) x = x + 90; else x = x + 0;
    if (b31 > 0) x = x + 93; else x = x + 0;
    if (b32 > 0) x = x + 96; else x = x + 0;
    if (b33 > 0) x = x + 99; else x = x + 0;
    if (b34 > 0) x = x + 102; else x = x + 0;
    if (b35 > 0) x = x + 105; else x = x + 0;
    if (b36 > 0) x = x + 108; else x = x + 0;
    if (b37 > 0) x = x + 111; else x = x + 0;
    if (b38 > 0) x = x + 114; else x = x + 0;
    if (b39 > 0) x = x + 117; else x = x + 0;
    if (b40 > 0) x = x + 120; else x = x + 0;
    if (b41 > 0) x = x + 123; else x = x + 0;
    if (b42 > 0) x = x + 126; else x = x + 0;
    if (b43 > 0) x = x + 129; else x = x + 0;
    if (b44 > 0) x = x + 132; else x = x + 0;
    if (b45 > 0) x = x + 135; else x = x + 0;
    if (b46 > 0) x = x + 138; else x = x + 0;
    if (b47 > 0) x = x + 141; else x = x + 0;
    if (b48 > 0) x = x + 144; else x = x + 0;
    if (b49 > 0) x = x + 147; else x = x + 0;
    if (b50 > 0) x = x + 150; else x = x + 0;
    
    int BOUND = 4949;
    if (BOUND == x) {y++; z = z + 2; } else y--;
    if (x % 2 ==0 ) {w = w + 3; } else w = w + z;
    klee_assert( 2*y <= z && 3*y <= w);
    return 0;
}
