export CPPLIBS=.
qmake
make
make install
cp debug/* .
