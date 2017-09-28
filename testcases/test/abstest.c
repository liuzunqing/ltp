#include<stdlib.h>
#include<errno.h>
#include"tst_test.h"

static void verify_abs(void)
{
	TEST(abs(-1));
	if(TEST_RETURN == 1)
		tst_res(TPASS,"abs(-1)=1");
	else
		tst_res(TFAIL,"abs(-1)!=1");
}

static struct tst_test test={
	.test_all = verify_abs,
};
