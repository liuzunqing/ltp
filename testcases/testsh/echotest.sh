#!/bin/sh

TST_TESTFUNC=do_test
. tst_test.sh
do_test()
{
	a=$(echo "Hello")
	if [ $a="Hello" ]; then
		tst_res TPASS "$com succeed."
	else
		tst_res TFAIL "$com failed."
}

tst_run
