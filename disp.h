#include "work.h"
#ifndef DISP_H
#define DISP_H
void disp() //display functions
{struct employee *a=(struct employee*)malloc(sizeof(struct employee));
a=head;
while(a!=NULL)
{printf("\n%d",a->id);
 printf("\n%f",a->salary);
 printf("\n%s\n",a->empname);
	a=a->next;
	}	
}
#endif
