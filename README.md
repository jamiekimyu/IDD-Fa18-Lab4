# Paper Puppets

*A lab report by Jamie Yu*

## In this Report

To submit your lab, clone [this repository](https://github.com/FAR-Lab/IDD-Fa18-Lab4). You'll need to describe your design, include a video of your paper display in operation, and upload any code you wrote to make it move.

## Part A. Actuating DC motors

[Vibration Motor](https://www.youtube.com/watch?v=8eO_NGx82ng)

## Part B. Actuating Servo motors

### Part 1. Connect the Servo to your breadboard

**a. Which color wires correspond to power, ground and signal?**

Orange is Signal, Red is Power, Brown is Ground

### Part 2. Connect the Servo to your Arduino

**a. Which Arduino pin should the signal line of the servo be attached to?**

The Arduino pin should be connected to Pin 9. 

**b. What aspects of the Servo code control angle or speed?**

The angle of rotation is set by the `pos` variable  due to its usage in the for() loop: `for (pos = 0; pos <= mapped_value; pos += 1)`. `delay()` controls the speed

## Part C. Integrating input and output

**Include a photo/movie of your raw circuit in action.**
[Servo](https://www.youtube.com/watch?v=WeX1r8tB9hI)

## Part D. Paper puppet

**a. Make a video of your proto puppet.**

## Part E. Make it your own

**a. Make a video of your final design.**
 
