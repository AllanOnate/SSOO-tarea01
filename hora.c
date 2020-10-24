#include<stdio.h>
#include<unistd.h> 
#include<time.h>
#include<signal.h>

 
void sig_handler(int senales)
{
time_t rawtime;
time (&rawtime);
        printf("Hora actual es: %s", ctime (&rawtime));
  if (senales == SIGUSR1) {
    printf("Listo para recibir la señal SIGUSR1.\n");
  }
 
}


int main(int argc, char* argv[])
{		
	fork();
	
	printf("Programa hora ejecutandose. PID=%d\n", getpid());
	signal(SIGUSR1,senales);

}
