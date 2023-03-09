#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Edrico Putra Pramana-LB20
//2602078133

#define max 100
char stack[max];
int top;

void push(char x){  
      if(top == max-1){  
          printf("\nStack overflow\n");  
      }  else {  
          stack[++top]=x;  
      }  
}  

void pop(){  
      printf("%c",stack[top--]);  
}  

int main()  
{  
    char str[max];
    int space;
    while(1){
    	space=0;
    	printf("1. Reverse Sentences\n2. Exit\n>> ");
    	int ch; scanf("%d", &ch); getchar();
        if(ch==2){
        	system("cls");
		printf("Thankyou for using the program!\n");
		exit(1);
	}
        else if(ch==1){
        	system("cls");
        	printf("Input Sentences\n");
        	printf(">> ");
        	scanf("%[^\n]", str); getchar();
        	system("cls");
			int len = strlen(str);
	        int i;
	        i=0;
	        do{
	            if(str[i]==' '){
	                space++;
	            }
	            i++;
	        }while(i<=str[i]);
			system("cls");
	        if(space>=3){
	            for(int i=0;i<len;i++)  
	                push(str[i]);  
	        
	            for(int i=0;i<len;i++)  
	                pop();
	            printf("\n");
	            system("pause");system("cls");
	        }
	        else{
	        	printf("Invalid Amount\n");
	        	system("pause");system("cls");
			}
		}
	else{
		printf("Invalid Input\n");
		system("pause");system("cls");
	}
    }
    return 0;
}
