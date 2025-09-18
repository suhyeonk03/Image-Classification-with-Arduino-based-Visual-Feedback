# Image-Classifier-Deep-CNN-
Simple ML built in Jupyter Notebook using Python 

## Project Overview
Using open-source libraries specialized in deep learning and machine learning, I trained a deep convolutional neural network (CNN) on two cleaned training datasets to classify images into two classes: Apple and Orange

  
\underline{**Detailed steps and code are in the Jupyter notebook named Image_Classifier.ipynb**}

  
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
- Automatically analyze the recently uploaded image. After finishing the prediction, delete the image
- This way, if a camera is implemented in the future, the project will be able to handle images without human interaction
- If am image (Apple, Orange) is provided, predict it, and display the output using the LCD and LED
- LCD: e.g., "Give me an image of either Apple or Orange." --> "It's an Apple/Orange."
- LED: Turn on the yellow LED if the image is Orange, or the red LED if it's an Apple
