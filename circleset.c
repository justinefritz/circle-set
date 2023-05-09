#include <iostream>
using namespace std;

void circle();
void factorial();

int main(){
    int choice;
    cout << "1. Area of a Circle\n";
    cout << "2. Factorial\n";
    cout << "3. Exit\n";
    cout << " : ");
    cin >> choice;
    if (choice == 1){
    	system("cls");
        circle();
        }
        else if (choice == 2){
        	system("cls");
            factorial();
            }
            else if (choice == 3){
            	system("cls");
                cout << Thank you for using the program.....";
                }
                else{
                    system("cls");
                    main();
                    }
}
void circle(){
    float r, radius;
    cout << "Enter the number : ";
    cin >> r;
    system("cls");
    radius = (3.14 * (r * r));
    cout << "The radius is " << radius << endl;
    main();
}

void factorial(){
    int num, total = 1;
   	cout << "Enter the number : ";
    cin >> num;
    system("cls");
    for (int x = 1; x <= num; num--){
        total = total * num;
        if (num == 1){
            cout << num << " ";
        }
        else{
        cout << num << " * ";
        }
    }
    cout << total << "= \n";
    main();
}