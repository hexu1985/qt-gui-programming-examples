export CPPLIBS="../../libs"
qmake
make
cp ${CPPLIBS}/docbook/docbook.dll ./debug
