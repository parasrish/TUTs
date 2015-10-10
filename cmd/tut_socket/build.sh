rm master slave 
echo "**cleaned !!**"

gcc -o master master_main.c
echo "**rebuild-master-done !**"

gcc -o slave slave_main.c
echo "**rebuild-slave-done !**"
