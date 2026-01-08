#define MAX 5
int stack [MAX];
int top=-1;
void push (int value ){
    if ( top=-1){
        printf("Overflow\n");
    }
    else{
        top++;
        stack[top]= value ;
    }
}
void pop(){
    if ( top==-1){
        printf("underflow\n");
    }
    else {
        int data= stack[top];
        printf("value popped is %d \n", data);
        top--;
    }
}
void peek(){
    if ( top== -1){
        printf("stack is empty \n");
    }
    else {
        printf(" %d\n", stack [top]);
    }
}
void display (){
    if (top == - 1 ){
        printf("No data is display \n");
    }
    else {
        for ( int i = top; i >= 0; i++)
        {
            printf("%d\n", stack[i]);
        }
    }
}
int main (){
     push (2), push(4),push(10);
     display();
     pop();
     display();
     peek();
     return 0;
}