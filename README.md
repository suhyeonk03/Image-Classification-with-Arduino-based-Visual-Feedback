# Image-Classifier-Deep-CNN-
Simple ML built in Jupyter Notebook using Python 

## Project Overview
Using open-source libraries specialized in deep learning and machine learning, I trained a deep convolutional neural network (CNN) on two cleaned training datasets to classify images into two classes: Apple and Orange
<br><br>
<ins>**Detailed steps and code are in the Jupyter notebook named Image_Classifier.ipynb**</ins>

  
## Used Python Libraries
- tensorflow
- keras
- matplotlib
- numpy
- h5py
- protobuf
- opencv

## Next Steps
**Combination of Image classification and Arduino**:
- Key components: Arduino, LCD, LED (yellow, red)
- Find a way to integrate a Python program with an Arduino
  (run the model on Jupyter, then transfer the output to Arduino so that Arduino can perform hardware tasks)
  (libraries: pySerial(allows python to communicate with the Arduino via USB serial port))
- Get a new image folder. Pick a random image and use it to predict the output. (+ plot the image)
- This way, if a camera is implemented in the future, the project will be able to handle uploaded images without human interaction
- If an image (Apple or Orange) is provided, predict it, and display the output using the LCD and LED
- LCD: e.g., "Give me an image of either Apple or Orange." --> "It's an Apple/Orange."
- LED: Turn on the yellow LED if the image is Orange, or the red LED if it's an Apple

# Image Classifier with Arduino board

## Project overview: 
This project integrates a deep convolutional neural network (CNN) image classifier with Arduino hardware. The CNN predicts whether an image is an Apple or an Orange, and the Arduino responds by controlling LEDs and an LCD display accordingly.

## Constraints
- I couldn’t afford a camera to make this project a fully autonomous image classifier that could perform all the steps without human interaction—capturing an image and using it to make a prediction.
- Memory constraint: The Arduino board has very limited RAM and flash storage, which is not sufficient to handle TensorFlow, virtual environments, and similar tasks. Instead, a Jupyter Notebook performs these tasks, and the Arduino receives the prediction result to execute hardware operations
