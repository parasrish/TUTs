rm mutex_main
echo "**cleaned !!**"

gcc -o mutex_main mutex_main.c -lpthread
echo "**rebuild-done !**"
