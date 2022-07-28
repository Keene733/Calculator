//Keene Cabahug this is my calculator program.

#include<iostream>
#include <cmath>
#include <stdio.h>      /* printf */
#include <math.h>       /* cbrt */
using namespace std;

int value1,value2,x;
void choice(){
  cout << "\nChoose one to start."
              "\nOption: ";
}//end of choice void

void expressions(){
  cout << "Please choose your function:"
           "\n1: Add"
           "\n2: Subtract"
           "\n3: Multiply"
           "\n4: Divide"
           "\n5: Round up"
           "\n6: Round down"
           "\n7: Cube root"
           "\n8: Modf"
           "\n9: Exit"
           "\n\nOption: ";
}//end of expressions void

void add(){
  
         cout << "Enter first value: \n";
         cin >> value1;
         cout << "Enter second value: \n";
         cin>> value2;
         cout<<"value1+value2= "<<value1+value2<<endl;
         cout<<"value2+value1= "<<value2+value1<<endl;//Commutative Property 
         
}//end of add void

void subtract()
{
  cout << "Enter first value: \n";
         cin >> value1;
         cout << "Enter second value: \n";
         cin>> value2;         
         x = value1 - value2;
         cout << "Subtract = " << x;
}//end of subtract void

void multiply(){
  cout << "Enter first value: \n";
         cin >> value1;
         cout << "Enter second value: \n";
         cin>> value2;
         cout<<"value1*value2= "<<value1*value2<<endl;
         cout<<"value2*value1= "<<value2*value1<<endl;
         //Commutative Property
}//end of multiply void

void divide(){
  //Division
         cout << "Enter Dividend: ";
         cin >> value1;
         cout << "Enter Divisor: ";
         cin >> value2;
         while(value2 == 0)
         {
            cout << "\nDivisor can't be zero."
                    "\nEnter divisor once again: ";
            cin >> value2;
         }
         x = value1 / value2;
         cout << "\nQuotient = " << x;     
}//end of divide void

int main()
{
  expressions();
   int option;
   int value1, value2, x, y;
   char replay = ' ';
   
   cin >> option; 

   while(option < 1 || option > 9)
   {
      choice();
      cin >> option;
   }//this while loop checks whether the choice within the given range

   switch (option){
      
      case 1: add();
      break;
      
      case 2: subtract();
         break;

      
      case 3: multiply();
         break;

      
      case 4: divide();
         break;

      
        case 5: //ceil function
          float x;
          cout<<"Enter a value: ";
          cin>>x;
          cout<<"ceil("<<x<<"): "<<ceil(x)<<endl;
          break;
      

    case 6: //floor function
    cout<<"Enter a float value: ";
    cin>>x;
    //printing the round down value
    cout<<"floor("<<x<<"): "<<floor(x)<<endl;
    break;


    case 7: //Cube root function
    double param, result;
    
    param = ' ';
    cout<<"Enter a number to cube.";
    cin>>param;
    result = cbrt (param);
    printf ("cbrt (%f) = %f\n", param, result);
    break;


    case 8: //modf function
    double intPart, fractPart;
	
	  fractPart = modf(x, &intPart);
    cout<< "Enter a number.";
    cin>>x;
	  double intpart, fractpart; 

	  fractpart = modf(x, &intpart);
	  cout << x << " = " << intpart << " + " << fractpart << endl;
    break;

   case 9: //Exit
   cout<<"Goodbye!!!!!!";
   return 0;
   break;
  
    }//end of switching function
   
  
  
       
  do{
     cout<<"\nWould you enter another set of values to form a calculation?\n Y/N \n";
   cin>>replay;
   if(replay  == 'N' || replay  == 'n')
  return 0;
  else
    expressions();
   cin >> option;

   
   while(option < 1 || option > 9)
   {
         choice();
      cin >> option;
   }//this while loop checks whether the choice within the given range

    switch (option){
      
      case 1: add();
      break;
      
      case 2: subtract();
         break;

      
      case 3: multiply();
         break;

      
      case 4: divide();
         break;

      
        case 5: //ceil function
          float x;
          cout<<"Enter a value: ";
          cin>>x;
          cout<<"ceil("<<x<<"): "<<ceil(x)<<endl;
          break;
      

    case 6: //floor function
    cout<<"Enter a float value: ";
    cin>>x;
    //printing the round down value
    cout<<"floor("<<x<<"): "<<floor(x)<<endl;
    break;


    case 7: //Cube root function
    double param, result;
    
    param = ' ';
    cout<<"Enter a number to cube.";
    cin>>param;
    result = cbrt (param);
    printf ("cbrt (%f) = %f\n", param, result);
    break;


    case 8: //modf function
    double intPart, fractPart;
	
	  fractPart = modf(x, &intPart);
    cout<< "Enter a number.";
    cin>>x;
	  double intpart, fractpart; 

	  fractpart = modf(x, &intpart);
	  cout << x << " = " << intpart << " + " << fractpart << endl;
    break;

   case 9: //Exit
   cout<<"Goodbye!!!!!!";
   return 0;
   break;
  
    }//end of switching function
   
  }while (replay == 'Y' || replay == 'y'); //end of do while loop 
  
  return 0;  
}//end of memory hook