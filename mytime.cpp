#include <iostream>       
#include <sys/time.h>
int getCurrentTime()
{           
		struct timeval tv;           
		gettimeofday(&tv,NULL);        
		return tv.tv_sec * 1000 + tv.tv_usec / 1000;        
}

int main()        
{
		std::cout<<"start_time:\t" << getCurrentTime()<<"\n";
		sleep(1);
		std::cout<<"end_time:\t" << getCurrentTime()<<"\n";    
		return 0;        
} 
