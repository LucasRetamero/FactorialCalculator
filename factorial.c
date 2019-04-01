//Livrary
#include <stdio.h>
#include <stdlib.h>

//variables 
int userNumber=0,userMenu=0,valueUser=0;
static char menu[] = "\n\n--------- Factorial Calculator ---------\n Insert: (1) - Factorial Calculator\n Insert: (0) - Close software\n\n";
static char messageEnd[] = "\nFinished System,press enter...";

//functions
void saida(char message[]);// show message
 void insertFact();//get number by user
  void factorialProcess(int a);//calculate the factorial
   void outputFact(int a,int x);//show of result
    void insertMenu();//show menu
	 void menuProcess(int option);//Verify input and call function below 
	  void menuCallFunProcess(int option); //call other functions
	
//Input-----------------------------------

//Function to get input of user
void insertFact(){
 printf("\nInsert the number to factorial:");
  scanf("%d",&userNumber);//get input
   factorialProcess(userNumber);//call funciton to calculator
}

//Menu of application
void insertMenu(){
 printf("%s",menu); //show menu
  printf("Option(only number of option):"); //show ask
   scanf("%d",&userMenu);//get number
    menuProcess(userMenu);//Call function than call others functions
}

//Processer-----------------------------------

//Verify input if is unlike 0 or 1
void menuProcess(int option){
	
  if(option!= 1 && option!= 0)//show when the input of user don´t be 1 or 0
     insertMenu(); //get input of user
  else	
     menuCallFunProcess(option);//Call function than call others 
}

//Menu call functions
void menuCallFunProcess(int option){
	
  switch(option){//case situation
   
   case 1://case input is the number 1
    insertFact();//call function to get number
     break;//stop here
   
   case 0://Case input is the number 0
    printf("%s",messageEnd);//show message
	 getchar();//no close window
	  break;//stop here
 }
 
}

//calculate factorial
void factorialProcess(int a){
 valueUser = a; //get the value insert by user no calculator
  for(int x=a-1;x>=1;x--){ //factorial calculate
   a*=x;	 
   }
   outputFact(a,valueUser);//show result
}

//Output-----------------------------------

//show result factorial
void outputFact(int a,int x){
	
 for(int o=x-1;o>=1;o--){//show result and factorial calculator
  printf("\nResult: %d*%d = %d",x,o,x*o); 
   x*=o;
  }
  printf("\nFinal Result: %d",a); //show final result
   insertMenu(); //get input of user to the menu
    getchar();	//no close windown
}

//show message
void saida(char message[]){
 printf("%s",message);	
}

//main funciton
int main(){
 insertMenu();//input of numbers by user 
  getchar();//no close windown
   return 0;//return no error
}

