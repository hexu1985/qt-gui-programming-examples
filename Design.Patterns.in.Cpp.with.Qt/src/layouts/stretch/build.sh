export CPPLIBS="../../libs"
qmake
make
cp ${CPPLIBS}/cards2/*.dll ./debug
