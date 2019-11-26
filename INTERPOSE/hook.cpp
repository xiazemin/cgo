#include "hook.h"
void on_accept(pid_t threadID,int serverSocketFD,int clientSocketFD,sockaddr_in* addr) {
   printf("accept pid %d    sockfd %d    clientfd  %d  ",threadID,serverSocketFD,clientSocketFD);
}
void on_accept6(pid_t threadID,int serverSocketFD,int clientSocketFD,sockaddr_in* addr) {
   printf("accept6 pid %d    sockfd %d    clientfd  %d  ",threadID,serverSocketFD,clientSocketFD);
}

 void on_connect(pid_t threadID,int serverSocketFD,sockaddr_in* addr) {
    printf("on_connect pid %d    sockfd %d  ",threadID,serverSocketFD);
 }

 void  on_sendto(thread_id, socketFD, span, flags, addr_in);

 void send_to_koala(thread_id, span, flags);
 void recv_from_koala(thread_id, span);
 void   span = on_recv(thread_id, socketFD, span, flags);
void  on_recv(thread_id, socketFD, span, flags);
void  on_send(thread_id, socketFD, span, flags, 0);
 struct ch_allocated_string extra_header = before_send(thread_id, socketFD, flags, &size);
 void on_bind(thread_id, socketFD, typed_addr);