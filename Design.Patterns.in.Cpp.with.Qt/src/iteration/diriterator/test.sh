
for file in a b c
do
    touch ./debug/${file}.mp3
done

./debug/diriterator.exe ./debug
