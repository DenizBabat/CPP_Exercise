#include <iostream>
#include <vector>

using namespace std;


void fun(int num){
    cout << "\nValue of number: " << num<<endl;
}

void add(int a, int b) 
{ 
    cout<<"Addition is: "<< a+b << endl; 
} 
void subtract(int a, int b) 
{ 
    cout<<"Subtraction is: "<< a-b << endl; 
} 
void multiply(int a, int b) 
{ 
    cout<<"Multiplication is: "<< a*b << endl; 
} 

void helloWorld(){
    cout<<"\nHello World"<<endl;
}

void printValue(int val){
    cout<<"Value is :" << val << endl;
}
void forEach(vector<int>& vec, void(*print)(int)){
    for(int v: vec){
        print(v);
    }
}

int main(){

    //------------------------------------------------------------------------------------------------------------------------------------------------------------
    //function pointer
    void (*fun_ptr)(int) = &fun;

    (*fun_ptr)(10);

    //------------------------------------------------------------------------------------------------------------------------------------------------------------
    //aşağıdaki örnek bunu yorum için yapılmıştır. (Function pointer can be used in place of switch case. For example, in below program, user is asked for a choice between 0 and 2 to do different tasks.)
    void (*fun_pt_arr[])(int, int) = {add, subtract, multiply};
    unsigned int ch, a = 15, b = 45;

    //cout<<"\nEnter Choice: 0 for add, 1 for subtract and 2 for multiply\n";
    //cin>> ch;

    if (ch>=0 && ch < 3)
    {
        (*fun_pt_arr[ch])(a, b);
    }
    //------------------------------------------------------------------------------------------------------------------------------------------------------------

    typedef void(*helloWorldFunction)();

    helloWorldFunction hello = helloWorld;

    hello(); 

    //----ADVANCED_EXAMPLE--------------------------------------------------------------------------------------------------------------------------------------------------------
    vector<int> values = {2,5,5,7,9,5,4,1,2,500};
    
    forEach(values, printValue);

    //----ADVANCED_EXAMPLE WITH LAMBDA EXPRESSION--------------------------------------------------------------------------------------------------------------------------------------------------------
    vector<int> values2 = {45,12,56,78};
    
    forEach(values2, [](int value){
        cout<<"\nIn Lambda, Value is: "<<value<<endl;
    });

    return 0;
}