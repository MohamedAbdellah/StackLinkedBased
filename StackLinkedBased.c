/*
 * StackLinkedBased.c
 *
 *  Created on: Jan 26, 2017
 *      Author: chrollo
 */

#include"stdlib.h"
#include"StackLinkedBased.h"
#include <string.h>
#include <stdlib.h>

ReturnType CreateStack (Stack * s){

	s->top=NULL;
	s->size=0;
	return StackCreatSUC;
}

ReturnType StackFull(Stack *sp){
	return StackNOTFull;
}


//============================================================================================//

ReturnType push(StackEntery *e,Stack *sp){
StackNode *pn=(StackNode *)malloc(sizeof(StackNode));
 pn->next=sp->top;
sp->top=pn;
pn->entery=*e;
(sp->size)++;
return StackPopSUCC;
}


//===========================================================================================//

ReturnType Pop(StackEntery *e,Stack *sp){
if(sp->size==0)
	return STackEmpty;
*e=sp->top->entery;
StackNode *pn=sp->top;
sp->top=sp->top->next;
free(pn);
(sp->size)--;
return StackPopSUCC;

}

ReturnType ClearStack(Stack *sp){

	StackNode *pn,*pm;
	pn=sp->top;
	pm=sp->top;
	while(pm){
		pn=pn->next;
		free(pm);
		pm=pn;
	}
	sp->size=0;
return StackCleardSUC;
}

ReturnType StackEmpty(Stack *sp){

	if(sp->top==NULL)
     return STackEmpty;

	else
	return StackNotEmpty;

}


ReturnType StackTop(Stack *sp,StackEntery *te){
	if(StackEmpty(sp)==StackNotEmpty){
		*te=sp->top->entery;
return SUCC;
    }
	else{
		return STackEmpty;
	}

}
