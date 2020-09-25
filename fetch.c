#include <stdio.h>
#include <sys/sysinfo.h>
#include <sys/utsname.h>
#include <stdlib.h>
int main(){
	/* initialise system info */
	struct sysinfo si; //used for uptime
	struct utsname ui; //used for hostname, system name and system release
	uname(&ui);
	sysinfo(&si);
   /* Print info + void logo (\033 is used for colours) */
	printf("\033[1;33m     _______\n" );
	printf("\033[1;33m  _ \\______ -    \033[1;33mWHOAMI \033[0;37m%s\n", getenv("USER"));
	printf("\033[1;33m| \\  ___  \\ |      \033[1;33mHOST \033[0;37m%s\n",ui.nodename);
	printf("\033[1;33m| | /   \\ | |    \033[1;33mKERNEL \033[0;37m%s %s\n", ui.sysname, ui.release);
    printf("\033[1;33m| | \\___/ | |    \033[1;33mUPTIME \033[0;37m%lih %lim\n", si.uptime / 3600, (si.uptime / 60) - (si.uptime / 3600 * 60));
	printf("\033[1;33m| \\______ \\_|     \033[1;33mSHELL \033[0;37m%s\n", getenv("SHELL"));
	system("echo \"\033[1;33m -_______\\     \033[1;33mPACKAGES\033[0;37m $(xbps-query -l | wc -l) (xbps)\n\""); 
	return 0; }
	
