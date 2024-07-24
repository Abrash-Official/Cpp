#include <iostream>
using namespace std;

double sum(double num1 ,double num2){  //Create a function that add 2 numbers
    return num1 + num2;
}

double sub(double num1 ,double num2){  // Create a function that Subtract 2 numbers
    return num1 - num2;
}

double mul(double num1 ,double num2){  // Create a function that Multiply 2 numbers 
    return num1 * num2;
}

double divi(double num1 ,double num2){  // Create a function that Divide 2 numbers 
    return num1 / num2;
}

int main(){  // Start the Pre-define Function 

    double num1;  // DataType of 2 numbers is float
    double num2;

    cout<<"Hi Welcome to Abrash's calculator!\nYou can calculate 2 values at a time.\nNow press: "<<"\n";  // Welcome To every one

    while (true){  // Start while loop 
    string options;
    string again;

/// Add multiple option for our Calculator ///
    cout<<"1:Addition              2:Substraction \n3:Multiplication        4:Division\n5:Remainder             6:Square\n7:Close\nEnter your option: ";
    cin>>options;

    if(options == "7"){
        cout<<"Thank You for using my Calculator.I hope you like it";  // Option 5 Will close the loop 
        break;
    }

/// Enter Your first number for only these options ///
    if (options == "1" or options =="2" or options == "3" or options == "4" or options == "+" or options == "-" or options == "*" or options == "/"){
        cout<<"Enter a number: ";
        cin>> num1;
    }

/// Enter your second number for only these options ///
    if (options == "1" or options =="2" or options == "3" or options == "4" or options == "+" or options == "-" or options == "*" or options == "/"){
        cout<<"Enter Second Number: ";
        cin>> num2;
    }

    if (options =="1" or options == "+"){  // Option 1 will add 2 numbers 
        cout<<num1 <<" + "<<num2<<" = "<< sum(num1,num2);

    }else if(options == "2" or options == "-"){  // Option 2 will substract 2 numbers 
        cout<<num1 <<" - "<<num2<<" = "<< sub(num1,num2);

    }else if(options == "3" or options == "*"){  // Option 3 will Multiplt 2 numbers 
        cout<<num1 <<" X "<<num2<<" = "<< mul(num1,num2);

    }else if(options == "4" or options == "/"){  // Option 4 will Divide 2 numbers 

        if(num2 == 0){   // Divide with 0 is not possibile 
            cout<<"Divide by 0 is infinite!!!";
        }else{
        cout<<num1 <<" / "<<num2<<" = "<< divi(num1,num2);
        }

    }else if (options == "5"){  // Option 5 will give reminder of 2 numbers 
        int x;
        int y;
        cout<<"Enter a value: ";
        cin>>x;
        cout<<"Enter second value: ";
        cin>>y;
        cout<<x <<" % "<<y<<" = "<<x % y;

    }else if(options == "6"){  // Option 6 will give square of a number 
        double z;
        cout<<"Enter a number to get it's square: ";
        cin>>z;
        cout<<z <<"^2 "<<" = "<< z*z;

    }else{  // Else get syntax error 
        cout<<"Syntax Error\n";
    }
    cout<<"\n"<<"1:Again Calculate\n2:Close\nEnter your option: ";
    cin>>again;

    if (again == "1"){  // If you want to calculate again than press 1 

    }else{  // If you want to Quit than press 2 
        cout<<"Thank You for using my Calculator.I hope you like it";
        break;
    }
    }
}