 /*
  *MakeIT 1st tutorial
  *Title : Linear Regression 
  *Author : Baptiste ZLOCH (MakeIT owner)
  *Description : Deploying a simple linear regression done with tensorflow converted to c++ .h file. Done with EloquentTinyML library, really easy to use. 
  *Date : 02/03/2021
  *Tested with : ESP32, ESP32-cam, NANO 33 BLE 
  */

#include <Arduino.h>
#include <EloquentTinyML.h> //TinyML library that uses Tensorflow lite micro
#include "model.h" //this our model, it's a const unsigned char array

#define NB_INPUTS 1 //number of outputs here only an array with one element x
#define NB_OUTPUTS 1 //number of outputs here only an array with one element y
#define Tensor_arena 2*1024 //tensor arena size (don't know yet how to precisely define it...)


Eloquent::TinyML::TfLite<NB_INPUTS, NB_OUTPUTS, Tensor_arena> my_model; //instanciate your model with number of inputs, outputs, size

void setup() {
    Serial.begin(9600); //start serial communication
    my_model.begin(model); //start your model
}

void loop() { 
    float x = random(20)+(random(10)/10); //create a random float number
    float input[NB_INPUTS] = {x}; //create input with is a float array 
    float output = my_model.predict(input); //predict the output by giving to the model input

    //Results :
    Serial.print("x : ");
    Serial.print(x);
    Serial.print(" y : ");
    Serial.print(2*x+1); //true y
    Serial.print(" predicted y : ");
    Serial.println(output); //predicted y
    delay(1000);
}