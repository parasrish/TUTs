#Cleanup of object, so's etc. here
rm *.o *.so *.out
echo ****CLEANUP DONE !****

#first lib done
gcc -fpic -c ll_add.c -l .
gcc -shared -o liblladd.so ll_add.o
echo ****FIRST SO CREATED HERE****

# second lib done
gcc -fpic -c add.c -llladd
gcc -shared -o libadd.so add.o
echo ****SECOND SO CREATED HERE****

#executable created here
gcc -o add-demo add-demo.c -ladd -llladd -L .
echo ****EXECUTABLE CREATED HERE****
