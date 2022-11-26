import cv2
import mediapipe as mp
from cvzone.PoseModule import PoseDetector
cum = PoseDetector()
#fucking hate life had to change: "cum = PoseDetector" and forgot the "()" at the end
testicle = cv2.VideoCapture(0)

while True:
    success, img = testicle.read()
    img = cum.findPose(img)
    lmlist,bbox = cum.findPosition(img)
    cv2.imshow("cROSSHAIR", img)
    cv2.waitKey(1)
