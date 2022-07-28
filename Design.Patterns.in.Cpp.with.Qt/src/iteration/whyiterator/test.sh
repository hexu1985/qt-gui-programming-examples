
for file in a b c
do
    mkdir -p ./debug/${file}
    touch ./debug/${file}/${file}.mp3
    touch ./debug/${file}.mp3
done

./debug/whyiterator.exe ./debug
