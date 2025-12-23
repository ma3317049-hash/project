#include<iostream>
#include<string>
using namespace std;

    const int maxx = 10;
    string title[maxx];
    string author[maxx];
    string status_arr[maxx];
    int choice;
    string name;
    int count_book = 0;

void New(){
    cout << "Enter Book Title:" << "\n";
   getline(cin,title[count_book]);
    cout << "Enter author name:" << "\n";
    getline(cin,author[count_book]);
    status_arr[count_book] = "Available";
    count_book++;
    cout << "Book Added" << "\n";
}
void Search(){
    int i ;
    cout << "Enter Book Title:" << "\n";
    getline(cin,name);
    bool found = false;
    for( i = 0; i < count_book ; i++){
        if(title[i] == name){
            found = true ;
            break;
        }
    }
        if (found){
             cout << "found" << "\n";
            cout << title[i] << "\n";
            cout << author[i] << "\n";
            cout << status_arr[i] << "\n";
         found = true;
        }
        
        else
         cout << "not found"<< "\n";
         
    
}
void Borrow()
{
    int i ;
    cout << "Enter Book Title:" << "\n";
    getline(cin,name);
    bool found = false ;
    for( i = 0; i < count_book ; i++){
        if(title[i] == name){
            found = true ;
            break ;
        }
    }
    if (found){
    if(status_arr[i] == "Available"){
            status_arr[i] ="Not Available";
            cout << "Book Borrowed" << "\n";
        }
        else{
            cout << "Book Already Borrowed" << "\n";
        }
    }
        else{
            cout << "Not found at the library \n";
        }
    
}
void Return()
{
    int i ;
    cout << "Enter Book Title:" << "\n";
    getline(cin,name);
    bool found = false ;
    for( i = 0; i < count_book ;i++){
        if(title[i] == name){
            found = true ;
            break ;
    
    }
}
    if (found) {
       if( status_arr[i] == "Not Available"){
            status_arr[i] = "Available";
            cout << "Book Returned";
           }
           else {
           cout << "The Book Already Available\n";
           }
       }else
        cout << "Book not found";

    
}
 void Display()
 {
     if (count_book == 0){
        cout << "no books , yet \n";
     }
     else {
        for(int i = 0 ; i < count_book ; i++ ){
        cout << " Book no "<< i+1 << " "<< title[i] <<"\n";     
        cout << " status " << status_arr[i] <<"\n";
        cout << "author " << author[i] <<"\n" ;
        }
     }


 }

int main()
{
    do
    {
        cout << "==========MENU==========" << "\n";
        cout << "1-Add New Book." << "\n";
        cout << "2-Search Book BY Title. " << "\n";
        cout << "3-Borrow Book." << "\n";
        cout << "4-Return Book." << "\n";
        cout << "5-Display all Books." << "\n";
        cout << "Exit" << "\n";
        cout << "Enter your Choice:" << "\n";
        cin >> choice;
       cin.ignore();
        switch(choice){
            case 1:
            New();
            break;
            case 2:
            Search();
            break;
            case 3:
            Borrow();
            break;
            case 4:
            Return();
            break;
            case 5 :
            Display();
            break ;
            default :
            cout << " invalid number \n";
            break ;

        }

    }
    while(choice != 6);

}