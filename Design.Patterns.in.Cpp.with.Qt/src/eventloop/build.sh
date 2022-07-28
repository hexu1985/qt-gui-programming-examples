export CPPLIBS="../libs"
qmake
make
cp ${CPPLIBS}/objectbrowser/*.dll ./debug
