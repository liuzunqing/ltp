#include<math.h>
#include<errno.h>
#include<string.h>
#include"tst_test.h"


static void verify_sqrt(void)
{
	if(sqrt(4)==2)
		tst_res(TPASS,"sqrt(4)==2");
	else
		tst_res(TFAIL,"sqrt(4!=2");
}

static struct tst_test test={
	.test_all = verify_sqrt,
};
