#ifndef __FIXED_POINT_H
#define __FIXED_POINT_H

#define f (1<<14)

int INTtoFP(int n);
int FPtoINT(int x);
int FP_ROUND(int x);
int ADD_FP(int x, int y);
int ADD_FP_INT(int x, int n);
int SUB_FP(int x, int y);
int SUB_FP_INT(int x, int n);
int MUL_FP(int x, int y);
int MUL_FP_INT(int x, int n);
int DIV_FP(int x, int y);
int DIV_FP_INT(int x, int n);

int INTtoFP(int n) { return n*f; }
int FPtoINT(int x) { return x/f; }
int FP_ROUND(int x)
{
	if(x>=0)
		return (x+f/2)/f;
	else
		return (x-f/2)/f;
}
int ADD_FP(int x, int y) { return x + y; }
int ADD_FP_INT(int x, int n) { return x + n*f; }
int SUB_FP(int x, int y) { return x - y; } 
int SUB_FP_INT(int x, int n) { return x - n*f; }
int MUL_FP(int x, int y) { return ((int64_t)x)*y/f; }
int MUL_FP_INT(int x, int n) { return x*n; }
int DIV_FP(int x, int y) { return ((int64_t)x)*f/y; }
int DIV_FP_INT(int x, int n) { return x/n; }


#endif
