# MakeIT-How-to-deploy-a-linear-regression-on-Arduino-Nano-33
This repository is dedicated to the first tutorial of my YouTube channel.

## Python part

The linear regression is designed using Tensorflow and Keras with only one layer of one neurone. This network has been trained on 2 numpy arrays x and y with y=2x+1.
Then this model has been exported into a none quantized tflite model. After that I have used xxd tool to create a .h file containing an array with the parameter of the neural network.

Here is a schema of the neural network :

![Neural network](https://github.com/BaptisteZloch/MakeIT-How-to-deploy-a-linear-regression-on-Arduino-Nano-33/blob/main/Python%20model%20and%20files/Neural%20network.png?raw=true)

## Arduino part

![Results of the prediction](https://github.com/BaptisteZloch/MakeIT-How-to-deploy-a-linear-regression-on-Arduino-Nano-33/blob/main/Results.png?raw=true)
