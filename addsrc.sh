#########################################################################
# File Name: addsrc.sh
# Author: mudongliang
# mail: mudongliangabcd@163.com
# Created Time: Tue 10 Mar 2015 03:15:26 PM CST
#########################################################################

#!/bin/bash
if [ $# -eq 1 ];then
	sed -i "1s/$/ $1/g " Makefile
	make all;
else
	echo "useage : ./addsrc.sh srcname !"
fi
