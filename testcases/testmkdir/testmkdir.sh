#!/bin/sh

TST_TESTFUNC=test_mkdir
. tst_test.sh
test_mkdir()
{
	name=testmkdir
	mkdir $name
	if [ -d $name ];then
		tst_res TPASS "create $name succeed!"
	else
		tst_res TFAIL "create $name failed!"
	fi
}
tst_run
