#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;
} Node;

int main(void)
{
  int i,val,num;
  Node *first,*current,*previous;
  printf("Number of nodes: ");
  scanf("%d",&num);
  
  for(i=0;i<num;i++){
  	current=(Node *) malloc(sizeof(Node));//�إ߷s�`�I
	printf("qq Data for node %d: ",i+1);
	scanf("%d",&(current->data)); //��J�`�I��data����
	if(i==0){
		first=current;  //�p�G�O�Ĥ@�Ӧ��������frist���V�ثe���`�I 
	}else{
		previous->next=current;//��e�@�Ӫ�next���V�ثe���`�I 
	}
	current->next=NULL; //��ثe���`�I��next���VNULL
	previous=current; //��e�@�Ӹ`�I�]���ثe���`�I 
  }
  
  current=first; //�]current���Ĥ@�Ӹ`�I 
  while(current!=NULL){
  	printf("address=%p, ",current); //�L�X�`�I����} 
  	printf("data=%d ",current->data); //�L�X�`�I����� 
  	printf("next=%p\n",current->next); //�L�X�U�@�Ӹ`�I��} 
	current=current->next;  //�Nptr���V�U�@�Ӹ`�I 
  } 

   system("pause");
   return 0;   
};