# XOR Gate Simulation in C++

This C++ program simulates a basic XOR (exclusive OR) gate using two boolean switches. The program prompts the user to specify the state ("on" or "off") of each switch and then applies XOR logic to determine the output state of a "light." If one switch is on and the other is off, the light will be "on." If both switches are the same (both "on" or both "off"), the light will be "off."

## Features

- **User Input**: Prompts the user to enter the state ("on" or "off") of two switches.
- **XOR Logic Implementation**: Uses XOR logic to determine the output based on the switch states.
- **Output Display**: Displays the resulting light state ("on" or "off") based on the XOR result.

## Code

```cpp
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

    //will continue to ask until switch 1 is on or off
    while(true){
        if(sw1_name == "on"){
            sw1 = true;
            break;
        } else if(sw1_name == "off"){
            sw1 = false;
            break;
        } else {
            cout << "Try again! Is switch 1 on or off? ";
            cin >> sw1_name;
        }
    }

    //scan switch 2 and set it to true or false
    cout << "\nIs switch 2 on or off? ";
    cin >> sw2_name;

    //will continue to ask until switch 2 is on or off
    while(true){
        if(sw2_name == "on"){
            sw2 = true;
            break;
        } else if(sw2_name == "off"){
            sw2 = false;
            break;
        } else {
            cout << "Try again! Is switch 2 on or off? ";
            cin >> sw2_name;
        }
    }

    //XOR gate logic
    if(sw1 != sw2){
        output_name = "on";
    } else {
        output_name = "off";
    }

    //output result
    cout << "\nThe light is " << output_name;

    return 0;
}
```

## Usage

1. **Compile the Program**:
   ```bash
   g++ -o xor_gate_sim xor_gate_sim.cpp
   ```

2. **Run the Program**:
   ```bash
   ./xor_gate_sim
   ```

3. **Program Interaction**:
   - The program will prompt, "Is switch 1 on or off?" Enter `on` or `off`.
   - The program will then prompt, "Is switch 2 on or off?" Enter `on` or `off`.
   - The output will display the resulting state of the light based on XOR logic.

## Example

**Input**:
```plaintext
Is switch 1 on or off? on
Is switch 2 on or off? off
```

**Output**:
```plaintext
The light is on
```

## Notes

- **Input Validation**: If the user inputs anything other than "on" or "off," the program will prompt again until valid input is provided.
- **Logic Explanation**: XOR logic dictates that if one switch is on and the other is off, the output is "on." Otherwise, the output is "off."
