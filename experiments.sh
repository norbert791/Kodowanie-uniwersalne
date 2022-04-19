flag=$1

dir="testFiles/*"
result="default"

case $flag in
        "-g")
            result="gamma.txt"
            ;;
        "-d")
            result="delta.txt"
            ;;
        "-o")
            result="omega.txt"
            ;;
        "-f")
            result="fibonacci.txt"
            ;;
esac

target="wyniki/$result"

echo "" > $target

for file in $dir
do
    EncodingClasses/encoder "$file" "dump.txt" "$flag" >> $target
    echo -e "\n" >> $target
done

rm "dump.txt"

