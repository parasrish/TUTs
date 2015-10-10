rm MQsender MQreceiver
echo "**cleaned !!**"

gcc -o MQsender IPC_msgq_send.c
echo "**rebuild-MQsender-done !**"

gcc -o MQreceiver IPC_msgq_rcv.c
echo "**rebuild-MQreceive-done !**"
