#!/bin/bash

PHP_BINARY="php"

while getopts "p:" OPTION 2> /dev/null; do
	case ${OPTION} in
		p)
			PHP_BINARY="$OPTARG"
			;;
	esac
done

git clone --recurse-submodules -j8 https://github.com/pmmp/PocketMine-MP.git
cd PocketMine-MP

composer install

./tests/travis.sh
