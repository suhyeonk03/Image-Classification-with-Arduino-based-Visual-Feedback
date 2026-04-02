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

## Phase 2: Image Classifier with Arduino board
This project integrates a deep convolutional neural network (CNN) image classifier with Arduino hardware. The CNN predicts whether an image is an Apple or an Orange, and the Arduino responds by controlling LEDs and an LCD display accordingly.

### How It Works
1. Run the Arduino code so it can receive predictions from the Jupyter Notebook (Python code) and send prediction requests.
2. Run the Jupyter Notebook so it can send prediction results and receive updates on the state of the slide switch (i.e., whether to process a new image or not).
3. Each time the slide switch is toggled, a new image will be processed by the CNN model, and the result will be displayed through the LEDs and the LCD.
- If the image is predicted as an orange, the yellow LED will turn on, and the LCD will display: “Pred class: Orange,” along with the confidence percentage.
- If the image is predicted as an apple, the red LED will turn on, and the LCD will display: “Pred class: Apple,” along with the confidence percentage.

### Constraints
- I couldn’t afford a camera to make this project a fully autonomous image classifier that would perform all the steps without human interaction—capturing an image of real fruit and using it to make a prediction.
- Memory constraint: The Arduino board has very limited RAM and flash storage, which is not sufficient to handle TensorFlow, virtual environments, and similar tasks. Instead, a Jupyter Notebook performs these tasks, and the Arduino receives the prediction result to execute hardware operations.
