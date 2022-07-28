export CPPLIBS="../../libs"
qmake
make
cp ${CPPLIBS}/dataobjects/*.dll ./debug
