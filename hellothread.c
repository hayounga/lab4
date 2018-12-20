#include <pthread.h>
#include <stdio.h>
 
void *hello_thread (void *arg){
 printf("Thread : Hello\n");
 return arg;
}

int main(){
 pthread_t tid;
 int status;

 //create thread
 status = pthread_create (&tid, NULL, hello_thread,NULL);
 if(status !=0)
	perror("Create thread");
 pthread_exit(NULL);
}
