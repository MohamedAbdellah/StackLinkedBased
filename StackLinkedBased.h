/*
 * StackLinkedBased.h
 *
 *  Created on: Jan 26, 2017
 *      Author: chrollo
 */

//=====================================================================================//

#ifndef STACKLINKEDBASED_H_
#define STACKLINKEDBASED_H_

//===================================================================================//

typedef struct stackentery{
    int x;
    double c;
}StackEntery;

//==============================================================================//

typedef struct stacknode {

	StackEntery entery;
	struct stacknode* next;
}StackNode;

//==========================================================================//

typedef struct stack{

	StackNode* top;
	int size;
}Stack;


//========================================================================//

typedef enum returntype{

	StackPushSUCC=0,
	StackPushFAIL,
	StackPopSUCC,
	StackPopFAIL,
	STackEmpty,
	StackCreatSUC,
	StackCleardSUC,
	SUCC,
	FAIL,
	StackNOTFull,
	StackNotEmpty

}ReturnType;

//=======================================================================//

ReturnType CreateStack(Stack *sp);

ReturnType push(StackEntery *e,Stack *sp);

ReturnType Pop(StackEntery *e,Stack *sp);

ReturnType StackEmpty(Stack *sp);

ReturnType StackFull(Stack *sp);

ReturnType ClearStack(Stack *sp);

ReturnType StackTop(Stack *sp,StackEntery *te);


#endif /* STACKLINKEDBASED_H_ */
