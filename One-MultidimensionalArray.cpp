#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
 int arr[5][5];
int arrl[8];
    int ro, co;
    bool ha = true;
    string yn;
    int m,n,o;
    int dlt , srch, updt;
     int rm ,cm, nu;
bool keep_looping = true;
 while (keep_looping){

        cout<<"______________________________"<<endl;
        cout<<"|         -MAIN MENU-        |"<<endl;
        cout<<"|         -----------        |"<<endl;
        cout<<"| [1]One Dimensional Array   |"<<endl;
        cout<<"| [2]Multi-Dimensional Array |"<<endl;
        cout<<"|____________________________|"<<endl;

        cout<<"PLEASE SELECT NO. : ";
        cin>>m;

      switch(m){

      case 1:
       cout<<"Enter number of elements: ";
            cin>>ro;
        for(int i=0; i<ro; i++){
            cout<<"Enter elements of arr["<<i<<"]";
            cin>>arrl[i];

        }
        cout<<"______________________________"<<endl;
        cout<<"|   -One Dimensional Array-  |"<<endl;
        cout<<"|         -----------        |"<<endl;
        cout<<"| [1] DELETE                 |"<<endl;
        cout<<"| [2] SEARCH                 |"<<endl;
        cout<<"| [3] UPDATE                 |"<<endl;
        cout<<"|____________________________|"<<endl;

        cout<<"PLEASE SELECT NO. : ";
        cin>>n;
        switch(n){

        case 1:{
        cout<<"Enter position to delete: ";
        cin>>dlt;
        int j=dlt;

        while(j<ro){
           arrl[j-1]=arrl[j];
            j=j+1;
        }
        ro=ro-1;
        for(int i=0; i<ro; i++){
            cout<<"Element ["<<i<<"]: "<<arrl[i]<<endl;
        }
        }
        break;
         case 2:{
        cout<<"Enter number of element to search: ";
        cin>>srch;
         for(int i=0; i<ro; i++){
                if(arrl[i]==srch){
                    cout<<"The number "<<srch<<" is in the position "<<"["<<i<<"]"<<endl;
                }
        }
         }
         break;
      case 3:{
        cout<<"Enter position to update: ";
        cin>>updt;
        cout<<"Enter number: ";
        int nu;
        cin>>nu;

        arrl[updt-1]=nu;
          for(int i=0; i<ro; i++){
            cout<<"Element ["<<i<<"]: "<<arrl[i];
            cout<<endl;
}}
        }

cout<<"Do you want to exit? press[N] if NO and [Y] if YES: ";
    cin>>yn;

if(yn=="Y"||yn=="y"){
      keep_looping = false;
    }else{
   system("cls");
    }

break;
      case 2:
          cout<<"Enter num of row: ";
    cin>>ro;
    cout<<"Enter num of column: ";
    cin>>co;

    for(int i=0; i<ro; i++){
        for(int k=0; k<co; k++){
            cout<<"Enter Elements of arr["<<i<<"]"<<"["<<k<<"]: ";
            cin>>arr[i][k];

        }

    }
        cout<<"______________________________"<<endl;
        cout<<"| -Multi-Dimensional Array-  |"<<endl;
        cout<<"|         -----------        |"<<endl;
        cout<<"| [1] SEARCH                 |"<<endl;
        cout<<"| [2] UPDATE                 |"<<endl;
        cout<<"|____________________________|"<<endl;

        cout<<"PLEASE SELECT NO. : ";
        cin>>o;
     switch(o){


         case 1:{
        cout<<"Enter number of element to search: ";
        cin>>srch;
        for(int i=0; i<ro; i++){
        for(int k=0; k<co; k++){
                if(arr[i][k]==srch){
                    cout<<"The number "<<srch<<" is in the position "<<"["<<i<<"]"<<"["<<k<<"]"<<endl;
                }
        }
    }
         }
         break;
      case 2:{
        cout<<"Enter position of row and column: ";
        cin>>rm>>cm;
        cout<<"Enter number: ";
        cin>>nu;

        arr[rm][cm]=nu;
        for(int i=0; i<ro; i++){
        for(int k=0; k<co; k++){
            cout<<"Elements of arr["<<i<<"]"<<"["<<k<<"]: "<<arr[i][k]<<endl;


        }

    }
    }
        }



    cout<<"Do you want to exit? press[N] if NO and [Y] if YES: ";
    cin>>yn;

if(yn=="Y"||yn=="y"){
      keep_looping = false;
    }else{
   system("cls");
    }
      default:
        cout<<"Invalid number";
        system("pause");
}
  }

  system("pause");
  

}
