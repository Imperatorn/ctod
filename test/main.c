#include <assert.h>
#include <string.h>
#include <stdio.h>

#include "../include/glfw.h"

#define TEST
#define PI 3.14159265
#define SQR(x) (x*x)

#ifdef TEST
// whoo
#else
// whoo
#endif

#if 0
// whoo
#elif defined(TEST)
// whoo
#endif

#if defined(_WIN32)
	#define CUTE_TIME_PLATFORM CUTE_TIME_WINDOWS
#elif defined(__APPLE__)
	#define CUTE_TIME_PLATFORM CUTE_TIME_MAC
#else
	#define CUTE_TIME_PLATFORM CUTE_TIME_UNIX
#endif

struct S {
	int in;
	int out;
};

typedef struct S S;

typedef struct T {
	S *ptr;
} T;

unsigned int x0;
long x1;
unsigned long x2;
long long x3;
unsigned long long x4;
unsigned long x5;
float x6;
double x7;
long double x8;
struct S x9;
S xA;

const char *p0;
char const *p1;
char *const p2;

int a0[1];
int *a1[2];
int (*a2)[3];
int a3[4][5];
int *a4[6][7];
int *(*a5)[8][9];
int **a6[8][9];

void (*f)(int x, float);
void (*f[4])(void)[5];

extern inline int e0;

static float x[8] = {0.5, 2.5};
double z[4][3];

int main(void) {
	static register int xx;
	static int x = (int) 3.5;
	int a[2];
	foo(a, main);
	return 0;
}

void foo(int x[], int (*y)(void)) {
	int *z, y;
}
