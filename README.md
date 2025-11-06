# Image Classification with Arduino-based Visual Feedback

## Project Overview
Displays the output of ML image prediction between two classes (apple and orange) using LEDs and an LCD 

<p align="center">
  <img src="https://github.com/suhyeonk03/Image-Classification-with-Arduino-based-Visual-Feedback/blob/main/Arduino_Orange.jpg" alt="Arduino with LCD" width="450" height="350">
  <img src="https://github.com/suhyeonk03/Image-Classification-with-Arduino-based-Visual-Feedback/blob/main/Jupyter_Orange.jpg" alt="Picture selected" width="450" height="350">
</p>

## Used Libraries
- tensorflow
- keras
- matplotlib
- numpy
- h5py
- protobuf
- opencv

## Hardware
- Arduino Uno R3 SMD
- DFRobot_RGBLCD1602
- Breadboard, wires, resistors, LEDs, Mini micro slide switch 

## Phase 1: Image-Classifier-Deep-CNN
Simple ML built in Jupyter Notebook using Python. Using open-source libraries specialized in deep learning and machine learning, I trained a deep convolutional neural network (CNN) on two cleaned training datasets to classify images into two classes: Apple and Orange
<br><br>
<ins>**Detailed steps and code are in the Jupyter notebook named Image_Classifier.ipynb**</ins>
<br><br>

- Get a new image folder. Pick a random image and use it to predict the output. (+ plot the image)
- This way, if a camera is implemented in the future, the project will be able to handle uploaded images without human interaction
- If an image (Apple or Orange) is provided, predict it, and display the output using the LCD and LED
- LCD: e.g., "Give me an image of either Apple or Orange." --> "It's an Apple/Orange."
- LED: Turn on the yellow LED if the image is Orange, or the red LED if it's an Apple

## Phase 2: Image Classifier with Arduino board
This project integrates a deep convolutional neural network (CNN) image classifier with Arduino hardware. The CNN predicts whether an image is an Apple or an Orange, and the Arduino responds by controlling LEDs and an LCD display accordingly.

### Constraints
- I couldn’t afford a camera to make this project a fully autonomous image classifier that could perform all the steps without human interaction—capturing an image and using it to make a prediction.
- Memory constraint: The Arduino board has very limited RAM and flash storage, which is not sufficient to handle TensorFlow, virtual environments, and similar tasks. Instead, a Jupyter Notebook performs these tasks, and the Arduino receives the prediction result to execute hardware operations
