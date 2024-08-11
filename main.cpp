#include <iostream>
#include <string>

using namespace std;

class Stack{

private:
    int top;
    int arr[5];

public:
    Stack(){
        top=-1;
        for(int i=0; i<5; i++){
            arr[i]=0;
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }else{
            return false;
        }
    }

    bool isFull(){
        if(top==4){
             return true;
        }else{
            return false;
        }
    }

    void push(int val){
        if(isFull()){
            cout << "Stack overflow" << endl;
        }else{
            top++;
            arr[top]=val;
        }
    }

    int pop(){
        if(isEmpty()){
            cout << "Stack is underflow" << endl;
            return 0;
        }else{
            int popvalue=arr[top];
            arr[top]=0;
            top--;
            return popvalue;
        }
    }

    int count(){
        return (top+1);
    }

    int peek(int pos){
        if(isEmpty()){
            cout << "Stack is underflow" << endl;
            return 0;
        }else{
            return arr[pos];
        }
    }

    void change(int pos, int val){
        arr[pos]=val;
        cout << "Value changed at Location" << pos << endl;
    }

    void display(){
        cout << "All Values in the Stack are" << endl;
        for(int i = 4; i>=0; i--){
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    Stack q1;
    int pos, val, choise;

    do{
        cout << "What Operation do you want to perform? Select the Option Number. Enter 0 to exit." << endl;
        cout << "1. Push()" << endl;
        cout << "2. Pop()" << endl;
        cout << "3. isEmpty" << endl;
        cout << "4. isFull" << endl;
        cout << "5. Peek" << endl;
        cout << "6. Count()" << endl;
        cout << "7. Change()" << endl;
        cout << "8. Display" << endl;
        cout << "9. Clear Screen" << endl;

        cin >> choise;
        switch(choise){
            case 0:
                break;
            case 1:
                cout << "Enter an item to push in the stack" << endl;
                cin >> val;
                q1.push(val);
                break;
            case 2:
                cout << "Pop Function call - Pop Value: " << q1.pop() << endl;
                break;
            case 3:
                if(q1.isEmpty()){
                    cout << "Stack is Empty" << endl;
                } else{
                    cout << "Stack is not Empty" << endl;
                }
                break;
            case 4:
                if(q1.isFull()){
                    cout << "Stack is Full" << endl;
                } else{
                    cout << "Stack is not Full" << endl;
                }
                break;
            case 5:
                cout << "Enter the position of item you want to peek: " <<endl;
                cin >> pos;

                cout << "Peek Function call - value at the Position " << pos << " is " << q1.peek(pos) << endl;
                break;
            case 6:
                cout << "Count Function call - Number of item in the stack are: " << q1.count();
                break;
            case 7:
                cout << "Change Function call - " << endl;
                cout << "Enter the Position do you want to change" << endl;
                cin >> pos;
                cout << endl;

                cout << "Enter the Value do you want to change" << endl;
                cin >> val;
                q1.change(pos,val);
                break;
            case 8:
                cout << "Display Function call -" << endl;
                q1.display();
                break;
            case 9:
                system("cls");
                break;
            default:
                cout << "Enter Proper Option Number" << endl;
        }

    } while(choise!=0);

    return 0;
}
