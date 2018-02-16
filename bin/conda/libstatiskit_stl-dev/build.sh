set -ve

echo $SRC_DIR
scons autowig --prefix=$PREFIX -j$CPU_COUNT --autowig-no-wrappers

set +ve