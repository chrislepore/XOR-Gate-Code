#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{

    //declare strings
    string sw1_name;
    string sw2_name;
    string output_name;

    //declare booleans
    bool sw1;
    bool sw2;



    //scan switch 1 and set it to true or false
    cout << "Is switch 1 on or off? ";
    cin >> sw1_name;

    //will continue to ask until switch 1 if on or off
    while(true){
    if(sw1_name == "on"){
        sw1 = true;
        break;
    }else if(sw1_name == "off"){
        sw1 = false;
        break;
    }else{
        cout << "Try again! Is switch 1 on or off? ";
        cin >> sw1_name;
    }
    }


    //scan switch 2 and set it to true or false
    cout << "\n Is switch 2 on or off? ";
    cin >> sw2_name;

    //will continue to ask until switch 2 if on or off
    while(true){
    if(sw2_name == "on"){
        sw2 = true;
        break;
    }else if(sw2_name == "off"){
        sw2 = false;
        break;
    }else{
        cout << "Try again! Is switch 1 on or off? ";
        cin >> sw2_name;
    }
    }

    //ex-or gate
    if(sw1 != sw2){
        output_name = "on";
    }else{
        output_name = "off";
    }

    //output if the lights on or off
    cout << "\n the light is " << output_name;

    return 0;
}
